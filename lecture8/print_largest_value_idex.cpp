 #include<iostream>
using namespace std;

int main() {
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
    //We assume max number is maximum number
    int largest = num[0];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
        
    }

    cout << "Index of an array which can hold largest Value:" << index << endl;


    
}