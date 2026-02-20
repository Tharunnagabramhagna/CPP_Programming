// This is the first data structure in DSA
#include <iostream>
#include <climits>
using namespace std;

void updateArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] *= 2;
}

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void sumProdArray(int arr[], int n)
{
    int sum = 0, prod = 1;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int i = 0; i < n; i++)
        prod *= arr[i];

    cout << "Sum of array = " << sum << endl;
    cout << "Product of array = " << prod << endl;
}

void swapArray(int arr[], int n)
{
    cout << "Array before swap : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIdx = 0;
    int largestIdx = 0;
    for (int i = 0; i < n; i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
        if (arr[i] == smallest)
            smallestIdx = i;
        if (arr[i] == largest)
            largestIdx = i;
    }
    // Swap the elements
    swap(arr[smallestIdx], arr[largestIdx]);
    cout << "Array after swap : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void uniqueArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            cout << arr[i] << " ";
    }
    cout << endl;
}

void intersectArr(int arr1[], int arr2[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        bool found = false;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; k++)
            {
                if (arr1[k] == arr1[i])
                {
                    alreadyPrinted = true;
                    break;
                }
            }
            if (!alreadyPrinted)
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

pair<int, int> linSearchTwoDArr(int arr[][4], int row, int column, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
                return {i, j};
        }
    }
    return {-1, -1};
}

int getMaxSum(int matrix[][3], int row, int col)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int currSumI = 0;
        for (int j = 0; j < col; j++)
            currSumI += matrix[i][j];
        maxSum = max(currSumI, maxSum);
    }
    return maxSum;
}

int getMaxSumCol(int matrix[][3], int row, int col)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int currSumC = 0;
        for (int j = 0; j < col; j++)
            currSumC += matrix[j][i];
        maxSum = max(currSumC, maxSum);
    }
    return maxSum;
}

int diagonalSumBrute(int mat[][4], int n)
{ // O(n * n)
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += mat[i][j];
            else if (j == n - i - 1)
                sum += mat[i][j];
        }
    }
    return sum;
}

int diagonalSum(int mat[][4], int n)
{ // O(n)
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i]; // since, P.D => i == j
        if (i != n - i - 1)
            sum += mat[i][n - i - 1];
    }
    return sum;
}

int main()
{
    // Creating an Array //
    // Ex-1)
    int marks[5] = {99, 87, 68, 75, 49};
    // accessing marks
    marks[3] = 30; // 75 => 30
    cout << "Marks of student-1 : " << marks[0] << endl;
    cout << "Marks of student-2 : " << marks[1] << endl;
    cout << "Marks of student-3 : " << marks[2] << endl;
    cout << "Marks of student-4 : " << marks[3] << endl;
    cout << "Marks of student-5 : " << marks[4] << endl;

    cout << "\nSize of marks array = " << sizeof(marks) << endl;
    // Ex-2)
    double price[] = {98.98, 56.27, 29.09}; // size is taken by the complier

    // Loops on Arrays //
    cout << "\nDisplaying all prices..\n"
         << endl;
    int priceSize = sizeof(price) / sizeof(double);
    for (int i = 0; i < priceSize; i++)
        cout << i << " index element = " << price[i] << endl;

    // input values using loops //
    int mark[5];
    int markSize = sizeof(mark) / sizeof(int);
    cout << "Enter elements of mark : \n";

    // Output array elements using loops //
    for (int i = 0; i < markSize; i++)
        cin >> mark[i];
    cout << "\nDisplaying all mark elements..\n"
         << endl;
    for (int i = 0; i < markSize; i++)
        cout << i << " index element = " << mark[i] << endl;

    // Pass (or) Call By Reference //
    int callArr[5] = {1, 2, 3, 4, 5};
    cout << "\nPass by Reference concept\n"
         << endl;
    cout << "Before Updation :\n";
    for (int i = 0; i < 5; i++)
        cout << callArr[i] << " ";
    cout << endl;
    updateArray(callArr, 5);
    cout << "After Updation :\n";
    for (int i = 0; i < 5; i++)
        cout << callArr[i] << " ";
    cout << endl;
    // If we use *arr instead of arr[] we get same output.

    // Linear Search //
    int N, target;
    cout << "\nEnter the number of elements needed = ";
    cin >> N;
    int linearArr[N];
    // input
    for (int i = 0; i < N; i++)
    {
        cout << "Enter index " << i << " element = ";
        cin >> linearArr[i];
    }
    cout << "Enter the required number = ";
    cin >> target;
    cout << "It returns -1 if that element doesn't exist." << endl;
    cout << "Index of target = " << linearSearch(linearArr, N, target) << endl;

    // Reverse an Array //
    int N1;
    // input
    cout << "\nEnter the number of elements needed = ";
    cin >> N1;
    int originalArr[N1];
    // input
    for (int i = 0; i < N1; i++)
    {
        cout << "Enter index " << i << " element = ";
        cin >> originalArr[i];
    }

    // output
    cout << "\nArray before change : ";
    for (int i = 0; i < N1; i++)
    {
        cout << originalArr[i] << " ";
    }
    cout << endl;

    // logic
    reverseArray(originalArr, N1);
    // (or)
    // for (int i = 0; i < N1 / 2; i++)
    // {
    //     int firstVal = originalArr[i];
    //     int secondVal = originalArr[N1 - i - 1];
    //     originalArr[N1 - i - 1] = firstVal;
    //     originalArr[i] = secondVal;
    // }

    // output
    cout << "\nArray after change : ";
    for (int i = 0; i < N1; i++)
    {
        cout << originalArr[i] << " ";
    }
    cout << endl;

    // Practice Questions //

    // 1) Find the smallest and largest elements in Array.
    // Ans)
    int n;
    cout << "\nFinding smallest and largest elements in an array..\n"
         << endl;
    // Input
    cout << "Enter the number of elements needed = ";
    cin >> n;
    // Creating Array
    int nums[n];
    // Input arr
    cout << "Enter elements of nums : ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    // smallest,largest variables
    int smallest = INT_MAX;
    int largest = INT_MIN;
    // smallest and largest conditions
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < smallest)
            smallest = nums[i];
        if (nums[i] > largest)
            largest = nums[i];
    }
    // (or)
    // for (int i = 0; i < n; i++)
    // {
    //     smallest = min(nums[i],smallest);
    //     largest = max(nums[i],largest);
    // }

    // Displaying largest and smallest elements
    cout << "Largest element of nums : " << largest << endl;
    cout << "Smallest element of nums : " << smallest << endl;
    // (or)
    // // max, min variables
    // int max = nums[0];
    // int min = nums[0];
    // // min and max condition
    // for(int i = 0;i < n;i++)
    // {
    //     if(nums[i] < min)
    //         min = arr[i];
    //     if (nums[i] > max)
    //         max = arr[i];
    // }
    // // Displaying min,max elements
    // cout << "Largest element of nums : " << max << endl;
    // cout << "Smallest element of nums : " << min << endl;

    /* 2) Find the largest and smallest values
    in an array and also print there index number. */
    // Ans)
    int n1;
    // Input
    cout << "\nEnter the number of elements needed = ";
    cin >> n1;
    // Creating Array
    int arr[n1];
    // Input arr
    cout << "Enter elements of nums : ";
    for (int i = 0; i < n1; i++)
        cin >> arr[i];
    int smallest1 = INT_MAX;
    int largest1 = INT_MIN;
    // smallest,largest conditions
    for (int i = 0; i < n1; i++)
    {
        smallest1 = min(arr[i], smallest);
        largest1 = max(arr[i], largest);
    }
    // Finding indexes of largest,smallest
    for (int i = 0; i < n1; i++)
    {
        if (smallest1 == arr[i])
            cout << "Smallest element is at index " << i << endl;
        if (largest1 == arr[i])
            cout << "Largest element is at index " << i << endl;
    }
    // Displaying largest and smallest elements
    cout << "Largest element of arr : " << largest1 << endl;
    cout << "Smallest element of arr : " << smallest1 << endl;
    // (or)
    // int n1;
    // cout << "\nEnter the number of elements needed = ";
    // cin >> n1;
    // int arr[n1];
    // cout << "Enter elements of nums : ";
    // for (int i = 0; i < n1; i++)
    // {
    //     cin >> arr[i];
    // }

    // int smallest1 = arr[0], largest1 = arr[0];
    // int smallestIndex = 0, largestIndex = 0;

    // for (int i = 1; i < n1; i++)
    // {
    //     if (arr[i] < smallest1)
    //     {
    //         smallest1 = arr[i];
    //         smallestIndex = i;
    //     }
    //     if (arr[i] > largest1)
    //     {
    //         largest1 = arr[i];
    //         largestIndex = i;
    //     }
    // }

    // cout << "Smallest element is at index " << smallestIndex << endl;
    // cout << "Largest element is at index " << largestIndex << endl;
    // cout << "Largest element of arr : " << largest1 << endl;
    // cout << "Smallest element of arr : " << smallest1 << endl;

    /* 3) WAF to calculate sum and product of all
    numbers in an array.*/
    // Ans)
    int n2;
    cout << "\nEnter the number of elements required = ";
    cin >> n2;
    int Arr[n2];
    // input
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> Arr[i];
    }
    sumProdArray(Arr, n2);

    /* 4) WAF to swap the max and min numbers in an array.*/
    // Ans)
    int n3;
    cout << "\nEnter the number of elements needed = ";
    cin >> n3;
    int Arr1[n3];
    // input
    for (int i = 0; i < n3; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> Arr1[i];
    }
    swapArray(Arr1, n3);

    /* 5) WAF to print all the unique values in an array. */
    // Concept :- if arr = {1,2,3,3,2,1,4} => print 4
    // Hint :- use nested loops
    // Ans)
    int n4;
    cout << "\nEnter the number of elements needed = ";
    cin >> n4;
    int Arr2[n4];
    // input
    for (int i = 0; i < n4; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> Arr2[i];
    }
    // output
    cout << "\nUnique elements of Arr2 : ";
    uniqueArr(Arr2, n4);

    /* 6) WAF to print intersection of 2 arrays. */
    // Concept :- arr1 U arr2 = {1,2,3,4} U {2,4,6,8} = {2,4}
    // Hint :- use nested loops
    // Ans)
    int n5, n6;
    cout << "\nEnter number of elements needed (first arr) = ";
    cin >> n5;
    cout << "Enter number of elements needed (second arr) = ";
    cin >> n6;
    int intArr1[n5], intArr2[n6];
    // input - 1
    cout << "\nArray-1 elements : " << endl;
    for (int i = 0; i < n5; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> intArr1[i];
    }
    // input - 2
    cout << "Array-2 elements : " << endl;
    for (int i = 0; i < n6; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> intArr2[i];
    }
    // output
    cout << "Intersection elements of two Arrays : ";
    intersectArr(intArr1, intArr2, n5, n6);

    /* 2D Arrays */

    // Initializing 2D array
    int rows = 3, columns = 4;
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 3, 5, 7}};

    // Accessing elements in 2d array
    cout << "2nd row 1st element before = " << matrix[1][0] << endl;
    matrix[1][0] = 18;
    cout << "2nd row 1st element after = " << matrix[1][0] << endl;

    // Linear search in 2D Array
    auto result = linSearchTwoDArr(matrix, rows, columns, 8);
    if (result.first != -1)
        cout << "Target is found at (" << result.first << ", " << result.second << ").\n";
    else
        cout << "Target not found.\n";

    // Loops on 2D Arrays
    // Output
    cout << "Elements of Matrix : \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    // input
    int matrix1[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter " << i << " row and " << j << " columns = ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Elements of Matrix1 : \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << matrix1[i][j] << "\t";
        cout << endl;
    }

    // Maximum Row Sum //
    cout << "\nMaximum Row Sum\n"
         << endl;
    int martixSum[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    cout << "Max Row Sum of matrix = " << getMaxSum(martixSum, row, col) << endl;

    // Maximum Column Sum //
    cout << "\nMaximum Column Sum\n"
         << endl;
    cout << "Max Column Sum of matrix = " << getMaxSumCol(martixSum, row, col) << endl;

    // Diagonal Sum //
    cout << "\nDiagonal Sum\n"
         << endl;
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n10 = 4;
    cout << "Diagonal Sum of mat = " << diagonalSumBrute(mat, n10) << endl;
    int mat1[4][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}, {1, 4, 5, 6}};
    cout << "\nOptimal Approach : \n";
    cout << "Diagonal Sum of mat1 = " << diagonalSum(mat1, n10) << endl;

    return 0;
}