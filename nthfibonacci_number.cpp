#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result;

    if (n==1 || n==2)
    {
        result = 1;
        cout<<result<<endl;

    }
    else
    
    {
    int a,b=1;
    int result = 0;    
    for (int i=0;i<=n;i++)
    {
        result = a+b;
        a = b;
        b = result;
    }
        cout<<result<<endl;

    }


}