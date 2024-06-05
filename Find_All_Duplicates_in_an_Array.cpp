#include <iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
    for(int i=0; i<nums.size(); i++){
        int x = abs(nums[i]);
        if(nums[x-1]>0) nums[x-1] *= -1;
        else v.push_back(x);
    }
    return v;
}

int main(){
  vector<int> nums = {4,3,2,7,8,2,3,1};

  vector<int> answer = findDuplicates(nums);
  for (int i = 0; i < answer.size(); i++){
    cout<< answer[i]<<" ";
  }
}
