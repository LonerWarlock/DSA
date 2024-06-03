#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> grayCode(int n) {
  vector<int> ans = {0,1};
  vector<int> temp = ans;
  if(n==1) return ans;
  for(int i=2; i<=n; i++){
      for(int j=0; j<pow(2,i-1); j++){
          ans[j] = ans[j]<<1;
      }
      for(int j=0; j<pow(2,i-1); j++){
          ans.push_back(((temp[pow(2,i-1)-1-j]<<1)|1));
      }
      temp = ans;
  }
  return ans;
}


int main(){
  int n; cin>>n;
  vector<int> ans = grayCode(n);
  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
  
}
