#include <iostream>
#include <string>
#include <iomanip> // used for formatting output
#include <limits>  // header for numeric limits
#include <limits.h>
using std::cin;
using std::cout;
using std::endl;
const int a = 10;
#define PI 3.14

int main()
{
    // printing constants
    cout << a << endl;
    cout << PI << endl;

    // integer example
    int var = 23;
    var = 0x15; // hexadecimal value is 21
    cout << var << endl;
    // From ranges of short int
    unsigned short int val1 = 65536;
    signed short int val2 = -32769;
    cout << "value of val1 : " << val1 << endl;
    cout << "value of val2 : " << val2 << endl;

    // string example
    const std::string str = "Maxwell";
    cout << str << endl;

    // float example
    float price = 100.29f;
    cout << price << endl;

    // character example
    char star = '*';
    cout << star << endl;

    // Bool example
    bool isTrue = true;
    cout << isTrue << endl;

    // double example
    double pi = 3.1415926535;
    cout << std::setprecision(15) << pi << endl; // iomanip
    // (or)
    double value = 10.29989719;
    cout << std::setprecision(10); // iomanip
    cout << value << endl;

    // printing value with text
    int main = 189;
    cout << "value of main : " << main << endl;

    // Printing the size of each datatype
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of bool : " << sizeof(bool) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl; // 2 bytes

    // To find limit for any datatype
    cout << "Max range of float : " << std::numeric_limits<float>::max() << endl;
    cout << "Min range of float : " << std::numeric_limits<float>::min() << endl;

    // Addition of 2 numbers
    int num1 = 10, num2 = 20;
    cout << "Sum of numbers = " << num1 + num2 << endl;

    // character datatype
    char ch1 = 128;
    char ch2 = 'a';
    cout << int(ch1) << endl;                            // type-casting
    cout << int(ch2) << endl;                            // from char circle
    cout << "Max range of char : " << SCHAR_MAX << endl; // limits.h file

    // Type Casting
    float x = 18.24f;
    int y = 24.12f;                                     // automatically typecasted to int => implicit type-casting
    std::cout << "Sum = " << x + float(y) << std::endl; // explicit type-casting

    // wchar_t datatype
    cout << "Max range of wchar_t : " << std::numeric_limits<wchar_t>::max() << endl;
    cout << "Min range of wchar_t : " << std::numeric_limits<wchar_t>::min() << endl;
    wchar_t emoji = L'😂'; // just stored in data
    cout << emoji << endl;

    // Bool datatype
    int z = 10 + 90 + true - false;
    cout << "Z value = " << z << endl;                                          // 101
    bool roll = 7;                                                              // 7 => 1 (implicit type-casting)
    cout << roll << endl;                                                       // displays 1
    cout << "Size of bool = " << sizeof(bool) << " byte" << endl;               // 1
    cout << "Max range of bool : " << std::numeric_limits<bool>::max() << endl; // 1
    cout << "Min range of bool : " << std::numeric_limits<bool>::min() << endl; // 0

    // void datatype
    // It's used in functions and pointers only.
    // void variable can't be declared.
    void *ptr; // can be type-casted to any datatype
    int age = 10;
    ptr = &age;
    cout << "Value of ptr = " << *(int *)ptr << endl; // explicit

    /* Due to this "using namespace std"
    has become a bad practice */
    int cout = 13;
    std::cout << "cout value = " << cout;

    return 0;
}