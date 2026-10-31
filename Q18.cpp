#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sw(vector<int>& v, int start, int end) {
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int start, end;
    cout << "Enter the start and end index: ";
    cin >> start >> end;

    sw(v, start, end);

    cout << "Output:- ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}