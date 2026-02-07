#include<bits/stdc++.h>
using namespace std;
int s=0;
int sum(int n){
    if(n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}
int main(){
    int n;
    cout<<"enter the numbers till which you want to sum :";
    cin>>n;
    int su=sum(n);
    cout<<"the sum is :"<<su;
}