#include <iostream>
using namespace std;
//Print Number from 1 to N using while loop
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     int i = 1;
//     while (i <= n)
//     {
//        cout<<i<<endl;
//        i++;
//     }
    
//     return 0;
// }

//Print Number from 1 to N using for loop
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     for (int i =1; i <= n; i++)
//     {
//         cout<<i<<endl;
//     }
    
    
//     return 0;
// }

//Sum of number from 1 to N using while loop

int main(){
    int n, sum = 0, i = 1;
    cout<<"Enter a number";
    cin>>n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout<<sum;
    
}
