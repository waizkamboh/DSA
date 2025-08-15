#include<iostream>
using namespace std;

int main() {
//     //creating fixed sized array and assign value
//     int marks[5] = {100,33,44,22,11};
//     marks[0] = 200;
//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << marks[4] << endl;
//    //creating array and assign value
//    double price[] = {11.2,33.4,55.4,6.6};
//    cout << price[0] << endl;
//    cout << price[1] << endl;
//    cout << price[2] << endl;
//    cout << price[3] << endl;
//    // if we want to calculate array size you can do eaisly write sizeof function pass actual array and divided by array data type
//    cout << sizeof(marks) / sizeof(int);
   //Input array using loop
   int size = 5;
   int studentMarks[size];

   for (int i = 0; i < size; i++)
   {
      cin >> studentMarks[i];
   }
   //Output array using loop
   for (int i = 0; i < size; i++)
   {
     cout << studentMarks[i] << endl;
   }
   
}