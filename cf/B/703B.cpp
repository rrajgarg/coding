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
		int c[n+1]={0};
		int a[k+1];

		lli tsum=0,ans=0;
		FL(i,1,n+1)
		{
			sci(c[i]);
			tsum+=c[i];


		}
		int f=1,g=1;
		FL(i,1,k+1) 
		{
			sci(a[i]);
			ans+=((c[a[i]])*(tsum-c[a[i]]));
			if(a[i]==1)
				{ans-=(c[a[i]]*c[n]); g=0;}
			else ans-=(c[a[i]]*c[a[i]-1]);
			if(a[i]==n)
			{
				ans-=(c[a[i]]*c[1]);
				 f=0;
			}
			else ans-=(c[a[i]]*c[a[i]+1]);
		}
		
		FL(i,1,n)
		{
			ans+=(c[i]*c[i+1]);
		}
		if(f)
		ans+=(c[1]*c[n]);
		if(g)
		ans+=(c[1]*c[n]);
		FL(i,1,k+1)
			FL(j,i+1,k+1)
				ans-=(c[a[i]]*c[a[j]]);
		cout<<ans;
	}
	return 0;
}