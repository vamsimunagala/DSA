#include<bits/stdc++.h>
using namespace std;

int findClosestNumber(vector<int>& nums) {
        int i, ans=INT_MIN, min=INT_MAX;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(abs(nums[i]-0)<min || (abs(nums[i]-0)==min && nums[i]>ans))
            {
                min = abs(nums[i]);
                ans = nums[i];
            }
        }
        return ans;
    }
    

int main(){
    vector<int>arr = {-4,-2,5,4,8};
    int ans = findClosestNumber(arr);
    cout<<ans;
}