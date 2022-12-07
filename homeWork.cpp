#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j , k, n;
    cout<<"Enter the number of Row : " ;
    cin>>n;

    for(i=1; i<=n; i++) //loop for creating row
    {
        for(j=1; j<=n-i; j++) //loop for creating left side space for piramid star pattern
        {
            cout<<" ";
        }
        for(k=1 ; k<=2*i-1 ; k++)
         //Here I am printing star as piramid. condition k<=2*i-1 : 2 * number of row -1 ( Since every time two stars are increase)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
