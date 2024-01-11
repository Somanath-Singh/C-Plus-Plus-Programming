#include<iostream>
using namespace std;

class A
{
private:
    int n1,n2,hcf,l,i;
public:
    void getData(int a,int b)
    {
        n1=a;
        n2=b;
    }
    void maxFind()
    {
    l=(n1>n2)?n1:n2;
    cout<<l;
    }
    void hcfFind()
      {
    for(i=1;i<=l;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            hcf=i;
        }
    }
     }
     void showResult()
     {
         cout<<"HCF:"<<hcf;
     }

};
int main()
{
    A a;
    a.getData(2,4);
     a.maxFind();
     a.hcfFind();
     a.showResult();
     return 0;
};
