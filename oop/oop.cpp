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
  
  //Methods / Member function
  void changeDep(string newDep) {
      dep = newDep;
  }

  void setSalary(int s) {
    salary = s;
  }

  double getSalary() {
    return salary;
  }
};

int main() {
    Teacher t1;
    t1.name = "Waiz";
    t1.dep = "CS";
    t1.sub = "Programming";
    t1.setSalary(25000);
    cout << t1.name << endl;
    cout << t1.dep << endl;
    cout << t1.sub << endl;
    cout << t1.getSalary() << endl;

    return 0;
}