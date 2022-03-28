//   { copy and paste the code in seprate file }

/*
Overloading operators using a member function is very similar to overloading operators using a friend function. When overloading an operator using a member function:

The overloaded operator must be added as a member function of the left operand.
The left operand becomes the implicit *this object
All other operands become function parameters.


As a reminder, here’s how we overloaded operator+ using a friend function:
*/

#include <iostream>

class Cents
{
private:
    int fm_cents{};

public:
    Cents(int cents)
        : fm_cents{cents} {}

    // Overload Cents + int
    friend Cents operator+(const Cents &cents, int value);

    int getCents() const { return fm_cents; }
};

// note: this function is not a member function!
Cents operator+(const Cents &cents, int value)
{
    return Cents(cents.fm_cents + value);
}

int main()
{
    Cents cents1{6};
    Cents cents2{cents1 + 2};
    std::cout << "I have " << cents2.getCents() << " cents.\n";

    return 0;
}

/*
Converting a friend overloaded operator to a member overloaded operator is easy:

The overloaded operator is defined as a member instead of a friend (Cents::operator+ instead of friend operator+)
The left parameter is removed, because that parameter now becomes the implicit *this object.
Inside the function body, all references to the left parameter can be removed (e.g. cents.m_cents becomes m_cents, which implicitly references the *this object).


Now, the same operator overloaded using the member function method:
*/

#include <iostream>

class Cents
{
private:
    int m_cents{};

public:
    Cents(int cents)
        : m_cents{cents} {}

    // Overload Cents + int
    Cents operator+(int value);

    int getCents() const { return m_cents; }
};

// note: this function is a member function!
// the cents parameter in the friend version is now the implicit *this parameter
Cents Cents::operator+(int value)
{
    return Cents{m_cents + value};
}

int main()
{
    Cents cents1{6};
    Cents cents2{cents1 + 2};
    std::cout << "I have " << cents2.getCents() << " cents.\n";

    return 0;
}

/*
Note that the usage of the operator does not change (in both cases, cents1 + 2),
we’ve simply defined the function differently. Our two-parameter friend function becomes a one-parameter member function,
with the leftmost parameter in the friend version (cents) becoming the implicit *this parameter in the member function version.

Let’s take a closer look at how the expression cents1 + 2 evaluates.

In the friend function version, the expression cents1 + 2 becomes function call operator+(cents1, 2).
Note that there are two function parameters. This is straightforward.

In the member function version, the expression cents1 + 2 becomes function call cents1.operator+(2).
Note that there is now only one explicit function parameter, and cents1 has become an object prefix.
However, in lesson 12.10 -- The hidden “this” pointer,
we mentioned that the compiler implicitly converts an object prefix into a hidden leftmost parameter named *this.
So in actuality, cents1.operator+(2) becomes operator+(¢s1, 2), which is almost identical to the friend version.

Both cases produce the same result, just in slightly different ways.

*/