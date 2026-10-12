#include<iostream>
#include<vector>
using namespace std;
void powerModulo(long long base, long long power, long long mod) { 
    if (mod <= 0 || power < 0) {
         throw invalid_argument("mod must be positive and power non-negative");     } 
         long long result = 1 % mod;  
         base %= mod; 
         for (long long i = 0; i < power; ++i) { 
             result = (result * base) % mod;     }  
              cout<<"The result: "<< result; } 
int main(){
    long long base,power,mod;
    cout<<"Enter the base :";
    cin>>base;
    cout<<"Enter the power :";
    cin>>power;

    cout<<"Enter the mod :";
    cin>>mod;
    powerModulo(base,power,mod);
}