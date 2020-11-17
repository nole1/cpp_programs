// Given a number N, figure out if it is a member of fibonacci series or not. 
// Return true if the number is member of fibonacci series else false.

#include<iostream>
using namespace std;


bool checkMember(int n)
{
    if (n==0 || n==1)
    {
        return true;
    }
    int result;
    int a=0;
    int b = 1;


    while(result <=n)
    {
        result = a+b;
        if (result==n)
        {
            return true;
        }
        a = b;
        b = result;
    }

    return false;

}
int main()
{
  int n;
  cin >> n;
  if(checkMember(n))
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }

}