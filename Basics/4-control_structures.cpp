#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // if statement //
    // Example-1)
    int money;
    cout << "Enter the amount you have : ";
    cin >> money;
    if (money >= 1000)
        cout << "Coffee in starbucks" << endl;
    cout << "Let's go home" << endl;
    // Example-2)
    std::string isRainy;
    cout << "Is weather is rainy(y/n) : ";
    cin >> isRainy;
    if (isRainy == "y" || isRainy == "yes" || isRainy == "Y" || isRainy == "YES")
        cout << "Weather is Rainy today" << endl;
    cout << "Weather is not Sunny today" << endl;

    // if-else statement //
    int age;
    cout << "Enter your age = ";
    cin >> age;
    if (age >= 18)
        cout << "You can drive a car" << endl;
    else
        cout << "You can't drive a car" << endl;
    cout << "Bye!" << endl;

    // else-if ladder //
    int marks;
    cout << "Calculating the Grade of a student.." << endl;
    cout << "Enter your marks = ";
    cin >> marks;
    if (marks >= 90)
        cout << "Grade : A" << endl;
    else if (marks >= 70)
        cout << "Grade : B" << endl;
    else if (marks >= 50)
        cout << "Grade : C" << endl;
    else if (marks >= 35)
        cout << "Grade : D" << endl;
    else
        cout << "Grade : Fail" << endl;

    // Nested Statements //
    int num;
    cout << "Enter the number = ";
    cin >> num;
    if (num >= 0)
    {
        cout << num << " is positive";
        if (num % 2 == 0)
            cout << " and also even" << endl;
        else
            cout << " and also odd" << endl;
    }
    else
    {
        cout << num << " is negative";
        if (num % 2 == 0)
            cout << " and also even" << endl;
        else
            cout << " and also odd" << endl;
    }

    // Switch statement //
    // Ex-1)
    int day;
    cout << "Enter a day(1-7) : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "It's not a valid day" << endl;
    }
    // Ex-2)
    cout << "\nSIMPLE CALCULATOR\n"
         << endl;
    double x, y;
    char ch;
    cout << "Enter x and y values = ";
    cin >> x >> y;
    cout << "Enter any operator(+,-,*,/,%) :\nEnter any other to exit\n";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;
    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    default:
        cout << "Exiting the calculator" << endl;
        break;
    case '/':
        if (y == 0)
            cout << "Division by zero gives error" << endl;
        else
            cout << x << " / " << y << " = " << x / y << endl;
        break;
    case '%':
        if (y == 0)
            cout << "Modulo by zero gives error" << endl;
        else
            cout << x << " % " << y << " = " << fmod(x, y) << endl;
        break;
    }
    // Ex-3)
    char alpha;
    cout << "\nFINDING VOWELS IN ALPHABETS..\n";
    cout << "Enter alphabet (a-z) : ";
    cin >> alpha;
    switch (alpha)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << alpha << " is a vowel alphabet." << endl;
        break;
    default:
        cout << alpha << " is not a vowel alphabet." << endl;
    }
    // Ex-4)
    char letters;
    cout << "\nEnter your choice : ";
    cin >> letters;
    switch (letters + 3)
    {
    default:
        cout << "Enter a valid choice";
        break;
    case 'D':
        cout << "The character is D";
        break;
    case 'G':
        cout << "The character is G";
        break;
    case 'J':
        cout << "The character is J";
        break;
    case 'M':
        cout << "The character is M";
        break;
    }

    // Practice Questions //

    // 1) Write a program to check if a student is pass or fail?
    // marks > 30 ==> PASS
    // marks <= 30 ==> FAIL
    // Ans)
    int stdMarks;
    cout << "\nEnter student marks : ";
    cin >> stdMarks;
    if (stdMarks > 30 && stdMarks <= 100)
        cout << "Student is PASS" << endl;
    else if (stdMarks <= 30 && stdMarks >= 0)
        cout << "Student is FAIL" << endl;
    else
        cout << "Enter valid input." << endl;

    // 2) Write a program to give grades to a student.
    // marks < 30 is C
    // 30 <= marks < 70 is B
    // 70 <= marks < 90 is A
    // 90 <= marks <= 100 is A+
    // Ans)
    int gradeMarks;
    cout << "Enter the marks : ";
    cin >> gradeMarks;
    if (gradeMarks >= 0 && gradeMarks < 30)
        cout << "Grade : C" << endl;
    else if (gradeMarks >= 30 && gradeMarks < 70)
        cout << "Grade : B" << endl;
    else if (gradeMarks >= 70 && gradeMarks < 90)
        cout << "Grade : A" << endl;
    else if (gradeMarks >= 90 && gradeMarks <= 100)
        cout << "Grade : A+" << endl;
    else
        cout << "Enter valid input." << endl;

    /* 3) Write a program to find if a character
    entered by user is uppercase or not? */
    // Ans)
    char userText;
    cout << "Enter the character = ";
    cin >> userText;
    if (userText >= 'A' && userText <= 'Z')
        cout << userText << " is a uppercase letter." << endl;
    else if (userText >= 'a' && userText <= 'z')
        cout << userText << " is a lowercase letter." << endl;
    else
        cout << "Enter a valid input." << endl;
    // (or)
    // if (userText >= 65 && userText <= 90)
    //     cout << userText << " is a uppercase letter." << endl;
    // else if (userText >= 97 && userText <= 122)
    //     cout << userText << " is a lowercase letter." << endl;
    // else
    //     cout << "Enter a valid input." << endl;

    /* 4) Write a program to check if the given number
    is a natural number? */
    // Ans)
    int naturalNum;
    cout << "\nFINDING A NATURAL NUMBER..\n"
         << endl;
    cout << "Enter the number = ";
    cin >> naturalNum;
    if (naturalNum >= 1)
        cout << naturalNum << " is a natural number" << endl;
    else if (naturalNum == 0)
        cout << naturalNum << " is a whole number" << endl;
    else if (naturalNum < 0)
        cout << naturalNum << " is a negative number" << endl;
    else
        cout << "Enter a valid input." << endl;

    /* 5) Write a program to check if a given number is
    Armstrong number or not? */
    // Ans)
    int n, sum, d1, d2, d3, temp;
    cout << "\nARMSTRONG NUMBER\n"
         << endl;
    cout << "Enter the number = ";
    cin >> n;
    temp = n;
    // d1 => last digit
    d1 = n % 10;
    n = n / 10;
    d1 = (d1 * d1 * d1); // cubed d1
    // d2 => middle digit
    d2 = n % 10;
    n = n / 10;
    d2 = (d2 * d2 * d2); // cubed d2
    // d3 => last digit
    d3 = (n * n * n); // cubed d3
    // final sum
    sum = d1 + d2 + d3;
    // (or)
    // while (n > 0) {
    //     rem = n % 10;
    //     d += (rem*rem*rem);
    //     n = n / 10;
    // }
    if (temp == sum)
        cout << temp << " is a Armstrong Number." << endl;
    else
        cout << temp << " is not a Armstrong Number." << endl;

    return 0;
}