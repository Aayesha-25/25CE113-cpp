#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your String: ";
    getline(cin,s);

    int i,counts=0;
    for(i=0;s[i]!='\0';i++)
    {
      s[i]=tolower(s[i]);
    }


    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' '||s[i]!='\n')
            counts++;
        else continue;
    }
     cout<<"Frequency of the Inputted String is : "<<counts<<endl;
     int freq[26]={0};
     for(i=0;s[i]!='\0';i++)
     {
         freq[s[i]]++;
     }
     int maxf=freq[0];

     for(i=0;i<26;i++)
     {
         if(freq[i]>maxf)
         {
             maxf=i;
         }

     }
     cout<<"Most Repeated word is: "<<s[maxf];
     cout<<endl<<"Words Which are unique in the inputted string: ";
     for(i=0;s[i]!='\0';i++)
     {
         if(freq[s[i]]==1)
         {
             cout<<s[i]<<" ";
         }
     }

    return 0;
}
