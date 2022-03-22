/*
CONSTRUCTOR:
A constructor is a member function of a class that has the same name as the class name.
It helps to initialize the object of a class. It can either accept the arguments or not.
It is used to allocate the memory to an object of the class.
It is called whenever an instance of the class is created.
It can be defined manually with arguments or without arguments.
There can be many constructors in a class. It can be overloaded but it can not be inherited or virtual.
There is a concept of copy constructor which is used to initialize an object from another object.

DESTRUCTOR:
Like a constructor, Destructor is also a member function of a class that has the same name as the
class name preceded by a tilde(~) operator. It helps to deallocate the memory of an object.
It is called while the object of the class is freed or deleted.
In a class, there is always a single destructor without any parameters so it can’t be overloaded.
It is always called in the reverse order of the constructor.
if a class is inherited by another class and both the classes have a destructor then the destructor of the child
class is called first, followed by the destructor of the parent or base class.
*/

// *************** EXAMPLE *************************
#include <iostream>
using namespace std;
class Box
{
public:
    Box()
    {
        cout << "constructor" << endl;
    }
    ~Box()
    {
        cout << "destructor" << endl;
    }
};
int main()
{
    Box *myBoxArr = new Box[4];
    delete myBoxArr;
    return 0;
}

// *************** EXAMPLE *************************
#include <iostream>
using namespace std;

class Z
{
public:
    // constructor
    Z()
    {
        cout << "Constructor called" << endl;
    }

    // destructor
    ~Z()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Z z1; // Constructor Called
    int a = 1;
    if (a == 1)
    {
        Z z2; // Constructor Called
    }         // Destructor Called for z2
} // Destructor called for z1

/*
                   CONSTUCTOR                                                     DESTRUCTOR

1.	Constructor helps to initialize the object of a class.    	Whereas destructor is used to destroy the instances.

2.	It is declared as Classname( arguments if any )             Whereas it is declared as ~ ClassName(no arguments)
   {Constructor’s Body }.	                                    { }.

3.	Constructor can either accept arguments or not.         	While it can’t have any arguments.

4.	A constructor is called when an instance or                 It is called while object of the class
    object of a class is created.	                            is freed or deleted.

5.	Constructor is used to allocate the memory                  While it is used to deallocate the memory
    to an instance or object.	                                of an object of a class.

6.	Constructor can be overloaded.	                            While it can’t be overloaded.

7.	The constructor’s name is same as the class name.	        Here, its name is also same as the class name
                                                                preceded by the tiled (~) operator.

8.	In a class, there can be multiple constructors.	            While in a class, there is always a single destructor.

9.	There is a concept of copy constructor                      While here, there is no copy constructor concept.
    which is used to initialize an object
    from another object.


*/