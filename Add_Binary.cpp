#include<iostream>
using namespace std;

string addBinary(string a, string b) {
    bool A,B,C;
    char D = '0';
    C = 0;
    string ans = "";
    for(int i=0; i<max(a.length(),b.length()); i++){
        if(a.length()<i+1) A=0;
        else A = (a[a.length()-1-i] == '1' ? 1:0);
        if(b.length()<i+1) B=0;
        else B = (b[b.length()-1-i] == '1' ? 1:0);

        if((A & !(B^C)) | (B & !(A^C)) | (C & !(A^B))) D='1';
        else D='0';

        if(A&B | B&C | A&C) C=1;
        else C=0;
        
        ans = D + ans;
    }
    if(C) ans = '1' + ans;
    return ans;
}

int main(){
    //a and b are binary strings
    string a,b;
    cin>>a>>b;
    cout<<addBinary(a,b);
}
