#include <iostream>
using namespace std;

class ArrayOps
{
private:
    int n;
    int arr[100];

public:
    // Constructor
    ArrayOps(int size = 0)
    {
        if (size > 0 && size <= 100)
            n = size;
        else
            n = 0;
    }

    // Input function
    void input()
    {
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Recursive sum
    int recursiveSum(int index)
    {
        // Base case
        if (index == n)
            return 0;

        // Recursive case
        return arr[index] + recursiveSum(index + 1);
    }

    // Iterative sum
    int iterativeSum()
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    // Recursive max
    int recursiveMax(int index)
    {
        if (index == n - 1)
            return arr[index];

        int maxRest = recursiveMax(index + 1);
        return (arr[index] > maxRest) ? arr[index] : maxRest;
    }

    // Iterative max
    int iterativeMax()
    {
        int maxVal = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > maxVal)
                maxVal = arr[i];
        }
        return maxVal;
    }
};
