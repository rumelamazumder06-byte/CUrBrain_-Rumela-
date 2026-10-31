#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
void mini(vector<int>v){
    int min=INT_MAX;
    for(int i :v){
        if(abs(i)<abs(min))
        min=i;
    }
    cout<<"Output:- "<<min;


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
    
    mini(v);
}
