#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
      string name;
      int age;

    Person() {
        cout << "Parent Class Constructor" << endl;
    }  

    Person(string name, int age) {
        this -> name = name;
        this -> age = age;
    }
};

class Student : public Person {
    public: 
      int rollNo;

    Student() {
        cout << "Child Class Constructor" << endl;   
    }

    Student(string name, int age, int rollNo) : Person(name, age) {
        this -> rollNo = rollNo;
    }

      void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
      }
};

int main() {
    Student s1 = Student("Waiz", 23, 925);
    s1.getInfo();

    return 0;
}