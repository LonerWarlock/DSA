#include <iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int area = 0;
    while(j>i){
       area = max(area, (j-i)*(min(height[i], height[j])));
       if(height[i] > height[j]) j--;
       else i++;
    }
    return area;
}

int main(){
  vector<int> nums = {1,8,6,2,5,4,8,3,7};
  cout<<maxArea(nums);
}

