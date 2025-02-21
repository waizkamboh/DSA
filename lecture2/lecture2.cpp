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

    
    return 0;
}

//Biolerplate Code 
//Type casting : Converting data from one type to another
//There are two types of types casting
//Conversion(Implicit): Small -> Big
//casting(Explicit): Big -> Small
//Conversion implicit hoti ha complier kar ke deta ha  casting Explicit hoti ha programmer kuhd karta ha 
