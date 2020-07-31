#include<bits/stdc++.h>
using namespace std;
int myAlgo(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            sum +=(i+j);
        cout<<sum<<'\t';
        }
    }
    cout<<endl;
    return sum;

}
int myAlgo1(int n,int *val,int key){
    int low = 1, high = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(key<val[mid])
            low = mid - 1;
        if(key>val[mid])
            high = mid +1;
        if(key==val[mid])
            return 1;
    }
    return 0;
}
int myAlgo2(char *s){
    int c = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a')
            c++;
    }
    return c;
}
int main()
{
    cout<<myAlgo(5)<<endl;
    char str[100]="Md atikul aaa aa ";
    cout<<myAlgo2(str)<<endl;
    return 0;
}
