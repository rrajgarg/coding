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
int dp[1005];
int dp1[1005];
int v[10050];
int a[1005];
int n;
int func(int i)
{
	int x=0;
	if(i>=n||i<0) return 0;
	if(dp[i]!=-1) return dp[i];
	if(a[i+1]>a[i]&&a[i-1]>a[i]) return dp[i]=1;
	if(a[i+1]<=a[i]) x=func(i+1);
	return dp[i]=1+x;


}
int func2(int i)
{
	int x=0;
	if(i>=n||i<0) return 0;
	if(dp1[i]!=-1) return dp1[i];
	if(a[i+1]>a[i]&&a[i-1]>a[i]) return dp1[i]=1;
	if(a[i-1]<=a[i]) x=func2(i-1);
	return dp1[i]=1+x;


}
int main()
{
	int t=1;
	//sci(t);
	FL(i,0,1005) dp[i]=-1,dp1[i]=-1;
	while(t--)
	{
		
		sci(n);
		
		FL(i,0,n) sci(a[i]);
		FL(i,0,n) 
		func(i);
		for(int i=n-1;i>=0;i--) func2(i);
		FL(i,0,n) 
		 dp[i]+=dp1[i]-1	;
		 sort(dp,dp+n);
		cout<<dp[n-1];
	}
	return 0;
}