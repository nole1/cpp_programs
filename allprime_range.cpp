// Given an integer N, print all the prime numbers that 
// lie in the range 2 to N (both inclusive).


#include<iostream>
using namespace std;

int main()
{
   
 int n;
 cin >>n;

 for(int i=2;i<=n;i++)
 {
    int flag = 0;
     for (int j=2;j<=(i/2);j++)
     {
         if (i%j==0)
         {
             flag = 1;
             break;
         }
     }

     if (!flag)
     {
         cout<<i<<" ";
     }

     }
 }

