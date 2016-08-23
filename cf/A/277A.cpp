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
int n,m;
void uni( int i,int j,int co[])
{
	int t=co[i];
	FL(i,0,n)
	{
		if(co[i]==t)
			co[i]=co[j];
	}
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
		sci(n);
		sci(m);
		vector<int> a[m+1];
		int co[n];
		int c=0,f=0,g=0;
		FL(i,0,n) co[i]=i;
		FL(i,0,n)
		{
			int x;
			cin>>x;
			if(x==0){c++; co[i]=-1;f=1;}
			FL(j,0,x)
			{
				int b;
				g=1;
				cin>>b;
				a[b-1].pb(i);
			}
		}
		FL(i,0,m)
		{
			FL(j,0,a[i].size())
				uni(a[i][0],a[i][j],co);
		}
		set<int> s(co,co+n);
		if(f&&g)	cout<<s.size()-2+c;
		else cout<<s.size()-1+c;
	}

	return 0;
}