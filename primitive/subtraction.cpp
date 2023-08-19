#include<bits/stdc++.h>
using namespace std;

int sub(int x, int y){
    int  ans = 0, temp = 0;
    for(int i = 16;i >= 0;i--){
        if(temp + (y<<i) <= x){
            temp += (y<<i);
            ans += 1LL<<i;
        }
    }
    return ans;
}
int epi(int a, int b){
    int answer = 0;
    while (a>=b)
    {
        /* code */
        int p = 1;
        while (a>=(b<<p))
        {
            /* code */
            ++p;
        }
        answer += 1<<(p-1);
        a -= b << (p-1);
        
    }
    return answer;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << sub(43, 8)<<endl;
    cout << epi(43, 8)<<endl;
    cout << (16<<1)<<endl;
    return 0;
}  