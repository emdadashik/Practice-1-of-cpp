#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ara[n],sum=0;
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
        sum += ara[i];
    }

    cout<<sum<<"\n";
    return 0;
}
