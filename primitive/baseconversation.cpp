#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
int convert(char c){
    if(c>='0' && c<='9')return (int) c-'0';
    else return (int)c-'A'+10;
}

int toDecimal(string v,int base){
    int l = v.length();
    int power  = 1;
    int ans = 0;
    for(int i = l-1;i>=0;i--){
        int x = convert(v[i]);
        if(x>base){
            cout<<"Invalid number!"<<endl;
            return -1;
        }
        ans += x*power;
        power *= base;
    }
    return ans;
}
char conver2(int n){
    if(n>=0 && n<= 9) return (char) n + '0';
    else return (char) n-10+'A';
}
string desBase(int d, int base){
    string s = "";
    while(d>0){
        s += conver2(d%base);
        d/=base;
    }
    reverse(s.begin(),s.end());
    return s;

}
void convertBase(string v,int cur_base,int des_base){
    int decimal = toDecimal(v, cur_base);
    if(decimal==-1)return;
    cout<<desBase(decimal, des_base)<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string value;
    int a, b;
    cin>>value;
    cin >> a >> b;
    convertBase(value,a, b);

    return 0;
}  