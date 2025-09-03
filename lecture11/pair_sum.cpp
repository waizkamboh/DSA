#include <iostream>
#include <vector>
using namespace std;
//This is Brute force approch. Time complexity of this question is o(n^2). This is not better approch to solve this question.
vector<int> pairSum(vector<int> nums, int target) {
    int size = nums.size();
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
       for (int j = i + 1; j < size; j++)
       {
         if (nums[i] + nums[j] == target)
         {
           ans.push_back(i);
           ans.push_back(j);
           return ans;
         }
         
       }
       
    }
    return ans;
}

//This is 2 pointer approch. This is better approch to solve this question. 
vector<int> pairSumP(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target) {
            j--;
        }
           
        else if (pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans; 
        }
           
        
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " ," << ans[1] << endl;
    vector<int> ansp = pairSumP(nums, target);
    cout << "Pair sum using 2 pointer approch" << ans[0] <<" ," <<ans[1] << endl;
    return 0;
}