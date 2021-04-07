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
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b && a!=c || b==c && b!=a || c==a && a!=b)
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else
    cout<<"Bad Triangle"<<endl;


return 0;
}

