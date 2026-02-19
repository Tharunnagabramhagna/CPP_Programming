#include <iostream>
using namespace std;

void swapNums(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "After Swap : " << endl;
    cout << "x and y values = " << *x << " " << *y << endl;
}

void changeV(int &b)
{
    b = 20;
}

int main()
{
    // Creating a pointer //
    int a = 10;
    cout << "Address of a : " << &a << endl; // hexadecimal form
    int *p = &a;
    cout << "Address of a = " << p << endl; // p stroes &a
    cout << "Value of a = " << *p << endl;  // derefernce operator
    cout << "Value of a = " << *(&a) << endl;
    cout << "Address of p = " << &p << endl;
    float price = 100.25;
    float *ptr = &price;
    cout << "Address of price = " << ptr << endl;
    // pointer to pointer //
    float **pptr = &ptr;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Value of pptr = " << pptr << endl;
    // dereference operator
    cout << "Value of ptr = " << *(pptr) << endl;
    cout << "Value of ptr = " << ptr << endl;
    // NULL pointer //
    int *p1 = NULL;
    // NULL pointer can't be dereferenced.
    cout << "Value of p1 = " << p1 << endl;
    cout << "Address of p1 = " << &p1 << endl;
    // Question
    int b = 5;
    p = &b; // pointer can be modified
    int **q = &p;
    cout << endl;
    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;

    // Pass By Reference //

    // 1) swaping using pointers
    int x = 5, y = 10;
    cout << "\nBefore Swap : " << endl;
    cout << "x and y value = " << x << " " << y << endl;
    swapNums(&x, &y); // address is passed in arguments
    // 2) pass by reference by alias
    int v = 10;
    changeV(v);
    cout << "\nvalue of v = " << v << endl;

    // Array pointers //
    // This is a constant pointer.
    int arr[] = {1, 2, 3, 4, 5};

    cout << "\nAddress of arr[0] = " << arr << endl; // Address of arr
    cout << "Value of arr[0] = " << *arr << endl;    // value of arr at 0 idx

    // Pointer Arithemetic //

    // 1) Increment and Decrement operations
    a = 28;
    int *ptr1 = &a;
    cout << "address before for ptr1 = " << ptr1 << endl;
    ptr1++;
    cout << "address after for ptr1 after increment = " << ptr1 << endl;
    ptr1--;
    cout << "address after for ptr1 after decrement = " << ptr1 << endl;

    // 2) Add/Subtract numbers
    char ch = 'a';
    char *ptr2 = &ch; // static_cast is needed for char datatype
    cout << "address before for ptr2 = " << static_cast<void *>(ptr2) << endl;
    ptr2 = ptr2 + 4;
    cout << "address after for ptr2 after increment = " << static_cast<void *>(ptr2) << endl;
    ptr2 = ptr2 - 2;
    cout << "address after for ptr2 after decrement = " << static_cast<void *>(ptr2) << endl;
    // 3) Subtract two pointers
    int *ptr4;
    int *ptr3 = ptr4 + 2;
    cout << "Difference between ptr3 and ptr4 = " << ptr3 - ptr4 << endl; // 2
    // 4) Compare two pointers
    // using realtional operations.
    ptr3 = ptr4;
    cout << (ptr3 == ptr4) << endl; // 1 => true
    int *ptr5;
    int *ptr6 = ptr6 + 10;
    cout << (ptr5 >= ptr6) << endl; // 0 => false
    ptr5 -= 5;
    cout << (ptr5 >= ptr6) << endl; // 0 => false
    cout << endl;

    // Pointer Arithemetic in Arrays //
    int Arr[5] = {1, 4, 9, 16, 25};

    cout << *(Arr) << endl;
    cout << *(Arr + 1) << endl;
    cout << *(Arr + 2) << endl;
    cout << endl;

    // Question
    int arr1[] = {10, 20, 30, 40};
    int *ptr7 = arr1;

    cout << *(ptr7 + 1) << endl; // 20
    cout << *(ptr7 + 3) << endl; // 40
    ptr7++;
    cout << *ptr7 << endl; // 20
    cout << endl;

    return 0;
}