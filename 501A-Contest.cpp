#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(long long i=x; i<y; i++)
#define flc(i,x,y,z)           for(long long i=x; i<y; i+=z)
#define nl                     cout<<'\n'
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<long long>());
#define getIntoVc(v,n)         {long long k=n; while(k--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define sumvc(v)               accumulate(v.begin(),v.end(),0LL)
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0,sum=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>a>>b>>x>>y;
    ll mi = max((3*a)/10, a-(a/250)*x);
    ll va = max((3*b)/10, b-(b/250)*y);
 
    if(mi>va) cout<<"Misha";
    else if(mi<va) cout<<"Vasya";
    else cout<<"Tie";
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 