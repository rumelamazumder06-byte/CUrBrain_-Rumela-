#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_map>
using namespace std;
void popular(vector<int>v){
    unordered_map<int,int>m;
    for(int i :v){
        if(m.find(i)==m.end())
        m[i]=1;
       else 
       m[i]++;
    }
    int max=INT_MIN;
    int s=0;
for(auto i : m){
    if(i.second>max){
        max=i.second;
        s=i.first;
    }
    else if(i.second==max){
        if(i.first<s){
            s=i.first;
        }}
}
cout<<"Output:-"<<s;




}

int main(){
    vector<int>v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    popular(v);
}