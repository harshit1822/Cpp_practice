#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;
    int i=1;
    int num;
  int   max=0;
    int smax;
    int num2;
    while(i<=n){
        
        cin>>num;
        cin>>num2;
        if(num>max){
            max=num;
            smax=num;
        }
        if(num>smax){
            smax=num;
        }
        i++;
        
    }
    if(n==0||n==1){
        int a = -2147483648;
        cout<<a;
    }
    else if(smax==max){
        int a= -2147483648;
        cout<<a;
    }
    else{
    cout<<max;
    }
    
}

