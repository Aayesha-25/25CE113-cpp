#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, x;
cout<<"program started\n";
    cout << "Enter number of elements: ";
    cin >> n;

    set<int> s; // automatically unique + sorted

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x); // duplicates ignored
    }


    cout << "\nUnique Sorted Elements (Set): ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }


    vector<int> v(s.begin(), s.end());

    cout << "\n\nConverted Vector: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}
