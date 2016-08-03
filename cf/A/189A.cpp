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
int n,a,b,c;
int dp[4000]={0};
int func(int x)
{
	if(x>n) return -INT_MAX;
	if(x==n) return 0;
	if(dp[x]!=0) return dp[x];
	int m=1+func(x+a);
	m=max(1+func(x+b),m);
	m=max(1+func(x+c),m);
	return dp[x]=m;
}

int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
		sci(n);
		sci(a);
		sci(b);
		sci(c);
		cout<<func(0);
		
	}
	return 0;
}