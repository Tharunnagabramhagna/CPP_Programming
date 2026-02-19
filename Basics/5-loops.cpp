#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // While Loop //
    // Example :-
    int num = 1, n;
    cout << "Printing numbers from 1 to n : " << endl;
    cout << "Enter the number = ";
    cin >> n;
    while (num <= n)
    {
        cout << num << " ";
        num++;
    }
    cout << endl;

    // For Loop //
    // Example :-
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << " ";
    }
    cout << endl;

    // Break Statement (keyword) //
    int breakNum;
    cout << "Enter the breaking number = ";
    cin >> breakNum;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        if (i == breakNum)
            break;
    }
    cout << endl;

    // do-while Loop //
    // Ex-1)
    do
    {
        cout << "Hello World";
    } while (3 > 10);
    cout << endl;
    // Ex-2)
    int n0 = 10;
    int i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n0);
    cout << endl;

    // Continue Statement (keyword)
    int continueNum;
    cout << "Enter the leaving number = ";
    cin >> continueNum;
    for (int i = 1; i <= 10; i++)
    {
        if (i == continueNum || i == 7)
            continue;
        cout << i << " ";
    }
    cout << endl;

    // Nested Loops
    // Ex-1)
    int rows, columns;
    cout << "Enter number of rows and columns : ";
    cin >> rows >> columns;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
            cout << "* ";
        cout << endl;
    }

    // Practice Questions //

    /* 1) Write a program to print sum of the numbers
    from 1 to n. */
    // Ans)
    int sum = 0;
    cout << "Enter the number = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    // (or)
    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    cout << "Sum of " << n << " numbers = " << sum << endl;

    /* 2) Write a program to display sum of all
    numbers from 1 to n. */
    // Ans)
    int sumOdd = 0, oddNum;
    cout << "Enter the number = ";
    cin >> oddNum;
    for (int i = 1; i <= oddNum; i++)
    {
        if (i % 2 != 0)
            sumOdd += i;
    }
    // (or)
    // int i = 1;
    // while(i <= oddNum) {
    //     if(i % 2 != 0)
    //         sumOdd += i;
    //     i++;
    // }
    cout << "Sum of " << oddNum << " numbers = " << sumOdd << endl;

    /* 3) Write a Program to check if a given number
    is prime or not. */
    // Ans)
    int n1;
    bool isPrime = true;
    cout << "\nCHECKING A PRIME NUMBER..\n"
         << endl;
    cout << "Enter your number = ";
    cin >> n1;
    if (n1 <= 1)
    {
        cout << "Enter a valid input." << endl;
        return 1;
    }
    for (int i = 2; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    // (or)
    // for (int i = 2; i * i <= n1; i++)
    // {
    //     if (n1 % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    if (isPrime)
        cout << n1 << " is a prime number" << endl;
    else
        cout << n1 << " is not a prime number" << endl;

    /* 4) Sum of all numbers from 1 to n which are
    divisible by 3. */
    // Ans)
    int sum3Num = 0;
    cout << "\nEnter your number = ";
    cin >> n;
    for(int i = 1;i <= n;i++) {
        if(i%3 == 0)
            sum3Num += i;
    }
    cout << "Sum = " << sum3Num << endl;

    /* 5) Print Factorial of a number N. */
    int fact = 1;
    long double N; // upto 31 is limit
    cout << "Enter the number : ";
    cin >> N;
    for(int i = 1;i <= N;i++)
        fact *= i;
    cout << "Factorial of " << N << " is : " << fact << endl;

    /* 6) Write a Program to check if a given number
    is a power of 2 or not. */
    // Ans)
    int N1;
    cout << "Enter a number = \n";
    cin >> N1;
    int temp = N1;
    while (temp%2 == 0)
        temp /= 2;
    if(temp == 1)
        cout << N1 << " is power of 2." << endl;
    else
        cout << N1 <<" is not power of 2." << endl;

    // 7) Write a Program to print reverse of a number n.
    // Ans)
    int num1;
    cout << "\nREVERSING A DIGIT..\n" << endl;
    cout << "Enter a number: ";
    cin >> num1;

    int temp1 = num1;
    int digits = 0;
    // counts number of digits
    while (temp1 > 0)
    {
        digits++;
        temp1 /= 10;
    }

    cout << "Reversed digit = ";
    for (int i = 0; i < digits; i++)
    {
        int digit = num1 % 10;
        cout << digit; // prints each digit
        num1 /= 10;
    }
    cout << endl;

    return 0;
}