#include<iostream>
using namespace std;

class Sum{
private:
    int a;
public:
    Sum(int x){
        a=x;
    }
    friend void add(Sum,Sum);
};
  void add(Sum s1,Sum s2)
    {
        cout<<s1.a+s2.a;
    }
int main()
{
    Sum s3=Sum(4);
     Sum s4=Sum(6);
    add(s3,s4);
    return 0;
}
