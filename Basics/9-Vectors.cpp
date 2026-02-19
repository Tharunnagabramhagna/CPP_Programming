// shortcut => time complexity => TC
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void reverseVector(vector<int> &arr, int n)
{
    cout << "Original vector : ";
    for (int val : arr)
        cout << val << " ";
    cout << endl;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed vector : ";
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

int main()
{
    // // Creating vector //

    // // 1)
    // vector<int> vec;
    // // 2)
    // vector<int> Vec = {1, 2, 3};
    // cout << Vec[0] << endl;
    // // 3)
    // // used in dynamic programming - tabulation topic
    // vector<int> vec1(3, 0); // {0,0,0}
    // // output of vector using loops
    // cout << "Elements of vec1 : ";
    // for (int i = 0; i < 3; i++)
    //     cout << vec1[i] << " ";
    // cout << endl;
    // // 4)
    // vector<int> Vec1(5, 1);
    // // using for-each Loop
    // cout << "Elements of Vec1 : ";
    // for (int val : Vec1)
    //     cout << val << " ";
    // cout << endl;
    // // 5)
    // vector<char> vec2 = {'a', 'e', 'i', 'o', 'u'};
    // cout << "Elements of vec2 : ";
    // for (char val : vec2)
    //     cout << val << " ";
    // cout << endl;
    // // 6)
    // vector<int> vecArr1 = {11, 12, 13, 14, 15};
    // vector<int> vecArr2(vecArr1);
    // cout << "Elements of vecArr2 : ";
    // for (int val : vecArr2) // prints vecArr1 elements
    //     cout << val << " ";
    // cout << endl;

    // // Vector Functions //

    // // 1-5 all have O(1) TC
    // // 1) size function
    // // work => gives size of a vector.
    // cout << "\nSize function\n"
    //      << endl;
    // cout << "Size of vec2 = " << vec2.size() << endl;
    // cout << "Size of vec1 = " << vec1.size() << endl;

    // // 2) push_back function
    // // adds element at last of vector.
    // // Ex-1)
    // cout << "\nPush_back function\n"
    //      << endl;
    // cout << "Before push back : \n";
    // cout << "Size of vec = " << vec.size() << endl;
    // vec.push_back(20); // function
    // vec.push_back(30);
    // vec.push_back(40);
    // vec.push_back(50);
    // vec.emplace_back(60); // same as push back
    // cout << "After push back : \n";
    // cout << "Size of vec = " << vec.size() << endl;
    // cout << "Capacity of vec = " << vec.capacity() << endl;
    // // output
    // cout << "Elements of vec = ";
    // for (int val : vec)
    //     cout << val << " ";
    // cout << endl;

    // // Ex-2)
    // vec2.push_back('n');
    // cout << "\nSize of vec2 = " << vec2.size() << endl;
    // cout << "After push back : \n";
    // cout << "Elements of vec2 : ";
    // for (char val : vec2)
    //     cout << val << " ";
    // cout << endl;

    // // 3) pop_back function
    // // deletes last element of vector.
    // cout << "\nPop_back function\n"
    //      << endl;
    // vec2.pop_back();
    // cout << "After pop back : \n";
    // cout << "Elements of vec2 : ";
    // for (char val : vec2)
    //     cout << val << " ";
    // cout << endl;

    // // 4) front and back functions
    // // prints first and last element of vector.
    // cout << "\nFront and Back Function\n"
    //      << endl;
    // cout << "First element of vec2 : " << vec2.front() << endl;
    // cout << "Last element of vec2 : " << vec2.back() << endl;

    // // 5) At function
    // // Prints element at particular index of a vector.
    // cout << "\nAt function\n"
    //      << endl;
    // // both are same
    // cout << "Element at 0 index of vec2 : " << vec2.at(0) << endl;
    // cout << "Element at 0 index of vec1 : " << vec1[0] << endl; // used frequently

    // // They can change size but not capacity.
    // // 6) Erase and insert (TC = O(n))
    // cout << "\nErase function\n"
    //      << endl;
    // vector<int> VecArr = {29, 78, 88, 67, 56, 98, 17};
    // VecArr.erase(VecArr.begin());                         // 29 erased
    // VecArr.erase(VecArr.begin() + 2);                     // 67 erased
    // VecArr.erase(VecArr.begin() + 1, VecArr.begin() + 3); // 88,56 erased
    // cout << "Elements of VecArr after erasing : ";
    // for (int val : VecArr)
    //     cout << val << " ";
    // cout << endl;

    // cout << "\nInsert function\n"
    //      << endl;
    // vector<int> VecArr0 = {1, 2, 3, 4, 5};
    // VecArr0.insert(VecArr0.begin() + 2, 100); // (pos,var)
    // cout << "Elements of VecArr0 : ";
    // for (int val : VecArr0)
    //     cout << val << " ";
    // cout << endl;

    // // 7) Clear and Empty Function
    // cout << "\nClear and Empty function\n"
    //      << endl;
    // vec.clear(); // clear all elements
    // cout << "Size of vec = " << vec.size() << endl;
    // cout << "Capacity of vec = " << vec.capacity() << endl;
    // cout << "Is vec empty = " << vec.empty() << endl; // gives => 1 (or) 0

    // // Practice Questions //

    // // 1) write the linear search algorithm code in vectors?
    // // Ans)
    // int n1, target;
    // cout << "\nEnter the number of elements needed = ";
    // cin >> n1;
    // vector<int> linearVec(n1);
    // // input
    // for (int i = 0; i < n1; i++)
    // {
    //     cout << "Enter " << i << " index element = ";
    //     cin >> linearVec[i];
    // }
    // cout << "Enter the required target = ";
    // cin >> target;
    // cout << "\nIt returns '-1' if target doesn't exist." << endl;
    // // output
    // cout << "Index of Target = " << linearSearch(linearVec, n1, target) << endl;

    // // 2) WAF to reverse an vector?
    // // Ans)
    // int n2;
    // cout << "\nREVERSING AN VECTOR\n"
    //      << endl;
    // cout << "Enter the number of elemnets needed = ";
    // cin >> n2;
    // vector<int> originalVec(n2);
    // // input
    // for (int i = 0; i < n2; i++)
    // {
    //     cout << "Enter " << i << " index element : ";
    //     cin >> originalVec[i];
    // }
    // reverseVector(originalVec, n2);

    /* 2D Vectors */
    cout << "\n2D Vectors\n"
         << endl;
    // Initializing a 2d vector
    vector<vector<int>> mat = {{1, 2, 3, 4}, {4, 5, 6}, {7, 8, 9, 10}};
    cout << "Elements of mat : \n";
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }

    return 0;
}