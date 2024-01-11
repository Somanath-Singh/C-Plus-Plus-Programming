#include"iostream"
using namespace std;
 void swap(int *,int *);
int main()
{
    int x,y;
    cout<<"Enter a num1"<<endl;
    cin>>x;
    cout<<"Enter a num2"<<endl;
    cin>>y;
    cout<<"x="<<x<<"y="<<y<<endl;
     swap(&x,&y);
     cout<<"x="<<x<<"y="<<y<<endl;
    return 0;
}
 void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


