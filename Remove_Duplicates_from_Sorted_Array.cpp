#include <iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> v = {nums[0]};
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[i-1]) v.push_back(nums[i]);
    }
    nums = v;
    return v.size();
}

int main(){
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
  cout<< removeDuplicates(nums);
}
