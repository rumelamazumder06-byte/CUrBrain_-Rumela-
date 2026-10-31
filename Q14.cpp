#include<iostream>
#include<vector>
using namespace std;

void threshold(vector<int>v,int k)
{
    vector<int>m;
    for(int i :v){
        if(i>k)
        m.push_back(i);
    }
    cout<<("Output:-");
    for (int x : m) {
        cout << x << " ";
    }
}
int main(){
    vector<int>v;
    int k,n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout<<"Enter k:- ";
    cin>>k;
    threshold(v,k);
}