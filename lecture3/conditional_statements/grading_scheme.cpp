#include<iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter a marks";
    cin>>marks;
    if(marks <= 100 && marks > 90){
        cout<<"Grade A+";
    }else if(marks <= 90 && marks > 80){
        cout<<"Grade A";
    }else if(marks <= 90 && marks > 80){
        cout<<"Grade B+";
    }else if(marks <= 80 && marks > 70){
        cout<<"Grade B";
    }else if(marks <= 70 && marks > 60){
        cout<<"Grade C+";
    }else if(marks <= 60 && marks > 50){
        cout<<"Grade C";
    }else if(marks <= 50 && marks > 40){
        cout<<"Grade D";
    }else if(marks <= 40 && marks >= 33){
        cout<<"Grade E";
    }else if(marks < 33){
        cout<<"Grade F";
    }else{
        cout<<"Enter marks between 1 to 100";
    }
    return 0;
}