#include<iostream>
using namespace std;

int main()
{
    int num[5];
    int i;
    cout<<"Enter 5 element"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout<<"printing the values"<<endl;
    for(i=0;i<5;i++)
    {
      cout<<"num["<<i<<"]"<<"="<<*(num+i)<<endl;
    }
    return 0;
}
