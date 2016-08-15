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
lli dp[2005][2005]={0};
int n,m;
lli calc(int x,int y)
{
	if(y>m) return 0;
	if(y==m) return 1;
	if(dp[x][y]!=-1) return dp[x][y];
	if(x>n) return 0;
	dp[x][y]=0;
	int j=0;
	for(int i=x;i<=n;i=i+x)
		dp[x][y]=((dp[x][y]%MOD)+(calc(i,y+1)%MOD))%MOD;
	
	return dp[x][y]%MOD;
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		FL(i,0,2001)
			FL(j,0,2001) dp[i][j]=-1;
		
		sci(n);
		sci(m);
		lli sum=0;
		FL(i,1,n+1)
			sum=((sum%MOD)+(calc(i,1)%MOD))%MOD;
		cout<<sum%MOD;

	}
	return 0;
}