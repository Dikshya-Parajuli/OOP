//Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by overloading binary * operator.

#include<iostream> 
using namespace std;
class Matrix
{
    int mat[3][3];
public:
    void getdata()
    {
        cout<<"Enter a 3*3 matrix:"<<endl; 
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    Matrix operator *(Matrix M) 
    {
        int sum;
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                sum=0;
                for(int k=0;k<3;k++)
                { 
                    sum=sum+mat[i][k]*M.mat[k][j];
                }
                temp.mat[i][j]=sum;
            }
                
        }           
        return temp;
    }
    void showdata()
    {
        cout<<"The product of two matrix is : "<<endl; 
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix A,B,C;
    A.getdata();
    B.getdata();
    C=A*B; 
    C.showdata();
    return 0; 
}