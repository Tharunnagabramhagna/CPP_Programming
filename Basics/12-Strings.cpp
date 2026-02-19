#include <iostream>
#include <string>
#include <cmath> // for log function
#include <algorithm>
#include <cstring> // for string lib
using namespace std;

bool isPlaindrome(string str)
{
    reverse(str.begin(), str.end());
    string revStr = str;
    if (str == revStr)
        return true;
    else
        return false;
}

int gcdNum(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int euclidGcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    // else
    return a;
}

int gcdRec(int a, int b)
{
    if (b == 0)
        return a;

    return gcdRec(b, a % b);
}

int lcm(int a, int b)
{
    int gcd = gcdRec(a, b);
    return (a * b) / gcd;
}

int main()
{
    // Character Arrays //

    // Initializing string
    // Ex-1)
    char arr1[] = {'t', 'r', 'y', '\0'};
    char arr2[] = "Tharun"; // string literals
    cout << arr1 << endl;
    cout << arr2 << endl;
    cout << strlen(arr1) << endl; // string function
    // Ex-2)
    char name[6];
    cout << "Enter your name = ";
    cin >> name;
    cout << "Your name is ";
    for (char val : name)
        cout << val << " ";
    cout << endl;
    // Ex-3)
    char word[100];
    cout << "Enter a word = ";
    cin.getline(word, 100, '!'); // delimiter = !
    // the characters enterned after '!' don't appear in output.
    cout << "The Word is " << word << endl;
    // Ex-4)
    // calculating without str lib
    char String[12] = "Hello World";
    int len = 0;
    for (int i = 0; String[i] != '\0'; i++)
        len++;
    cout << "Length of string = " << len << endl; // '\0' not included

    // Strings //

    string str = "Tharun";
    str = "Dhanush"; // resizable
    cout << str << endl;

    // str lib used directly
    // Ex-1)
    string str1 = "Tharun";
    string str2 = " is a marvel fan";
    string str0 = str1 + str2;
    cout << str0 << endl;
    cout << "Length of str0 = " << str0.length() << endl;
    // Ex-2)
    string str3 = "HAHAHA";
    string str4 = "HAHAHA";
    // 1 => true ; 0 => false
    cout << "str3 == str4 : " << (str3 == str4) << endl;
    cout << "str3 < str1 : " << (str3 < str1) << endl;

    // Input a string
    string letters;
    cout << "Enter your letters : ";
    getline(cin, letters);
    cout << "Output = " << letters << endl;

    // Loops in a String
    string loopStr = "Joe is cooking.";
    for (char ch : loopStr)
        cout << ch << " ";
    cout << endl;

    // Reverse a string
    string revStr = "hello";
    reverse(revStr.begin(), revStr.end());
    cout << "Reversed string = " << revStr << endl;

    // Q) Find if a string is palindrome or not?
    // Ans)
    string plainStr1;
    cout << "Enter a word to check if it's plaindrome = ";
    getline(cin, plainStr1);

    if (isPlaindrome)
        cout << plainStr1 << " is a Plaindrome." << endl;
    else
        cout << plainStr1 << " is not a Plaindrome." << endl;

    // check leetcode 125

    // Q) Remove all occurances => LeetCode - 1910
    // Questions for interviews => 125,1910,567,151,443

    // Function for count of digits
    int n = 18827;
    cout << "Count of digits in n = " << (int)(log10(n) + 1) << endl;

    // Greatest common factor of two Numbers
    int a = 20, b = 28;
    cout << "GCD of a and b = " << gcdNum(a, b) << endl; // 4
    // Euclid's Algorithm
    cout << "Euclid's GCD = " << euclidGcd(6, 12) << endl;         // 6
    cout << "Euclid Recursive GCD = " << euclidGcd(3, 12) << endl; // 3
    cout << "LCM of a and b = " << lcm(a, b) << endl;

    return 0;
}