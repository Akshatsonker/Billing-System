//permutation of string
#include<iostream>
using namespace std;

class solution {
    private:
    void solve(vector<int>nums,vector<vector<<int>>&ans,int index)
    {
        if(index>=nums.size())
        {
            nums.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);

            swap(nums[index],nums[j]);
        }
    }
    public:
    vector<vector<int>>permute(vector<int>&nums){
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
    }
};

