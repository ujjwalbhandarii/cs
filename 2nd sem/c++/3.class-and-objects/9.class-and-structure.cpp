/*
In C++, a structure is the same as a class except for a few differences.
The most important of them is security.
A Structure is not secure and cannot hide its implementation details from the end-user while a class is secure
and can hide its programming and designing details. Following are some differences between a class and a structure.

              class                                                                structure

Members of a class are private by default.	                       Members of a structure are public by default.

Memory allocation happens on the heap.	                           Memory allocation happens on a stack.

It is a reference type data type.	                               It is a value type data type.

It is declared using the class keyword.	                           It is declared using the struct keyword.

*/

// Program 2
// CPP Program to demonstrate that members of a structure
// are public by default.
#include <bits/stdc++.h>
using namespace std;

struct Test
{
    // x is public
    int x;
};
int main()
{
    Test t;
    t.x = 20;
    // works fine because x is public
    cout << t.x;
    getchar();
    return 0;
}
