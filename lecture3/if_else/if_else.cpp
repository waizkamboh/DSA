#include <iostream>
using namespace std;
//Positive or negative number
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     if(n >=0){
//         cout<<n<<" Number is positive";
//     }else{
//         cout<<n<<" Number is negative";
//     }
//     return 0;
// }
//Voting program
// int main(){
//     int age;
//     cout<<"Enter the age";
//     cin>>age;
//     if(age >= 18){
//         cout<<"You can vote";
//     }else{
//         cout<<"You can't vote";
//     }
//     return 0;
// }
//Odd Even Program
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n % 2 == 0){
        cout<<n<<" Is Even";
    }else{
        cout<<n<<" Is odd";
    }
    return 0;
}