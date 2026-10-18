#include <vector>
#include <cstdlib>
#include <stdexcept>
#include<iostream>
using namespace std;  
void hasDivisiblePrefix(const vector<long long>& arr, long long k) {  
    if (k == 0) { 
        throw invalid_argument("k must be non-zero");     }  
    if (k < 0) k = -k;  
    long long remainder = 0; 
     for (long long value : arr) {  
    remainder = (remainder + ((value % k + k) % k)) % k;
    if (remainder == 0)  {cout<<"true"; return;}     }   
 cout<<" false"; return; } 
int main(){
    vector<long long>arr;
    int n;
    cout<<"Enter the no of elemnts : ";
    if (!(cin >> n) || n < 0) {
        cerr << "Please enter a valid non-negative number of elements.\n";
        return 1;
    }
    arr.resize(n);
    cout<<"Enter the elemnts : ";
     for(int i=0;i<n;i++){
        if (!(cin >> arr[i])) {
            cerr << "Please enter a valid integer for each element.\n";
            return 1;
        }
    }
    int k;
    cout<<"Enter the divisor : ";
    cin>>k;
    hasDivisiblePrefix(arr, k);

}