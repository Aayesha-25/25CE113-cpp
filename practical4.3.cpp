#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int i,j;
    cout << "Enter Total elements in first array: ";
    cin >> n;
    cout << "Enter total elements in second array: ";
    cin >> m;
    int *p1 = new int[n];
    int *p2 = new int[m];
    cout << "Enter elements of first array: ";
    for (i = 0; i < n; i++)
    {
        cin >> p1[i];
    }
    cout << "Enter elements of second array: ";
    for (i = 0; i < m; i++)
    {
        cin >> p2[i];
    }

    int *p3=new int[n+m];
    for(i=0; i<n; i++)
    {
        p3[i]=p1[i];
    }
    j=i;
    for(i=0; i<m; i++)
    {
        p3[j]=p2[i];
        j++;
    }
    for(i=0; i<(m+n); i++)
    {
        for(j=i+1; j<(m+n); j++)
        {
            if(p3[i]>p3[j])
            {
                int temp=p3[i];
                p3[i]=p3[j];
                p3[j]=temp;
            }
        }
    }
    cout<<"Sorted and Merged Array"<<endl;
    for(i=0; i<n+m; i++)
    {
        cout<<p3[i]<<" ";
    }
    j=1;

    cout<<endl<<"Sorted and Merged Array without Duplication"<<endl;
    cout<<p3[0]<<" ";
    for(i=1; i<n+m; i++)
    {
        if(p3[i-1]!=p3[i])
        {
            p3[j]=p3[i];
            cout<<p3[j]<<" ";
            j++;
        }
        else continue ;
    }


    delete[] p3;
    delete[] p1;
    delete[] p2;

    return 0;
}
