#include<bits/stdc++.h>
#define mx 100000
using namespace std;
struct info{
    long long prop,sum;
}tree[mx*3];

void update(int node,int b,int e,int i,int j,long long x){
    if(i>e || j<b)
        return;
    if(b>=i&& e<=j){
        tree[node].sum += ((e-b+1)*x);
        tree[node].prop += x;
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b + e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum = tree[left].sum + tree[right].sum+(e-b+1)*tree[node].prop;

}

int main()
{

    return 0;
}
