#include <iostream>
#include <cstring>
using namespace std;

// 4 Pillars of OOPS => Encapsulation, Abstraction, Inheritance, Polymorphism

// Objects are entities in the real world (e.g. students)
// A class is the blueprint for these entities (e.g. classroom)
// Encapsulation => Teacher is an example (hides sensitive info)

class Teacher
{
private:
    double salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        cout << "\nHi, I am a constructor.\n";
        dept = "Computer Science";
    }
    // parameterized constructor
    Teacher(string n, string d, string sub, double s)
    {
        name = n;
        subject = sub;
        dept = d;
        salary = s;
    }
    string name;

    string dept;
    string subject;
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "Name of the teacher = " << name << endl;
        cout << "Subject of the teacher = " << subject << endl;
        cout << "Department of the teacher = " << dept << endl;
        cout << "Salary of the teacher = " << getSalary() << endl;
    }
};

class Student
{
public:
    string name;
    int rollNo;
    int age;
    float cgpa;
};

class student
{
public:
    string name;
    float *cgpaPtr;
    student(string name, float cgpa)
    {
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    student(student &orgObj)
    {
        this->name = orgObj.name;
        this->cgpaPtr = orgObj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Details of student : \n";
        cout << "Name of the student : " << name << endl;
        cout << "Cgpa of the student : " << *cgpaPtr << endl;
    }
};

class STUDENT
{
public:
    string name;
    float *cgpaPtr;
    STUDENT(string name, float cgpa)
    {
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    STUDENT(STUDENT &orgObj)
    {
        this->name = orgObj.name;
        cgpaPtr = new float;
        *cgpaPtr = *orgObj.cgpaPtr;
    }

    ~STUDENT()
    {
        cout << "The data is deleted by destructor.\n";
        delete cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name of the student : " << name << endl;
        cout << "Cgpa of the student : " << *cgpaPtr << endl;
    }
};

class Employee
{
public:
    string name;
    string skills;
    int age;
    double salary;
    // parameterized constructor
    Employee(string name, string skills, int age, double salary)
    {
        this->name = name;
        this->skills = skills;
        this->age = age;
        this->salary = salary;
    }
    // Custom copy constructor
    Employee(Employee &orgObj)
    {
        cout << "\nI am a custom copy constructor...\n";
        this->name = orgObj.name;
        this->skills = orgObj.skills;
        this->age = orgObj.age;
        this->salary = orgObj.salary;
    }

    void getInfo()
    {
        cout << "Name of the Employee = " << name << endl;
        cout << "Skills of Employee = " << skills << endl;
        cout << "Age of the Employee = " << age << endl;
        cout << "Salary of the Employee  = " << salary << endl;
    }
};

int main()
{
    // Ex-1)
    Student s1; // Constructor call (done by C++)
    s1.name = "Arjun";
    s1.rollNo = 699;
    s1.age = 19;
    s1.cgpa = 10.0;
    cout << "Details of the Student-1 :\n";
    cout << "Name of the student = " << s1.name << endl;
    cout << "Roll number of the student = " << s1.rollNo << endl;
    cout << "Age of the student = " << s1.age << endl;
    cout << "Cgpa of the student = " << s1.cgpa << endl;
    // default copy constructor
    Student s2(s1);
    cout << "Details of the Student-2 (using copy constructor) :\n";
    cout << "Name of the student = " << s2.name << endl;
    cout << "Roll number of the student = " << s2.rollNo << endl;
    cout << "Age of the student = " << s2.age << endl;
    cout << "Cgpa of the student = " << s2.cgpa << endl;

    // Ex-2)
    Teacher T1; // Constructor call (done by user)
    T1.name = "John";
    T1.subject = "DSA";
    T1.changeDept("ECE");
    T1.setSalary(25000);
    cout << "Details of the Teacher-1 :\n";
    cout << "Name of the teacher = " << T1.name << endl;
    cout << "Subject of the teacher = " << T1.subject << endl;
    cout << "Department of the teacher = " << T1.dept << endl; // use of constructor
    cout << "Salary of the teacher = " << T1.getSalary() << endl;

    Teacher T2("Ganesh", "CSE", "C++", 13000);
    cout << "\nDetails of the Teacher-2 :\n";
    T2.getInfo();

    // Ex-3)
    Employee e1("Harsha", "Web-dev", 23, 250000);

    cout << "\nDetails of the Employee-1 :\n";
    e1.getInfo();
    // copy constructor
    Employee e2(e1);
    e2.getInfo();
    cout << endl;

    // Ex-4) (The drawback of shallow copy => DUE TO DMA)
    student s11("Yash", 8.8);
    student s22(s11);
    s11.getInfo();
    *(s22.cgpaPtr) = 9.2;
    s11.getInfo();
    // Here I changed s22, but the changes were reflected in s11 too. //

    // Ex-5) (The solution => deep copy + destructor)
    STUDENT S1("Arun", 8.8);
    STUDENT S2(S1);
    cout << "\nDetails of STUDENT-1(before change) : \n";
    S1.getInfo();
    *(S2.cgpaPtr) = 9.2;
    cout << "\nDetails of STUDENT-1 (After change) : \n";
    S1.getInfo();
    S2.name = "Raghu";
    cout << "\nDetails of STUDENT-2 : \n";
    S2.getInfo();
    // As there are 2 objects so destructor is called twice.

    return 0;
}
