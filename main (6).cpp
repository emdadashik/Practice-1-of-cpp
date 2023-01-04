#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ara[n];
    
    for(int i=0 ; i<n ; i++)
        cin>>ara[i];
    
    int n2;
    cin>>n2;
    
    int ara2[n2];
    
    for(int i=0 ; i<n2 ; i++)
        cin>>ara2[i];
        
    int n3=n+n2;
    
    int ara3[n3];
    
    for (int i=0 ; i<n ; i++)
        ara3[i] = ara[i] ;
        
    int found;
    for(int i=0 ; i<n2 ; i++)
    {
        found = 0;
        for (int j=0 ; j<n && !found ; j++)
        {
            if(ara2[i]==ara[j])
                found = 1;
        }
        if (!found)
            ara3[n++] = ara2[i];
    }
    
    for(int i=0 ; i<n3 ; i++)
        cout<<ara3[i]<<" ";

    return 0;
}
