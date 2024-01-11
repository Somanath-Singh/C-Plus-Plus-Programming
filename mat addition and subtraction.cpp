#include"iostream"
using namespace std;

class Matrix
{
private:
    int mat1[2][3];
    public:
        void get(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cin>>mat1[i][j];
                }
            }
        }
         void show(){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<mat1[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        void add(Matrix m,Matrix n){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    mat1[i][j]=m.mat1[i][j]+n.mat1[i][j];
                }
            }
        }
        void sub(Matrix m,Matrix n){
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++){
                    mat1[i][j]=m.mat1[i][j]-n.mat1[i][j];
                }
            }
        }
};
int main(){
    Matrix m1,m2,r1,r2;
    cout<<"Enter value of 1st matrix\n";
    m1.get();
      m1.show();
     cout<<"Enter value of 2nd matrix\n";
    m2.get();
    m2.show();
     cout<<"sum of matrix\n";
    r1.add(m1,m2);
     r1.show();
    cout<<"sub of matrix\n";
    r2.sub(m1,m2);
    r2.show();
    return 0;

}
