#include <iostream>
#include <string>
using namespace std;

int main()
{
    // INPUT AND OUTPUT //
    // Ex-1) Addition of a and b
    int a, b;
    // input
    cout << "Enter a and b values  = ";
    cin >> a >> b;
    // output
    cout << "Sum = " << a + b << endl;
    // Ex-2)
    std::string name;
    int age;
    // input
    cout << "Enter name and age = ";
    cin >> name >> age;
    // output
    cout << "Your name is " << name << " and age is " << age << endl;
    // Ex-3)
    std::string firstName, lastName;
    // input
    cout << "Enter your first and last Names = ";
    cin >> firstName;
    cin >> lastName;
    // output
    cout << "Your name is " << firstName << " " << lastName << endl;

    /* OPERATORS */

    // 1) Arithmetic Operators //

    // I) Unary => +,-,*,/,%
    // Example-1)
    a = 10, b = 20;
    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl; // 0.5 => 0
    cout << "Modulo = " << a % b << endl;
    int res = a + b - 10 * 80 / 10 % 20;
    // 10+20-800/10%20
    // 30-80%20
    // 30-0 => 30
    cout << "Result = " << res << endl;

    // II)Binary => ++,--
    // increment operator
    int x = 10, y, z;
    y = ++x;
    z = x++;
    cout << "Values of x,y and z = " << x << " " << y << " " << z << endl; // 12 11 11
    // Decrement Operator
    int p = 37, q, r;
    q = (--p) % 10;
    // 36(mod 10) => 3.6 => 6 (ten place digit)
    r = q-- / 2;
    // 6/2 => 3
    cout << "Values of p,q and r = " << p << " " << q << " " << r << endl; // 36 5 3

    // 2) Relational Operator //

    // only Binary => ==,>,<,<=,>=,!=
    cout << "Relational Operators" << endl;
    cout << (13 > 20) << endl;
    cout << (675 < 992) << endl;
    cout << (40 <= 99) << endl;
    cout << (76 >= 76) << endl;
    cout << ((x + 2) == (y - 10)) << endl;
    cout << (p != z) << endl;

    // 3) Logical Operator //
    cout << "Logical Operators" << endl;
    cout << ((a > b) && (p > r)) << endl;
    cout << ((a > b) || (p > r)) << endl;
    cout << (!a) << endl;

    // 4) Bitwise Operators
    cout << "Bitwise Operators" << endl;
    int bit1 = 26, bit2 = 50;
    cout << "bit1 & bit2 : " << ((bit1) & (bit2)) << endl; // AND gate
    // binary code => 00010010 = 18
    cout << "bit1 | bit2 : " << (bit1 | bit2) << endl; // OR gate
    // binary code => 00111010 = 58
    cout << "bit1 ^ bit2 : " << (bit1 ^ bit2) << endl; // XOR gate
    // binary code => 00101000 = 40
    cout << "10 << 1 : " << (10 << 1) << endl; // formula => x * 2^n (Left shift)
    cout << "10 >> 3 : " << (10 >> 3) << endl; // formula => x / 2^n (Right shift)
    cout << "~bit2 : " << (~bit2) << endl;     // formula => ~(bit2) = -(bit2+1)

    // 5) Assigment Operators
    int var = 7;
    // var += 10;
    // var -= 12;
    // var *= 80;
    // var /= 10;
    var <<= 2; // var = var << 2
    var >>= 1; // var = var >> 1
    // var %= 9;
    cout << "Var value : " << var << endl;

    // 6) Other Operators
    // i) Conditional/ternary operator
    int var1 = 98, var2 = 67;
    cout << "Biggest value : " << ((var1 > var2) ? var1 + 2 : var2 + 10) << endl;
    // ii) sizeof operator
    cout << "Size of var1 : " << sizeof(var1) << endl;
    // iii) address operator
    int *ptr;
    ptr = &var1; // & => address
    cout << "Address of ptr : " << &ptr << endl;

    // OPERATORS PRECEDENCE AND ASSOCIATIVITY //
    // Ex-1)
    int value = (2 + 3) * 5; // 5*5 = 25
    cout << "Value Before = " << value << endl;
    value = 2 + 3 * 5; // 2+15 = 17
    cout << "Value After = " << value << endl;
    // Ex-2)
    var = 2 + 3 * 5 / 2 % 3;
    // 2+(3*5)/2%3
    // 2+(15/2)%3
    // 2+(7%3) = 2+1 = 3
    cout << "Final Answer1 = " << var << endl;
    // Ex-3)
    var = 2 + 3 | 12 / 6 - 1 << 1 && 6 % 7 / 3 * 5;
    // 2+3|(12/6)-1 << 1 && ((6%7)/3)*5
    // 2+3|2-1 << 1 && (6/3)*5
    // 2+3|2-1 << 1 && 2*5
    // (2+3)|(2-1) << 1 && 10
    // 5|(1 << 1) && 10
    // (5|2) && 10 = 7 && 10 = 1
    cout << "Final Answer2 = " << var << endl;
    // Ex-4)
    var = 2 + 3 & 12 / 6 - 1 << 1 && 6 % 7 / 3 * 5;
    // 2+3&(12/6)-1 << 1 && ((6%7)/3)*5
    // 2+3&2-1 << 1 && (6/3)*5
    // 2+3&2-1 << 1 && 2*5
    // (2+3)&(2-1) << 1 && 10
    // 5&(1 << 1) && 10
    // (5&2) && 10 = 0 && 10 = 0
    cout << "Final Answer3 = " << var << endl;
    // Ex-5)
    var = 2 + 3 & 12 / 6 - 1 << 1 && 6 % 7 / 8 * 5;
    // 2+3&(12/6)-1 << 1 && ((6%7)/8)*5
    // 2+3&2-1 << 1 && (6/8)*5
    // 2+3&2-1 << 1 && 0*5
    // (2+3)&(2-1) << 1 && 0
    // 5&(1 << 1) && 0
    // (5&2) && 0 = 0 && 0 = 0
    cout << "Final Answer4 = " << var << endl;
    // Ex-6)
    int rad = (2, 3, 4); // Left to right
    cout << "rad value = " << rad << endl;
    // Ex-7)
    int c, d;
    a = 10, b = 5, c = 8, d = 4;
    y = a / b ^ c * a % (c + d) << d - 2;
    // 10/5 ^ 8*10%(8+4) << 4-2
    // 10/5 ^ 8*10%12 << 4-2
    // 2 ^ 80%12 << 4-2
    // 2 ^ 8 << (4-2)
    // 2 ^ 8 << 2 = 2 ^ 32 = 34
    cout << "y value = " << y << endl;
    // Ex-8)
    x = 3;
    y = x++ + ++x;                                        // 3 + 5 = 8
    cout << "x and y values : " << x << " " << y << endl; // 5 8
    // Ex-9)
    p = 1, q = 2;
    z = p++ + q++ + p + q + ++p + ++q;
    cout << "Values of p and q : " << p << " " << q << endl;
    cout << "Value of z = " << z << endl;
    // This is a bad way of coding.
    // it's gives 17 (or) 15 as z value based on complier.
    // Ex-10)
    // 1)
    a = 3;
    b = (a++) + (a = 11); // 3 + 11 = 14
    cout << "b value in post increment = " << b << endl;
    // 2)
    a = 3;
    b = (++a) * (a = 10); // 10 * 10 = 100
    cout << "b value in pre increment = " << b << endl;
    // Here ++a is taken as 10 not 4 because a is assigned as 10.
    // In general we can say that this is a bad practice.
    // Ex-11)
    // 1)
    x = 5;
    cout << "Sum = " << x++ + ++x + 1 + ++x + x-- << endl; // 29
    cout << "Value of x : " << x << endl;                  // 7
    // 2)
    a = 3;
    cout << "Result : " << ++a - a++ + ++a << endl;
    cout << "Value of a : " << a << endl;
    // it has 6 (or) 7 as outputs
    // 3)
    x = 10, y = 20;
    z = x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
    // 10 - 9 + 19 - 20 + 9 - 20 + 10 - 19
    // 1 + 19 - 20 + 9 - 20 + 10 - 19
    // 20 - 20 + 9 - 20 + 10 - 19
    // 0 - 11 - 9 = -11-9 = -20
    cout << "Value of z = " << z << endl;
    cout << "Values of x and y = " << x << " " << y << endl; // 10 20

    // Practice Question //

    /* 1) Figure out how to find if a number
    is power of 2 without any loop. */
    // Ans)
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPower = (n > 0) && ((n & (n - 1)) == 0);

    if (isPower)
        cout << "It is a power of 2" << endl;
    else
        cout << "It is not a power of 2" << endl;

    return 0;
}