#include <iostream>
using namespace std;

// function definitions

// printing Hello //
int printHello()
{
    cout << "Hello!" << endl;
    return 1;
}

// sum of two numbers //
double sum(double a, double b) // a,b => parameters
// parameters (or) formal parameters
{
    double S = a + b;
    return S;
}

// min of 2 nums //
double minValue(double a, double b)
{
    return (a < b) ? a : b;
}

// sum from 1 to n
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

// calculating n factorial
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial of " << n << " = " << fact << endl;
}

// function declaration
// function for pass by value //
int sum1(int a, int b);

// sum of digits //
int digitSum(int n)
{
    int digit = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        digit += rem;
        n = n / 10;
    }
    return digit;
}

// binomial function //
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}
int binomial(int n, int r)
{
    int factN = fact(n);
    int factR = fact(r);
    int factNR = fact(n - r);

    return factN / (factR * factNR);
}

// prime number functions //
void primeNum(int n);
void primeN(int n);

// fibonacci series function //
void printFibo(int n)
{
    int fib1 = 0, fib2 = 1;

    cout << "\nFibonacci sequence : \n";

    for (int i = 0; i < n; i++)
    {
        cout << fib1 << " ";
        int fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    cout << endl;
}

// function to convert decimal to binary //
void decToBinary(int n)
{
    int res = 0, pow = 1, rem;
    int temp = n;
    while (temp > 0)
    {
        rem = temp % 2;     // store remainder
        temp /= 2;          // reduce number
        res += (rem * pow); // stores final result
        pow *= 10;          // represent digit place
    }
    cout << "Binary of " << n << " = " << res << endl;
}

// function to convert binary to decimal //
bool isBinary(int n)
{
    if (n == 0)
        return true;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem != 0 && rem != 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
void binaryToDec(int n)
{
    int rem, res = 0, pow = 1;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        res += (rem * pow);
        pow *= 2;
    }
    cout << "Decimal number of " << temp << " = " << res << endl;
}

int main()
{
    // FUNCTIONS //
    // function callbacks (or) invokes
    // Ex-1)
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    // we can call a function n times.
    /* return type is displayed by
    printing the function.*/
    cout << printHello() << endl;

    // Ex-2)
    int x = 5, y = 10;
    // implicit type-casting
    // This is a example for call by value
    cout << "\nSum of x and y = " << sum(x, y) << endl;
    // x,y => arguments
    // arguments (or) actual parameters
    cout << "Sum of doubles = " << sum(15.99, 98.67) << endl;

    // Ex-3)
    cout << "\nMin value is " << minValue(19.89, 67.76) << endl;
    cout << "Min value is " << minValue(20, 37) << endl;

    // Call (or) pass by value //
    int a = 2, b = 3;
    cout << "Sum1 = " << sum1(a, b) << endl;
    cout << "a and b in main = " << a << " " << b << endl;

    // Practice Questions //
    // 1) Write a function to print sum of n numbers ?
    // Ans)
    int n;
    cout << "\nSum of n numbers..\n"
         << endl;
    cout << "\nEnter the number = ";
    cin >> n;
    cout << "Sum of " << n << " numbers = " << sumN(n) << endl;

    // 2) Write a function to print factorial of a number ?
    // Ans)
    cout << endl;
    cout << "\nFACTORIAL OF N NUMBERS..\n"
         << endl;
    factorial(5);
    factorial(12);

    // 3) Write a function to print sum of digits of a number ?
    // Ans)
    int num;
    cout << "\nSUM OF DIGITS..\n"
         << endl;
    cout << "Enter the number = ";
    cin >> num;
    cout << "Sum of digits = " << digitSum(num) << endl;

    // 4) Calculate nCr binomial coefficient for n and r.
    // Ans)
    // nCr = n! / r!*(n-r)!
    int n0, r;
    cout << "\nCALCULATING nCr...\n"
         << endl;
    cout << "Enter n and r values = ";
    cin >> n0 >> r;
    cout << "Binomial coefficient for " << n0 << "C" << r << " = " << binomial(n0, r) << endl;

    // WAF => Write a function (shortform) //
    // 5) WAF to check if a number is prime or not.
    // Ans)
    int n1;
    cout << "\nCHECKING A NUMBER IS IT PRIME OR NOT..\n"
         << endl;
    cout << "Enter a number = ";
    cin >> n1;
    primeNum(n1);

    // 6) WAF to print all prime numbers from 2 to N.
    // Ans)
    int n2;
    cout << "\nPRINTING N PRIME NUMBERS...\n"
         << endl;
    cout << "Enter a number = ";
    cin >> n2;
    primeN(n2);

    // 7) WAF to print n fibonacci series.
    // Ans)
    int n3;
    cout << "\nPRINTING N FIBONACCI SERIES..\n"
         << endl;
    cout << "Enter the number : ";
    cin >> n3;
    printFibo(n3);

    // 8) WAF to convert decimal number to binary.
    // Ans)
    int n4;
    cout << "\nCONVERTING DECIMAL TO BINARY..\n"
         << endl;
    cout << "Enter the decimal number = ";
    cin >> n4;
    if (n < 0)
        cout << "Enter only positive numbers." << endl;
    else
        decToBinary(n4);

    // binary from 1 to 10 //
    int n5 = 10;
    cout << "\nFIRST 10 BINARY NUMBERS..\n"
         << endl;
    for (int i = 1; i <= n5; i++)
        decToBinary(i);

    // 9) WAF to convert binary numbers to decimal number.
    // Ans)
    int n6;
    cout << "\nCONVERTING NUMBER TO BINARY..\n"
         << endl;
    cout << "Enter the binary code : ";
    cin >> n6;
    if (!isBinary(n6))
        cout << "Enter a valid input like 0's and 1's" << endl;
    else
        binaryToDec(n6);

    return 0;
}

// Function definitions

int sum1(int a, int b)
{
    a += 10; // 12
    b += 10; // 13
    cout << "a and b in sum1 = " << a << " " << b << endl;
    return a + b; // 25
}

void primeNum(int n)
{
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << n << " is a Prime number\n";
    else
        cout << n << " is a not a Prime number\n";
}

void primeN(int n)
{
    bool isPrime;
    for (int i = 2; i <= n; i++)
    {
        isPrime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        if (isPrime)
            cout << i << "\t";
    }
}