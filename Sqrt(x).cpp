#include <iostream>
#include<vector>
using namespace std;

int mySqrt(int x) {
  int i = 0, j = x;
  long long int mid = j;
  while(i<j){
    if(mid*mid <= x && (mid+1)*(mid+1) > x) break;
    if(mid*mid > x) j = mid-1;
    else if(mid*mid < x) i = mid+1;

    mid = i + (j-i)/2;
  }
  return mid;
}

int main(){
  int num;
  cin>>num;
  
  cout<<mySqrt(num);
  
}
