/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int i,sum;
    sum=0;
    cout<<"addition of 20 no";
    for(i=0;i<=20;i++)
    {
        sum=i+sum;
    }
    cout<<sum;
    return 0;
}