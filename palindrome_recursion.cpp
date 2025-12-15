#include <bits/stdc++.h>
using namespace std;

bool f(string h,int len,int i){
    if(h[i]!=h[len-i-1]) return false;
    if(i>len/2) return true;
    return f(h,len,i+1);
}

int main(){
    string h;
    cin >> h;
    int len =0;
    while(h[len]!='\0'){
        len++;
    }
    int res= f(h,len,0);
    if(res==1) cout<< "Yes, the given string is a palindrome" << endl;
    else cout << "No, the given string is not a palindrome" << endl;
}