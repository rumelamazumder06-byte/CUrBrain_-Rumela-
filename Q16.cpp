#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
void silver(vector<int>v){
    int fmax=-1;
    int smax=-1;
    for(int i :v){
        if(fmax==-1){
            fmax=i;
        }
        else if(i>fmax){
            smax=fmax;
            fmax=i;

        }
        else if(i<fmax){
            if(smax==-1||smax<i){
                smax=i;
            }
        }
}

cout<<"output:- "<<smax;
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
    
    silver(v);
}