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
	
	int t;
	sci(t);
	while(t--)
	{
		lli n,x,m;
		scli(n);
		scli(x);
		scli(m);
		lli a[n+1];
		FL(i,1,n+1) scli(a[i]);
		if(x==1)
			printf("%lld\n",a[1]%MOD);
		else if(x==2)
			printf( "%lld\n",(  ( ((a[1]%MOD)*(m%MOD) )%MOD)+(a[2]%MOD))%MOD    );
		else
		{
			lli ans=0;
			FL(i,1,x)
			{
				ans=((ans%MOD)+( ((a[i]%MOD)*(m%MOD) )%MOD))%MOD;
			}
			ans=((ans%MOD)+(a[x]%MOD))%MOD;
			printf("%lld\n",ans);
		}

	}
	return 0;
}