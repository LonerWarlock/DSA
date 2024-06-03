#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans = {{}};
    for(int i=0; i<nums.size(); i++){
        vector<vector<int>> temp = ans;
        for(int j=0; j<ans.size(); j++){
            ans[j].push_back(nums[i]);
        }
        ans.insert(ans.end(), temp.begin(), temp.end());

    }
    return ans;
}

int main(){
  vector<int> nums = {1,2,3};
  
  for(int i=0; i<subsets(nums).size(); i++){
    for (int j=0; j<subsets(nums)[i].size(); j++){
        cout<<subsets(nums)[i][j]<<" ";
    }
    cout<<endl;
  }
}
