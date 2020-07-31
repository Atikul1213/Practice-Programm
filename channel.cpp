#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pres,dest,dis1,dis2;
    while(scanf("%d%d",&pres,&dest)==2){
        if(pres==-1 && dest==-1)
            break;
            if(dest<pres){
                int temp = pres;
                pres = dest;
                dest = temp;
            }
        dis1 = abs(dest-pres);
        dis2 = abs( (100-dest)+pres);
        cout<<"dis1 : "<<dis1<<"\tdis2: "<<dis2<<endl;
        cout<<min(dis1,dis2)<<endl;
    }
    return 0;
}
