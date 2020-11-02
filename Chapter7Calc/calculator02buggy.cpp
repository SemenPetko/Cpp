/*
This file is known as calculator02buggy.cpp

I have inserted 5 errors that should cause this not to compile
I have inserted 3 logic errors that should cause the program to give wrong results

First try to find an remove the bugs without looking in the book.
If that gets tedious, compare the code to that in the book (or posted source code)

Happy hunting!
*/

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token {
public:
	char kind;        // what kind of token
	bool value;     // for numbers: a value 
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, bool val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();      // get a Token (get() is defined elsewhere)
	void putback(Token t);    // put a Token back
private:
	bool full;        // is there a Token in the buffer?
	Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
					  // remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
	case '=':    // for "print"
	case 'x':    // for "quit"
	case '(': case ')': case '^': case '|': case '&': case '{': case '}': case '!':
		return Token(ch);        // let each character represent itself
	case '0': case '1':
	{
		// put digit back into the input stream
		return Token('8', (ch == '1') ? true : false);  // let '8' represent "a number"
	}
	case 't': case 'T':
	{
		for (int i = 0; i < 3; i++)
			cin >> ch;
		return Token('8', true);
	}
	case 'f': case 'F':
	{
		for (int i = 0; i < 4; i++)
			cin >> ch;
		return Token('8', false);
	}
	default:
		error("Bad token");
	}
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

						//------------------------------------------------------------------------------

bool expression();    // declaration so that primary() can call expression()
bool term();


//------------------------------------------------------------------------------

// deal with numbers and parentheses
bool primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '(': case '{':    // handle '(' expression ')'
	{
		bool d = expression();
		t = ts.get();
		if (t.kind != ')' && t.kind != '}') error("')' or '}' expected");
		return d;
	}
	case '!':
	{
		return !primary();
	}
	case '8': // we use '8' to represent a number
	{
		bool val = t.value;

		return val;								// return the number's value
	}
	case 'q':
		ts.putback(t.kind);
		return -1;
	default:
		error("primary expected");
	}
}


//------------------------------------------------------------------------------

// deal with *, /, and %
bool term()
{
	bool left = primary();
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case '^':
			left ^= primary();
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}


//------------------------------------------------------------------------------


bool mid()
{
	bool left = term();      // read and evaluate a Term
	Token t = ts.get();        // get the next token from token stream
	while (true) {
		switch (t.kind) {
		case '&':
			left *= term();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}


// deal with + and -
bool expression()
{
	bool left = mid();      // read and evaluate a Term
	Token t = ts.get();        // get the next token from token stream
	while (true) {
		switch (t.kind) {
		case '|':
			left += mid();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}

//------------------------------------------------------------------------------

int main() {
	try
	{
		bool val = 0;
		while (cin) {
			Token t = ts.get();

			if (t.kind == 'x') break; // 'x' for quit
			if (t.kind == '=')        // '=' for "print now"
				cout << "=" << val << '\n';
			else
				ts.putback(t);
			val = expression();
		}
		keep_window_open();
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}

//-------------------------------------