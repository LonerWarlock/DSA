#include <iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int j = digits.size()-1;
    while(digits[j] == 9){
        digits[j] = 0;
        j--;
        if(j<0) break;
    }
    if(j >= 0){
        digits[j] += 1;
    }else{
        digits.insert(digits.begin(),1);
    }   
    return digits;
}

int main(){
  vector<int> nums = {4,3,2,1};
  vector<int> ans = plusOne(nums);

  for (int i = 0; i < ans.size(); i++){
    cout<<ans[i];
  }
}

