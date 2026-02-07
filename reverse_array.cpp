#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int h){
    if(l>=h){
        return ;
    }
    else{
        int temp;
        temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        reverse(arr,l+1,h-1);
    }
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}