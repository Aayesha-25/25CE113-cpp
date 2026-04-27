#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Program started\n";

    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "\nOriginal Vector: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    reverse(v.begin(), v.end());

    cout << "\nAfter reverse: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
