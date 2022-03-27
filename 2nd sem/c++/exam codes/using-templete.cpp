/*  [

      code not working!
      need a fix!!!!!!!!!

    ]

# create a function called swaps() that intercharge th values of the two arguments cout to it (pass
these arguments by refrence). make the funcction into a template.No it can used with all numerical
data types(char, int, float and soon). write a main() program to execute the function with several types.

ans::
templetes helps in defining generic classes and functions and hence allow generic programming. generic programming
is an approch where generic data types are used as parameters and the same piece of code work or various data types.
funtion templetes are used to crete family of functions with different argument types. the format of a function templete
is shown below:


templete<class T>
return_type function_name(arguments of type T)
{
   ...
   ..
}
*/

// program that swaps two numbers using function template

#include <iostream>
using namespace std;
template <class T>
void swap(T &a, T &b) // function template
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x1 = 4, y1 = 7;
    float x2 = 4.5, y2 = 7.5;
    cout << "Before Swap:" << endl;
    cout << "n x 1 = " << x1 << "ty1=" << y1;
    cout << "n x 2 = " << x2 << "ty2=" << y2;
    swap(x1, y1);
    swap(x2, y2);

    cout << "nnAfter swap:" << endl;
    cout << "n x 1 = " << x1 << "ty1=" << y1;
    cout << "n x 2 = " << x2 << "ty2=" << y2;
    return 0;
}