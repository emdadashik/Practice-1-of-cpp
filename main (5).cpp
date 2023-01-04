#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ara[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
    }

    int n2;
    cin>>n2;
    
    int ara2[n2];
    
    for(int i=0 ; i<n2 ; i++)
    {
        cin>>ara2[i];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            if (ara[i]==ara2[j]){
                cout<<ara[i]<<" ";
                break;
            }
        }
    }
    return 0;
}

