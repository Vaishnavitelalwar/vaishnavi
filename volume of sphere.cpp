/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
   float radius,volume;
   cout<<"enter radius"<<endl;
   cin>>radius;
   volume=(pi*radius*radius*radius);
   cout<<"volume of sphere:"<<volume;

    return 0;
}
