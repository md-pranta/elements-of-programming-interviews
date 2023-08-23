#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
typedef pair<int, int>pii;

void DutchFlagPartition(int ind, vector<int>&v,int n){
    int pivot = v[ind];
    int i = 0, left = 0, right = n;
    while(i < right){
        if(v[i]<pivot){
            swap(v[i++],v[left++]);
        }
        else if(v[i]==pivot){
            i++;
        }
        else{
            swap(v[i],v[--right]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int>v = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    int n = v.size();
 
    DutchFlagPartition(5,v, n);
 
    for (int i = 0; i < n; i++) cout << v[i] << " ";

    return 0;
}