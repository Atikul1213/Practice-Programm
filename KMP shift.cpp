#include<bits/stdc++.h>
using namespace std;
int KMPMultipleTimes(string text,string pattern){
    int best = 0, result = 0, ans = 0;
    vector<int>lps = constructTempArray(pattern);
    int j = 0, i = 0;
    while(i<(int)text.length()){
        if(text[i]==pattern[j])
            ++i,++j,best++;
        else{
            best = 0;
            if(j!=0)
                j = lps[j-1];
            else
                ++i;
        }
        if(best > result) result = best, ans = i - j;
        if(j==(int)pattern.length())
            break;
    }
    return ans;
}
int main()
{
    int n;
    string a,b;
    cin>>n>>a>>b;
    b += b;
    cout<<KMPMultipleTimes(b,a)<<endl;
    return 0;
}
