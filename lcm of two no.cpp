#include<iostream>
using namespace std;

class A
{
private:
    int a,b,i;
public:
    void calc()
    {
        cout<<"Enter value of a:";
        cin>>a;

        cout<<"Enter value of b:";
        cin>>b;

        for(i=1;i<=(a*b);i++)
        {
            if(i%a==0&&i%b==0)
            {
                cout<<"LCM="<<i<<endl;
                break;
            }
        }
    }
};
int main()
{
    A a;
    a.calc();
    return 0;
}
