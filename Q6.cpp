#include<iostream>
#include<cmath>
using namespace std;
void freq(int n,int a,int b)
{
    int ca=0,cb=0;
    while(n>0){
        if(a==n%10)
        ca++;
        if(b==n%10)
        cb++;
       n/=10;

    }
    if(ca>cb)
    cout<<abs(ca-cb);

    else
    cout<<abs(cb-ca);

}
int main(){
    int n,a,b;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the first digit:";
    cin>>a;
    cout<<"Enter the second digit:";
    cin>>b;
    freq(n,a,b);
}

