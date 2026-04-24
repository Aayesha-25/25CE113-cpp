#include <iostream>
#include "ArrayOps.h"
#include <ctime>   // for time calculation
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    ArrayOps obj(n);
    obj.input();


    clock_t start1 = clock();
    int recSum = obj.recursiveSum(0);
    clock_t end1 = clock();


    clock_t start2 = clock();
    int itrSum = obj.iterativeSum();
    clock_t end2 = clock();

    cout << "\nRecursive Sum: " << recSum;
    cout << "\nIterative Sum: " << itrSum;

    cout << "\nTime (Recursive): "
         << double(end1 - start1) / CLOCKS_PER_SEC;

    cout << "\nTime (Iterative): "
         << double(end2 - start2) / CLOCKS_PER_SEC;


    cout << "\n\nMaximum (Recursive): " << obj.recursiveMax(0);
    cout << "\nMaximum (Iterative): " << obj.iterativeMax();

    return 0;
}
