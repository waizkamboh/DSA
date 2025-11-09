#include <iostream>
#include <string.h>
using namespace std;

class Teacher{
private:
  float salary;  
public:     
  //Properties / Attributes
  string name;
  string dep;
  string sub;

  // Non parameterized constructor
  Teacher() {
    cout << "I am non parameterized constructor";
  }

  Teacher(string n, string d, string s, float sal) {
    name = n;
    dep = d;
    sub = s;
    salary = sal;
  }
  
  //Methods / Member function
  void changeDep(string newDep) {
      dep = newDep;
  }

  void getInfo() {
      cout << "Name : " << name << endl;
      cout << "Department : " << dep << endl;
      cout << "Subject : " << sub << endl;
      cout << "Salary : " << salary << endl;
      
  }
};

int main() {
    //Teacher t1("Waiz", "Computer Science", "Programming", 25000);
    Teacher t1 = Teacher("Waiz", "Computer Science", "Programming", 25000);
    t1.getInfo();
    return 0;
}