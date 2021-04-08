#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    ll cnt=1;
    testcase
    {
        vi v;
        ll n,a,tem,c=0,sum=0,j;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
            if(a>0)
            {
                sum=sum+a;
            }
        }
    
    for (j = 0; j <n-1; j++) 
    { 
        if (v[j] > v[j + 1]) 
        {
            tem = v[j];
            v[j] = v[j + 1];
            v[j + 1] = tem;
            j = -1;
            c++;
        }
    }
        cout<<"Case "<<cnt<<": "<<sum<<" "<<c<<endl;
        cnt++;
        sum=0;
        v.clear();
    }


return 0;
}

