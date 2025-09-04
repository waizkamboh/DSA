#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
     
    for (int i = 0; i < nums.size(); i++)
    {
        int freq = 0;
        for (int j = 0; j < nums.size(); j++)
        {
           if (nums[i] == nums[j])
           {
             freq++;
           }
           
        }
        if (freq > nums.size() / 2)
        {
            return nums[i];
        }
        
        
    }
   return -1;
    
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    cout << majorityElement(nums);
    return 0;
}