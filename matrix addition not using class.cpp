#include"iostream"
using namespace std;

class Matrix
{
private:
    int mat1[2][3],mat2[2][3],res1[2][3],res2[2][3];
    public:
        void get1(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cin>>mat1[i][j];
                }
            }
        }
         void get2(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cin>>mat2[i][j];
                }
            }
        }
         void show1(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<mat1[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        void show2(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<mat2[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        void add(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    res1[i][j]=mat1[i][j]+mat2[i][j];
                }
            }
             for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<res1[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        void sub(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    res2[i][j]=mat1[i][j]-mat2[i][j];
                }
            }
             for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<res2[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
};
int main(){
    Matrix m1;
    cout<<"Enter value of 1st matrix\n";
    m1.get1();
     m1.show1();
     cout<<"Enter value of 2nd matrix\n";
    m1.get2();
    m1.show2();
     cout<<"sum of matrix\n";
    m1.add();
    cout<<"sub of matrix\n";
    m1.sub();
    return 0;

}
