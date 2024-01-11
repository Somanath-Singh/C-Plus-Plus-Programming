#include<iostream>
using namespace std;
struct student
{
    int rollno;
    float marks;
};
int main()
{
  struct student s1;
  cout<<"Enter values of structure"<<endl;
  cin>>s1.rollno;
  cin>>s1.marks;
  cout<<"printing the values"<<s1.rollno<<"\n"<<s1.marks<<endl;
  return 0;
}
