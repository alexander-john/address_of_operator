/*
 * What You Need:
 * CLion
 *
 * Step 1:
 * Download Zip
 *
 * Step 2:
 * Unzip
 *
 * Step 3:
 * Open main.cpp in CLion
 *
 * Step 4:
 * Done!
 *
 * The address of a variable can be obtained by preceding the name of a variable with an ampersand
 * sign (&), known as address-of operator for example:
 *
 * foo = &myvar;
 *
 * This would assign the address of variable myvar to foo; by preceding the name of the variable
 * myvar with the address-of operator (&), we are no longer assignming the content of the variable
 * itself to foo, but its address.
 *
 * The actual address of a variable in memory cannot be known before runtime, but lets assume, in
 * order to help clarify some concepts, that myvar is placed during runtime in the memory address 1776
 *
 * Example:
 * myvar = 25;
 * foo = &myvar;
 * bar = myvar;
 *
 * First, we have assigned the value 25 to myvar
 *
 * The second statement assigns foo the address of myvar, which we have assumed to be 1776.
 *
 * Finally, the third statement, assigns the value contained in myvar to bar.
 *
 * The variable that stores the address of another variable is what in C++ is called a pointer.
 *
 * This program was written by Alexander John using information obtained from the source below:
 *
 * Source: https://cplusplus.com/doc/tutorial/pointers/
 */

#include <iostream>

int main() {
    int myVar = 10;

    auto *myPointer = &myVar;   // variable myPointer stores address of myVar

    return 0;
}
