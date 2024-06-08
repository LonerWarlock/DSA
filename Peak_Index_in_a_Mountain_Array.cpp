#include <iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int i = 0, j = arr.size()-1;
    int peak,mid;
    while(i<j){
        mid = i + (j-i)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid]<arr[mid+1]) i = mid+1;
        else j = mid;
    }
    return mid;
}

int main(){
  vector<int> nums = {0,10,5,2};
  cout<<peakIndexInMountainArray(nums);
}
