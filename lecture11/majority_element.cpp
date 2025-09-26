#include <iostream>
#include <vector>
using namespace std;
// Find majority element using brute force approch
int majorityElement(vector<int> nums) {
     int n = nums.size();
    for (int val: nums)
    {
        int freq = 0;
        for (int ele: nums)
        {
           if (val == ele)
           {
             freq++;
           }
           
        }
        
        
        
    }
   return -1;
    
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    cout << majorityElement(nums);
    return 0;
}