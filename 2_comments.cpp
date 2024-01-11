/*
C++ Comments

Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.

Single-line Comments
Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).

C++ Multi-line Comments
Multi-line comments start with /* and ends with */

// Any text between /* and */ will be ignored by the compiler: for Example:-
#include <iostream>
using namespace std;

int main()
{
    // THIS IS SINGLE LINE COMMENT
    cout << "thIS IS SINGLE LINE COMMENT \n";
    /*
    this is
    multiline
    comment

    */
    cout << "This is multiline comment";
    return 0;
}