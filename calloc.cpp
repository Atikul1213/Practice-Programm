#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    ///ptr = (int*)malloc(10*sizeof(int));
    ptr = (int *)calloc(10,sizeof(int));

    ptr[1] = 5;
    cout<<ptr[1]<<endl;
    ptr = (int *)calloc(20,sizeof(int));
    cout<<ptr[1]<<endl;
    free(ptr);
    return 0;
}
