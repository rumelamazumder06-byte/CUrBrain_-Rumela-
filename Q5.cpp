#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void display(vector<int>num,int n){
   int c=0;
    while(n>0){
        num.push_back(n%10);
    
        n/=10;

    }
    c=num.size();
    for(int i=0;i<c;i++)
    {
        if(i%2==0)
        num[i]=0;
       else
        continue;

    }
    for(int i=0;i<c;i++){
        cout<<num[i];
    }
}
int main(){
    int n;
    cout  <<"Enter the number:";
    cin>>n;
    vector<int>num={};
    display(num,n);
    return 0;
}