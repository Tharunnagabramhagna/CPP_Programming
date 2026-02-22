#include <iostream>
#include <string>
using namespace std;

// Polymorphism //

class Man
{
public:
    string name;
    Man()
    {
        cout << "non-parameterized\n";
    }

    Man(string name)
    {
        cout << "parameterized\n";
    }
};

class Print
{
public:
    void show(int x)
    {
        cout << "integer value : " << x << endl;
    }
    void show(char ch)
    {
        cout << "Character value : " << ch << endl;
    }
};

class Complex
{
public:
    int real, imag;

    // Complex(int r, int i) {
    // this->real = r;
    // this->imag = i;
    // }
    // Alternative syntax of constructor
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real,
                       imag + obj.imag);
    }
};

class Parent
{
public:
    void getInfo()
    {
        cout << "I am parent class.\n";
    }
    // virtual function
    virtual void hello()
    {
        cout << "Hello from parent.\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "I am child class.\n";
    }
    void hello()
    {
        cout << "Hello from child.\n";
    }
};

// Abstraction //

class Shape // abstract class
{
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle..\n";
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle..\n";
    }
};

void fun()
{
    static int x = 0;
    cout << "x value : " << x << endl;
    x++;
}

class A
{
public:
    int x;

    void incX()
    {
        x += 1;
    }
};

class LifeBond
{
public:
    LifeBond()
    {
        cout << "Constructor..\n";
    }
    ~LifeBond()
    {
        cout << "Destructor..\n";
    }
};

int main()
{
    // Ex-1) (Example of polymorphism)
    Man m1;
    Man m2("John");
    cout << endl;

    // Ex-2) (example of compile-time polymorphism)
    // Function overloading
    Print p1;
    p1.show(7);
    p1.show('T');
    cout << endl;

    // Ex-3) (example of compile-time polymorphism)
    // Operator overloading
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    cout << c3.real << " + i" << c3.imag << endl;
    cout << endl;

    // Ex-4) (e.g. of run-time polymorphism)
    // Function overriding
    Child ch1;
    ch1.getInfo(); // overrides parent class
    Parent pa1;
    pa1.getInfo();
    cout << endl;
    cout << endl;

    // Ex-5) (e.g. of run-time polymorphism)
    // Virtual function
    Child ch2;
    ch2.hello();
    cout << endl;

    // Ex-6) (e.g. of Abstraction)
    cout << "\nAbstraction\n";
    Circle cir;
    Rectangle rec;

    cir.draw();
    rec.draw();
    cout << endl;

    // Ex-7) (Static Keyword)
    cout << "\nStatic Keyword\n";
    // static variable (in function)
    fun();
    fun();
    fun();
    // static variable (in classes)
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout << "X value in obj1 : " << obj1.x << endl;
    cout << "X value in obj2 : " << obj2.x << endl;
    obj1.incX();
    obj2.incX();
    cout << "After Increment : \n";
    cout << "X value in obj1 : " << obj1.x << endl;
    cout << "X value in obj2 : " << obj2.x << endl;
    // static objects
    if (true)
        static LifeBond obj1;

    cout << "End of main function.\n";

    return 0;
}
