#include<iostream>
#include<climits>

int divide(int dividend, int divisor) {
    bool neg_sign = 0;
    if((dividend >= 0) ^ (divisor >= 0))
        neg_sign = 1;
    if(dividend == divisor) return 1;
    unsigned int count = 0;
    unsigned int divi = abs(dividend);
    unsigned int D = abs(divisor);
    while(divi >= D){
        int pcount = 0;
        while(divi > (D << (pcount+1))){
            pcount++;
        }
        count += (1 << pcount);
        divi -= (D << pcount);
    }
    if((count == (1 << 31)) && !neg_sign) return INT_MAX;
    return neg_sign ? -count : count;
}

int main(){
  int n,D;
  cin>>n>>D;
  cout<<divide(n,D);
}
