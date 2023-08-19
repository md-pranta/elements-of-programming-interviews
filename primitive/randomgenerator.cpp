#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
int generator(int x, int y){
    int a = y -  x + 1, res;
    do{
        res = 0;
        for(int i = 0; (i<<i)<a;++i){
            res = (res<<1) | rand()%2;
        }
    }while(res >= a);
    return res + x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}