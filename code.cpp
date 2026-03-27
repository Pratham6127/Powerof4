#include<bits/stdc++.h>
using namespace std;

bool isPower(int n){

    if(n<=0){
        return false;
    }
    return ((n & (n-1))==0 ) && ((n-1)%3==0);
}

int main(){

    int n;
    cout<<"Enter the number";
    cin>>n;

    if(isPower(n)){
        cout<<"Is a power of 4";
    }
    else{
        cout<<"Not a power of 4";
    }
}