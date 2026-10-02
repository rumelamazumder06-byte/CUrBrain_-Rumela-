#include<iostream>
#include<cmath>
using namespace std;
void digits( int n){
     if(n==0){
         cout<< "false";
         return;
     }
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    if(c%2==0)
    cout<<"true";
    else
    cout<< "false";
}
int main(){
     int n;
    cout<<"Enter the number:";
    cin>>n;
    
    n=abs(n);
    digits(n);
}
