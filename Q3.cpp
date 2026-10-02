#include<iostream>
#include<cmath>
using namespace std;

int palindrome(int n){
    int dup =n;
    if(n<0)
    return 0;
    int num=0;
     while(n>0){
        num=num*10+n%10;
        n/=10;
    }
    if(num==dup)
    return 1;
    else
    return 0;

}
int reverse(int n){
    int dup=abs(n);
    int dup1=dup;
    int num=0;
     while(dup>0){
        num=num*10+dup%10;
        dup/=10;
     }
     dup1+=num;
     if(n<0)
     return dup1 *-1;
    else
    return dup1;
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(palindrome(n)==1){
    cout<<n;
    return 0;
    }
    else
    cout<<reverse(n);
    
}