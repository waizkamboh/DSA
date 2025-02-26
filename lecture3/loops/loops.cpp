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

// int main(){
//     int n, sum = 0, i = 1;
//     cout<<"Enter a number";
//     cin>>n;
//     while (i <= n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     cout<<sum;
    
// }

//Sum of number from 1 to N using for loop

// int main(){
//     int n, sum = 0;
//     cout<<"Enter a number";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//         if(i == 3){
//             break;
//         }
        
//     }
    
//     cout<<sum;
    
// }

//sum of all odd number from 1 to n
// int main(){
//     int n, sum = 0;
//     cout<<"Enter a number";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         if(i % 2 == 1 )
//         sum = sum + i;
        
        
//     }
    
//     cout<<sum;
    
// }

//sum of all odd number from 1 to n
// int main(){
//     int n, sum = 0;
//     cout<<"Enter a number";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         if(i % 2 == 0 )
//         sum = sum + i;
        
        
//     }
    
//     cout<<sum;
    
// }

// Sum of all numbers from 1 to n which are divisible by 3

// int main(){
//     int n, sum = 0;
//     cout<<"Enter a number";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//        if(i % 3 == 0)
//         sum = sum + i;
       
//     }
//     cout<<sum;
    
// }

//Check Number is prime or not
int main(){
    int n, count = 0;
    cout<<"Enter a number";
    cin>>n;
    for (int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
            count ++;
    }
    if(count == 0){
    cout<<n<<" Number is prime";
    }else{
    cout<<n<<" Number is not prime";
    }
    return 0;
    
}



