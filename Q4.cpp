#include<iostream>
using namespace std;
void diff(int n){
    int sum=0;
    int product=1;
    while(n>0){
        sum+=n%10;
        product*=n%10;
        n/=10;
    }
    cout<<(product-sum);
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    diff(n);

}