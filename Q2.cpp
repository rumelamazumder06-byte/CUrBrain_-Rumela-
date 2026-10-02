#include<iostream>
#include<cmath>
using namespace std;
void reverseNdouble(int n){
    int dup=n;
    int num=0;
    n=abs(n);
    while(n>0){
        num=num*10+n%10;
        n/=10;
    }
    if(dup<0)
    cout<<num*-2;
    else
    cout<<num*2;
}


int main(){
    int n;
    cout<<"Enter the digit:";
    cin>>n;
    reverseNdouble(n);
   
}
