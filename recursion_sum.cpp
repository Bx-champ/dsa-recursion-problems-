#include<bits/stdc++.h>
using namespace std;
int sum(int n,int s){
    if(n==0){
        return s;
    }
    else{
        return sum(n-1,s+n);
    }
}
int main(){
    int n;
    cout<<"enter the number till which you want to sum :";
    cin>>n;
    int s=0;
    s=sum(n,s);
    cout<<"the sum is :"<<s;
    return 0;
}