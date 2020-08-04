#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[2][2]={1,2,3,4},B[2][2]={5,6,7,8},C[2][2];
    int m,n,p,sum=0;
    m = n = p = 2;
    cout<<"A matrix........"<<endl;
    for(int i=0;i<m;i++){
            cout<<'\t';
        for(int j=0;j<p;j++){
            cout<<A[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"B matrix........"<<endl;
    for(int i=0;i<p;i++){
            cout<<'\t';
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<'\t';
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
               C[i][j] = 0,sum = 0;
            for(int k=0;k<p;k++){
                sum += A[i][k]*B[k][j];
            }
        C[i][j] = sum;
        }
    }


    cout<<"C matrix........."<<endl;
    for(int i=0;i<m;i++){
            cout<<'\t';
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<'\t';
        }
    cout<<endl;
    }
    return 0;
}

