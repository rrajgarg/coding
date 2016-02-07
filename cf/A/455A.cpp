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
lli dp[100000+5];
lli a[100000+5]={0};
lli func(int i)
{
	if(dp[i]!=-1) return dp[i];
	//dp[i]=a[i]*i;
	//lli j=func(i+2);

	return dp[i]=max(a[i]*i+func(i+2),func(i+1));
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		lli sum=0;
		int n;
		sci(n);
		
		int b;
		FL(i,0,n)
		{
			sci(b);
			a[b]++;
		}
		cout<<func(0);
	}
	return 0;
}