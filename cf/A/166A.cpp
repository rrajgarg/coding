#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lli long long int
#define pb push_back
#define nline printf("\n");
#define mk make_pair

void sci(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
void scli(lli &x)
{
    register lli c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
bool myfunc(pair<int,int> a,pair<int,int>b)
{
	if(a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n;
		sci(n);
		int k;
		sci(k);
		vector<pair<int,int> > v;
		int a,b;
		FL(i,0,n)
		{
			sci(a);
			sci(b);
			v.pb(mk(a,b));
		}
		sort(v.begin(),v.end(),myfunc);
		pair<vector<pair<int,int> >::iterator,vector<pair<int,int> >::iterator> p;
		p=equal_range(v.begin(),v.end(),v[k-1],myfunc);
		cout<<-(p.first-v.begin())+(p.second-v.begin());

	}
	return 0;
}