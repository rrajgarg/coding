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
int a,b,c;
int dp[4001];
int maxa(int n)
{	
	if(n<=0) 	return 0;
	if(dp[n]!=-1) return dp[n];
	if(n-a>=0)	dp[n]=1+maxa(n-a);
	if(n-b>=0)	dp[n]=max(dp[n],1+maxa(n-b));
	if(n-c>=0)	dp[n]=max(dp[n],1+maxa(n-c));
	return dp[n];
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n;
		memset(dp,-1,sizeof(dp));
		sci(n);
		sci(a);
		sci(b);
		sci(c);
		cout<<max(maxa(n),1);

	}
	return 0;
}