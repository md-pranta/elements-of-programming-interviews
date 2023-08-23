#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
typedef pair<int, int>pii;

int maxDiffrence(vector<int>v,int n){
    int max_dif = INT_MIN,min_element=v[0];
    for(int i = 0; i < n; i++){
        max_dif = max(max_dif, v[i]-min_element);
        min_element = min(v[i], min_element);
    }
    return max_dif;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int>v = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    int n = v.size();
 
    //maxDiffrence(v, n);
    cout<<maxDiffrence(v, n);
 
    // for (int i = 0; i < n; i++) cout << v[i] << " ";

    return 0;
}