#include<iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    //method 1
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
   //We assume first index is minmum
    int min = num[0];

    for (int i = 0; i < size; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }

    cout << "Smallest Value of an array is:" << min;

    //method 2
    int siz = 6;
    int nums[siz] = {5, 15, 22, 1, -15, 24};
    
    //we assume maxnumber is +infinity and compare index of array 
    int minimum = INT_MAX;
    for (int i = 0; i < siz; i++)
    {
        if (num[i] < minimum)
        {
           minimum = num[i];
        }
        
    }
    cout << "Smallest Value of an array is:" << minimum;


}