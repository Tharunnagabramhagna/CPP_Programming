#include <iostream>
using namespace std;

int main()
{
    //  SQUARE PATTERN //

    // 1) print a pattern like the below one :-
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // Ans)
    // rows == columns => n
    int n, i, j;
    cout << "SQUARE PATTERN-1\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n;
    // output
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }

    // 2) print a pattern like the below one :-
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // Ans)
    int N;
    cout << "\nSQUARE PATTERN-2\n"
         << endl;
    // input
    cout << "Enter the number : ";
    cin >> N;
    // output
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << "* ";
        cout << endl;
    }

    // 3) print a pattern like the below one :-
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    // Ans)
    int n0;
    cout << "\nSQUARE PATTERN-3\n"
         << endl;
    // input
    cout << "Enter the number : ";
    cin >> n0;
    // output
    for (int i = 0; i < n0; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n0; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    // (or)
    // char ch;
    // cout << "Enter the character : ";
    // cin >> ch;
    // for (char i = 'A'; i <= ch; i++)
    // {
    //     for (char j = 'A'; j <= ch; j++)
    //         cout << j << " ";
    //     cout << endl;
    // }

    // 4) print a pattern like the below one :-
    // 1    2   3
    // 4    5   6
    // 7    8   9
    // Ans)
    int n1, num = 1;
    cout << "\nSQUARE PATTERN-4\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n1;
    // output
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
    cout << "\nafter pattern num value : " << num << endl;

    // 5) print a pattern like the below one :-
    // A B C
    // D E F
    // G H I
    // Ans)
    int n2;
    char ch1 = 'A';
    cout << "\nSQUARE PATTERN-5\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n2;
    // output
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }

    // TRIANGLE PATTERN //

    // 1) Print the below pattern :-
    // *
    // * *
    // * * *
    // * * * *
    // Ans)
    int n3;
    cout << "\nTRIANGLE PATTERN-1\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n3;
    // output
    cout << "\nDISPLAYING THE PATTERN :" << endl;
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 2) Print the below pattern :-
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // Ans)
    int n4;
    cout << "\nTRIANGLE PATTERN-2\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n4;
    // output
    cout << "\nDISPLAYING THE PATTERN :" << endl;
    for (int i = 0; i < n4; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 3) Print the below pattern :-
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // Ans)
    int n5;
    cout << "\nTRIANGLE PATTERN-3\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n5;
    // output
    cout << "\nDISPLAYING THE PATTERN :" << endl;
    for (int i = 0; i < n5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    // 4) Print the below pattern :-
    // A
    // B B
    // C C C
    // D D D D
    // Ans)
    int n6;
    cout << "\nTRIANGLE PATTERN-4\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n6;
    // output
    cout << "\nDISPLAYING THE PATTERN :" << endl;
    for (int i = 0; i < n6; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    // (or)
    // char ch2;
    // cout << "TRIANGLE PATTERN-4\n"
    //      << endl;
    // // input
    // cout << "Enter a number : ";
    // cin >> ch2;
    // // output
    // for (char i = 'A'; i <= ch2; i++)
    // {
    //     for (int j = 1; j <= (i - 'A' + 1); j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // REVERSE-TRIANGLE PATTERN //

    // 1) Display the below pattern in output :-
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // Ans)
    int n7;
    cout << "\nREVERSE-TRIANGLE PATTERN-1\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n7;
    // output
    cout << "\nDISPLAYING THE OUTPUT :" << endl;
    for (int i = 0; i < n7; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 2) Display the below pattern in output :-
    // A
    // B A
    // C B A
    // D C B A
    // Ans)
    int n8;
    cout << "\nREVERSE-TRIANGLE PATTERN-2\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n8;
    // output
    cout << "\nDISPLAYING THE OUTPUT :" << endl;
    for (int i = 0; i < n8; i++)
    {
        char ch = 'A' + i;
        for (int j = i; j >= 0; j--)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    // FLOYD'S TRIANGLE PATTERN //

    // 1) Display the below pattern in output :-
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int n9, num2 = 1;
    cout << "\nFloyd's Triangle pattern-1\n"
         << endl;
    // input
    cout << "Enter a number : ";
    cin >> n9;
    // output
    cout << "\nDISPLAYING THE OUTPUT :"
         << endl;
    for (int i = 0; i < n9; i++)
    {
        for (int j = 0; j < i + 1; j++)
        // (or) for(int j = i+1;j > 0;j--)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << endl;
    }

    // 2) Display the below pattern in output :-
    // A
    // B C
    // D E F
    // G H I J
    // Ans)
    int n10;
    char ch2 = 'A';
    cout << "\nFloyd's Triangle pattern-2\n"
         << endl;
    // input
    cout << "Enter a number = ";
    cin >> n10;
    // output
    cout << "\nDISPLAYING THE OUTPUT :"
         << endl;
    for (int i = 0; i < n10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
    }

    // INVERTED-TRIANGLE PATTERN //

    // 1) Write a program to print the below pattern :-
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    // Ans)
    int n11;
    cout << "\nINVERSE-TRIANGLE PATTERN-1\n"
         << endl;
    // input
    cout << "Enter a number = ";
    cin >> n11;
    // output
    cout << "\nDisplaying the output : " << endl;
    for (int i = 0; i < n11; i++)
    {
        for (int space = 0; space < i; space++)
            cout << "  ";
        for (int j = 0; j < n11 - i; j++)
            cout << (i + 1) << " ";
        cout << endl;
    }

    // 2) Write a program to print the below pattern :-
    // * * * *
    //   * * *
    //     * *
    //       *
    // Ans)
    int n12;
    cout << "\nINVERSE-TRIANGLE PATTERN-2\n"
         << endl;
    // input
    cout << "Enter the number : ";
    cin >> n12;
    // output
    cout << "\nDisplaying the pattern : " << endl;
    for (int i = 0; i < n12; i++)
    {
        for (int space = 0; space < i; space++)
            cout << "  ";
        for (int j = 0; j < n12 - i; j++)
            cout << "* ";
        cout << endl;
    }

    // 3) Write a program to print the below pattern :-
    // A A A A
    //   B B B
    //     C C
    //       D
    // Ans)
    int n13;
    cout << "\nINVERSE-TRIANGLE PATTERN-3\n"
         << endl;
    // input
    cout << "Enter the number : ";
    cin >> n13;
    // output
    cout << "\nDisplaying the pattern : " << endl;
    for (int i = 0; i < n13; i++)
    {
        char ch = 'A' + i;
        for (int space = 0; space < i; space++)
            cout << "  ";
        for (int j = 0; j < n13 - i; j++)
            cout << ch << " ";
        cout << endl;
    }

    // PYRAMID PATTERN
    // 1) Write a program to print the below pattern :-
    //      1
    //    1 2 1
    //  1 2 3 2 1
    // 1 2 3 4 3 2 1
    // Ans)
    int n14;
    cout << "\nPYRAMID PATTERN-1\n"
         << endl;
    // input
    cout << "Enter a number = ";
    cin >> n14;
    // output
    cout << "\nDISPLAYING THE PATTERN : " << endl;
    for (int i = 0; i < n14; i++)
    {
        for (int space = 0; space < n14 - i - 1; space++)
            cout << "  ";
        // nums-1
        for (int j = 1; j <= i + 1; j++)
            cout << j << " ";
        // nums-2
        for (int j = i; j > 0; j--)
            // (or) for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    // 2) Write a program to print the below pattern :-
    //      *
    //     ***
    //    *****
    //   *******
    // Ans)
    int N1;
    cout << "\nPYRAMID PATTERN-2\n"
         << endl;
    // input
    cout << "Enter a number = ";
    cin >> N1;
    // output
    cout << "\nDISPLAYING THE PATTERN : " << endl;
    for (int i = 0; i < N1; i++)
    {
        for (int space = 0; space < N1 - i - 1; space++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
    // (or)
    // for(int i = 1; i <= N1;i++) {
    //     for(int space = 1;space <= N1-i;space++)
    //         cout << " ";
    //     for(int j = 1;j <= 2*i-1;j++)
    //         cout << "*";
    //     cout << endl;
    // }

    // HOLLOW DIAMOND PATTERN //
    // Write a program to print the below pattern :-
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *
    // Ans)
    int n15;
    cout << "\nHOLLOW DIAMOND PATTERN\n"
         << endl;
    // input
    cout << "Enter number of rows = ";
    cin >> n15;
    // output
    cout << "\nDISPLAYING THE PATTERN : " << endl;
    // 1-top part
    for (int i = 0; i < n15; i++)
    {
        for (int space1 = 0; space1 < n15 - i - 1; space1++)
            cout << " ";
        cout << "*";
        if (i != 0)
        {
            for (int space2 = 0; space2 < 2 * i - 1; space2++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }
    // 2-bottom part
    for (int i = 0; i < n15 - 1; i++)
    {
        for (int space1 = 0; space1 < i + 1; space1++)
            cout << " ";
        cout << "*";
        if (i != n15 - 2)
        {
            for (int space2 = 0; space2 < 2 * (n15 - i) - 5; space2++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }
    // (or)
    // int n, i, space1, space2;
    // cout << "Enter a number = \n";
    // cin >> n;
    // // top-part
    // for (i = 0; i < n; i++)
    // {
    //     for(space1 = 1;space1 < n-i;space1++)
    //         cout << " ";
    //     cout << "*";
    //     if(i > 0)
    //     {
    //         for(space2=1;space2 < 2*i;space2++)
    //             cout << " ";
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // bottom-part
    // for(i = 0;i < n-1;i++) {
    //     for(space1 = 1;space1 <= i+1;space1++)
    //         cout << " ";
    //     cout << "*";
    //     if(i != n-2)
    //     {
    //         for(space2 = 1;space2 < 2*(n-i) - 4;space2++)
    //             cout << " ";
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // BUTTERFLY PATTERN //
    // Write a program to print the below pattern :-
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    // Ans)
    int n16;
    cout << "\nBUTTERFLY PATTERN\n"
         << endl;

    // input
    cout << "Enter a number = ";
    cin >> n16;

    cout << "\nDISPLAYING THE PATTERN : " << endl;

    // Top half
    for (int i = 0; i < n16; i++)
    {
        // left wing
        for (int j = 0; j <= i; j++)
            cout << "*";

        // spaces in middle
        for (int space = 0; space < 2 * (n16 - i - 1); space++)
            // (or) for (int j = 1; j <= 2 * (n16 - i); j++)
            cout << " ";

        // right wing
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom half
    for (int i = n16 - 1; i >= 0; i--)
    {
        // left wing
        for (int j = 0; j <= i; j++)
            cout << "*";

        // spaces in middle
        for (int j = 0; j < 2 * (n16 - i - 1); j++)
            cout << " ";

        // right wing
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // (or)
    // int n, i, j, space;
    // cout << "Enter a number = \n";
    // cin >> n;
    // // top-part
    // for (i = 1; i <= n; i++) {
    //     // left-wing
    //     for (j = 1; j <= i; j++)
    //         cout << "*";
    //     // space in middle
    //     for (space = 1; space <= 2 * (n - i); space++)
    //         cout << " ";
    //     // right-wing
    //     for (j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << endl;
    // }
    // // bottom-part
    // for (i = n; i >= 1; i--) {
    //     // left-wing
    //     for (j = 1; j <= i; j++)
    //         cout << "*";
    //     // space in middle
    //     for (space = 1; space <= 2 * (n - i); space++)
    //         cout << " ";
    //     // right-wing
    //     for (j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << endl;
    // }

    return 0;
}