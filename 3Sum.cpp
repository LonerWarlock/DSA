#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int j = i+1, k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] < 0) j++;
                else if(nums[i]+nums[j]+nums[k] > 0) k--;
                else{
                    vector<int> v = {nums[i], nums[j], nums[k]};
                    ans.push_back(v);
                    while(j<k && nums[j]==v[1]) j++;
                    while(j<k && nums[k]==v[2]) k--;
                }
            }
            while(i < nums.size()-1 && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }

int main(){
  vector<int> nums = {-1,0,1,2,-1,-4};

  vector<vector<int>> answer = threeSum(nums);
  for (int i = 0; i < answer.size(); i++){
    for (int j = 0; j < answer[i].size(); j++){
      cout<< answer[i][j]<<" ";
    }
    cout<<endl;
  }
}
