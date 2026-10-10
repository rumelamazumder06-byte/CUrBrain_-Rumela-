#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    int count = 0;
    vector<bool> isprime(n + 1, true);
    isprime[0] = false;
    isprime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            count++;
            for (int j = i * 2; j <= n; j = j + i) {
                isprime[j] = false;
            }
        }
    }

    cout << "The count is : " << count << endl;
}