#include <iostream>
using namespace std;
int main()
{

    // compound operator
    cout << endl;
    int value{10};
    value += 10;
    cout << "USINGCOMPOUND OPERATORS " << endl;
    cout << "After (value + 5): " << value << endl; // 20
    // likely, we can do / , * , - , + , %

    cout << endl;

    // relational operators: comparing stuffs
    int num1{1};
    int num2{2};
    cout << "USING RELATIONS OPERATORS " << endl;
    cout << boolalpha;
    cout << "num1 > num2  :  " << (num1 > num2) << endl; // wrapping the comparision thing in ( brakets ) is must
    cout << "num1 < num2  :  " << (num1 < num2) << endl;
    cout << "num1 >= num2 :  " << (num1 >= num2) << endl;
    cout << "num1 <= num2 :  " << (num1 <= num2) << endl;
    cout << "num1 == num2 :  " << (num1 == num2) << endl;
    cout << "num1 != num2 :  " << (num1 != num2) << endl;

    cout << endl;

    /*
    Logical operators:

    AND  ==>  '&&'
    OR   ==>  '||'
    NOT  ==>  '!'

    */
    cout << "LOGICAL OPERATORS" << endl;

    bool a{true};
    bool b{false};
    bool c{true};
    cout << "logical AND operator" << endl;
    cout << "a && b      :  " << (a && b) << endl;
    cout << "a && c      :  " << (a && c) << endl;
    cout << "a && b && c :  " << (a && b && c) << endl;
    cout << endl;

    cout << "logical OR operator" << endl;
    cout << "a || b      :  " << (a || b) << endl;
    cout << "a || c      :  " << (a || c) << endl;
    cout << "a || b || c :  " << (a || b || c) << endl;
    cout << endl;

    cout << "logical NOT operator" << endl;
    cout << "! a  :  " << (!a) << endl; // if 'A' is true we get false
    cout << "! b  :  " << (!b) << endl;
    cout << "! c  :  " << (!c) << endl;
    cout << endl;

    // combining all
    cout << "(!(a && b) || c) :  " << (!(a && b) || c) << endl;

    cout << endl;

    return 0;
}