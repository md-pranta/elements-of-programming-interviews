#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007

int gc(int a,int b){
    if(a==0)return b;
    if(b==0)return a;

    int k=0;
    for(k=0;(a | b) & 1 == 0; ++k){
        a>>1;
        b>>1;
    }

    while(a&1==0){
        a>>1;
    }
    do{
        while(b&1==0){
            b>>1;
        }
        if(a>b)swap(a, b);
        b -= a;
    }while(b);
    return a << k;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<gc(18, 6);
    return 0;
}  