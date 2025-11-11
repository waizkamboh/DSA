#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
      string name;
      int age;
    Person() {
        
    }  
};

class Student : public Person {
    public: 
      int rollNo;

      void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
      }
};

int main() {
    Student s1 = Student();
    s1.name = "Waiz";
    s1.age = 23;
    s1.rollNo = 925;
    s1.getInfo();

    return 0;
}