#include<iostream>
using namespace std;

int sum (int p = 0, int q = 1, int r = 2)
{
return p;
}
int main( )
{
int r1 = sum(4, 6, 10);
int r2 = sum(10, 6);
int r3 = sum(7);
int r4 = sum( );
cout<<"Result-1="<<r1<<endl;
cout<<"Result-2="<<r2<<endl;
cout<<"Result-3="<<r3<<endl;
cout<<"Result-4="<<r4<<endl;
return 0;
}

