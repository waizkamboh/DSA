#include <iostream>
using namespace std;

int main(){
    int age = 22; //4 Bytes
    cout<<"Your age is:"<<age<<endl;
    char grade = 'A'; //1 Bytes
    cout<<"Your grade is:"<<grade<<endl;
    float PI = 3.14; //4 Bytes
    cout<<"Value of PI is:"<<PI<<endl;
    bool isLogin = false; //1 Bytes
    cout<<"IsLogin:"<<isLogin<<endl;
    double price = 3.44; //8 Bytes
    cout<<"Price:"<<price<<endl;
    cout<< "Waiz\numer"<<endl;
    //Type Casting: 
    //Conversion(Implicit)
    char grade1 = 'A';
    int value = grade;
    cout<<value<<endl;
    //Casting(Explicit)
    double price1 = 100.99;
    int newPrice = (int)price1;
    cout<<newPrice<<endl;
    int enterNumber;
    cout<<"Enter Number";
    cin>>enterNumber;
    cout<<"You enter number is:"<<enterNumber<<endl;
    //Arithmetic Operator
    int a = 10, b = 5;
    cout<<"Sum of a & b is:"<<a+b<<endl;
    cout<<"Difference of a & b is:"<<a-b<<endl;
    cout<<"Product of a & b is:"<<a*b<<endl;
    cout<<"Division of a & b is:"<<a/b<<endl;
    cout<<"Modules of a & b is"<<a%b<<endl;
    //Agar answer decimal me le kar anna ha 
    int c = 10;
    float d = 5.10;
    cout<<c/d<<endl;
    //Second method
    cout<<5/(double)2<<endl;
    //Is dafa answer int me aye ga divide honye ka bad value int ko assign ho rahi ha int data type choti ha wo decimal point ko ignore kar de i
    int ans = (5 / (double)2);
    cout<<ans<<endl;
    //Relational Operator is a boolean. its always reture true(1) or false(0)
    cout<<(3 < 5)<<endl;
    cout<<(3 <= 5)<<endl;
    cout<<(3 > 5)<<endl;
    cout<<(3 >= 5)<<endl;
    cout<<(3 == 5)<<endl;
    cout<<(3 != 5)<<endl;
    //Logical Operator
    cout<<((3 > 5) && (3 < 5))<<endl;
    cout<<((3 > 5) || (3 < 5))<<endl;
    cout<<!(3 < 5)<<endl;






    return 0;
}

//Biolerplate Code 
//Type casting : Converting data from one type to another
//There are two types of types casting
//Conversion(Implicit): Small -> Big
//casting(Explicit): Big -> Small
//Conversion implicit hoti ha complier kar ke deta ha  casting Explicit hoti ha programmer kuhd karta ha 
//Agar hum int ko int se divide karye ge to answer bi int aye ga decimal ke bad wala hissa ignore ho jaye ga agar hm chahtye ha ke answer decimal me aye to ya to hmye float ko int par divide karna parye ga ya int ko float par ya double ko int par ya int ko double par in me se answer os data type me aye ga jo sb se bari ho gi na ke ya division me balke addition, multiplication me bi ya hi rolle ha

