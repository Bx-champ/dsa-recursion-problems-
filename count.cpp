#include<bits/stdc++.h>
using namespace std;
//back counting without backtracking 
// void count(int n){
//     if(n==0){
//         return;
//     }else{
//         cout<<"element is:"<<n<<endl;
//         count(n-1);
//          
//     }
// }

//normal front counting with baacktracking 
void count(int n){
    if(n==0){
        return;
    }else{
       
        count(n-1);
         cout<<"element is:"<<n<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of element :";
    cin>>n;
    count(n);
    return 0;
}