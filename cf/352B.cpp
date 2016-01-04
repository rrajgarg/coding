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

int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n;
		sci(n);
		vector<pair<int,int> > v(n),f;
		FL(i,0,n)
		{
			int a;
			sci(a);
			v[i].first=a;
			v[i].second=i;
		}
		sort(v.begin(),v.end());
		int t=0;
		FL(i,0,n)
		{
			int s=0,d=0;
			if(v[i].first==v[i+1].first)
				d=v[i+1].second-v[i].second;
			while(v[i].first==v[i+1].first)
				if(v[i+1].second-v[i++].second!=d) s=1;
			if(!s)
				f.pb(make_pair(v[i].first,d)),
				t++;
		}
		printf("%d\n",t);
		FL(i,0,f.size())
			printf("%d %d\n",f[i].first ,f[i].second);

	}
	return 0;
}