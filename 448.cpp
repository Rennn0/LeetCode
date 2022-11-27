// Find All Numbers Disappeared in an Array
// Given an array nums of n integers where nums[i] is in the range [1, n], 
// return an array of all the integers in the range [1, n] that do not appear in nums.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums)
{
    vector<int>ans={};
    int n=nums.size();
    vector<int>tmp(n+1,0);
    
    for(size_t t=0;t<n;++t)
        tmp[nums[t]]++;

    for(size_t t=1;t<=n;++t)
        if(tmp[t]==0)ans.push_back(t);

    // for(int n:ans)
    //     cout<<n;
    return ans;
}


int main()
{
    vector<int>num = {1,4,2,3,2,3,7,8};
    findDisappearedNumbers(num);
    
}
