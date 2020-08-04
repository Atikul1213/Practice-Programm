#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int c[2][2];
    int m,n,p,sum;
    m = n = p = 2;
    cout<<"A Matrix............."<<endl;
    for(int i=0;i<m;i++){
            cout<<'\t';
        for(int j=0;j<p;j++){
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"B Matrix............"<<endl;
    for(int i=0;i<p;i++){
            cout<<"\t";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<'\t';
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum = 0;
            for(int k=0;k<p;k++){
                sum = sum + a[i][k]* b[k][j];
            }
            c[i][j] = sum;
        }
    }
    cout<<"C Matrix........."<<endl;
    for(int i=0;i<m;i++){
            cout<<'\t';
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
