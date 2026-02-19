#include <iostream>
#include <vector>
using namespace std;

// A function calling itself is called Recursion.
// Similar to Loops but eariler some times.

// Printing nums in reverse order(n to 1)
void reverseNums(int n)
{
    // Base Case
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << n << " ";
    // Recursive Case
    reverseNums(n - 1);
}

// Factorial of a number n
int fact(int n)
{
    // Time Complexity = O(n)
    // Space Complexity = O(n)
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    // Recursive Case
    return n * fact(n - 1);
}

// Sum of N numbers
int sum(int n)
{
    // Time Complexity = O(n)
    // Space Complexity = O(n)
    // Base Case
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

// Fibonacci series of n numbers
int fib(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return n;
    // Recursive case
    return fib(n - 1) + fib(n - 2);
}

// Find if the array is sorted
bool isSorted(vector<int> &nums, int n)
{
    // Base Case
    if (n == 0 || n == 1)
        return true;
    // Recursive Case
    return ((nums[n - 1] >= nums[n - 2]) && isSorted(nums, n - 1));
}

// Binary Search
int binarySearch(vector<int>& nums,int target,int st,int end) {
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if(target == nums[mid])
            return mid;
        else if(target > nums[mid])
            return binarySearch(nums,target,mid+1,end);
        else
            return binarySearch(nums,target,st,mid-1);
    }
    return -1;
}

// Print all Subsets using recursion
void printAllSubsets(vector<int>& arr,vector<int>& ans,int i) {
    // Time Complexity = O(n * 2^n)
    // Space Complexity = O(n)
    // Base Case
    if(i == arr.size()) {
        for(int val : ans)
            cout << val << " ";
        cout << endl;
        return;
    }
    // Include
    ans.push_back(arr[i]);
    printAllSubsets(arr,ans,i+1);
    
    ans.pop_back(); // backtrack
    printAllSubsets(arr,ans,i+1); // exclude
}

int main()
{
    // Ex-1)
    cout << "Reverse Printing of numbers : ";
    reverseNums(5);
    // Ex-2)
    cout << "Factorial of a number : " << fact(5) << endl;
    // Ex-3)
    cout << "Sum of a n numbers : " << sum(50) << endl;
    // Ex-4)
    cout << "Fibonacci series of nth number : " << fib(20) << endl;
    cout << "Fibonacci series of n numbers : \n";
    for (int i = 0; i <= 20; i++)
        cout << fib(i) << " ";
    cout << endl;
    // Ex-5)
    vector<int> arr = {1, 2, 3, 4, 5};
    if (isSorted(arr, arr.size()))
        cout << "This Array is sorted.\n";
    else
        cout << "This Array is not sorted.\n";
    // Ex-6)
    cout << "\n_____Binary Search_____\n";
    cout << "Target is found at index " << binarySearch(arr,5,0,4) << ".\n";
    // Ex-7)
    cout << "\nBACKTRACKING CONCEPT\n";
    cout << "Print all Subsets" << endl;
    vector<int> nums = {1,2,3};
    vector<int> ans; // final result
    cout << "Sub-sets of nums : \n";
    printAllSubsets(nums,ans,0);

    return 0;
}