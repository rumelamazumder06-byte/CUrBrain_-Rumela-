#include<iostream>
#include<vector>
using namespace std;
void summod(const vector<long long>& arr) 
{     
    const long long MOD = 1000000007LL;  
    long long result = 0;  
     for (long long value : arr) {  
               result = (result + value % MOD) % MOD;   
              }     
cout<<"The result is : "<< result;
}

int main()
{
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
    summod(arr);
}