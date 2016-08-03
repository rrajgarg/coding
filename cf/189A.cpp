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
int dp[2002]={0};
int a[2001+1]={0};
int func(int n)
{
	if(dp[n]!=-1) return dp[n];
	if(a[n]==-1) return 1;
	return dp[n]=1+func(a[n]);
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
		int n;
		sci(n);
		FL(i,0,2001) dp[i]=-1;
		
		FL(i,1,n+1)
			sci(a[i]);
		int max=1;
		FL(i,1,n+1) func(i);
		FL(i,1,n+1) 
			if(max<dp[i]) max=dp[i];
		cout<<max;

	}
	return 0;
}