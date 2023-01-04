#include <iostream>

using namespace std;

int main()
{
    int n,mul = 1;
    cin>>n;
    
    int ara[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
        if(i%2!=0)
            mul *= ara[i];
    }
    
    cout<<mul<<"\n";
    return 0;
}
