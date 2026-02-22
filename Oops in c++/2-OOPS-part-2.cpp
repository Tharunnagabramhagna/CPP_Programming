#include <iostream>
#include <string>
using namespace std;

// Parent class
class Person
{
public:
    string name;
    int age;

    Person()
    { // non-parameterized
        cout << "\nI am Parent Constructor...\n";
    }

    Person(string name, int age)
    { // parameterized
        this->name = name;
        this->age = age;
    }
};

// child class for single inheritance
// parent class for multi-level inheritance
class Student : public Person
{
public:
    int rollNo;

    Student()
    { // non-parameterized
        cout << "I am child constructor...\n";
    }

    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }

    void getInfo()
    {
        cout << "Name of the Student : " << name << endl;
        cout << "Age of the Student : " << age << endl;
        cout << "Roll Number of the Student : " << rollNo << endl;
    }
};

// child class in multi-level inheritance
class GradStudent : public Student
{
public:
    string researchArea;
};

// Multiple inheritance
class student
{
public:
    string name;
    int rollNo;
};

class Teacher
{
public:
    string subject;
    long long salary;
};

class TA : public student, public Teacher
{
    // empty
};

// Hierarchical inheritance //
class Person1
{
public:
    string name;
    int age;
};

class Student1 : public Person1
{
public:
    string course;
    int rollNo;
    void getInfo()
    {
        cout << "Name of the Student : " << name << endl;
        cout << "Age of the Student : " << age << endl;
        cout << "Course of the Student : " << course << endl;
        cout << "Roll Number of the Student : " << rollNo << endl;
    }
};

class Teacher1 : public Person1
{
public:
    string subject;
    double salary;
    void getInfo()
    {
        cout << "Name of the Teacher : " << name << endl;
        cout << "Age of the Teacher : " << age << endl;
        cout << "Subject of the Teacher : " << subject << endl;
        cout << "Salary of the Teacher : " << salary << endl;
    }
};

int main()
{
    // Ex-1)
    Student s0;
    s0.name = "Tony Stark";
    s0.age = 53;
    s0.rollNo = 3000;

    cout
        << "Details of the Student-0 : \n";
    cout << "Name of the Student : " << s0.name << endl;
    cout << "Age of the Student : " << s0.age << endl;
    cout << "Roll Number of the Student : " << s0.rollNo << endl;
    // Ex-2)
    GradStudent s1;
    s1.name = "Tharun";
    s1.age = 18;
    s1.rollNo = 699;
    s1.researchArea = "Extreme Classification";

    cout
        << "Details of the Student-1 : \n";
    cout << "Name of the Student : " << s1.name << endl;
    cout << "Age of the Student : " << s1.age << endl;
    cout << "Roll Number of the Student : " << s1.rollNo << endl;
    cout << "Research Area of the Student : " << s1.researchArea << endl;

    cout << "\nDetails of the Student-2 : \n";
    Student s2("Charan", 19, 1387);
    s2.getInfo();

    // Ex-3)
    TA t1;
    t1.name = "Prabhas";
    t1.rollNo = 1;
    t1.subject = "Box-office";
    t1.salary = 10000000;

    cout << "\nDetails of the TA-1 : \n";
    cout << "Name of the TA : " << t1.name << endl;
    cout << "Roll Number of the TA : " << t1.rollNo << endl;
    cout << "Subject of the TA : " << t1.subject << endl;
    cout << "Salary of the TA : " << t1.salary << endl;

    // Ex-4)
    Student1 stu1;
    stu1.name = "Bobby";
    stu1.age = 17;
    stu1.course = "CSE";
    stu1.rollNo = 576;
    cout << "\nDetails of the Student1 (Hierarchical Inheritance) : \n";
    stu1.getInfo();

    Teacher1 te1;
    te1.name = "Hemanth";
    te1.age = 57;
    te1.subject = "Chemistry";
    te1.salary = 10000;
    cout << "\nDetails of the Teacher1 : \n";
    te1.getInfo();

    return 0;
}
