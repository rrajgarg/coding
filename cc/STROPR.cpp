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
 
 
lli power(lli x, unsigned lli y, unsigned lli m)
{
    if (y == 0)
        return 1;
    lli p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
lli dp[1000000+100];
lli modInverse(lli a, lli m)
{
	if(dp[a]!=0) return dp[a];
	
	return dp[a]=power(a, m-2, m);
  
}
// Driver Program
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
		for(lli i=1;i<n+1;++i)
			scli(a[i]);
		if(x==1)
			printf("%lld\n",a[1]%MOD);
		else if(x==2)
			printf( "%lld\n",(  ( ((a[1]%MOD)*(m%MOD) )%MOD)+(a[2]%MOD))%MOD    );
		else
		{
			lli ans=a[x]%MOD;
			lli num=1;
			int p=x-1;
			m%=MOD;
			for(lli i=1;i<x;++i)
			{
				num=( ((num%MOD)* ((m)%MOD)%MOD)* (modInverse(i,1000000007)%MOD)  )%MOD;
				ans=((ans%MOD)+((num%MOD )*(a[p--]%MOD))%MOD)%MOD;
				m++;
			//	cout<<num<<endl;
			}
			
			printf("%lld\n",ans);
		}
 
	}
	return 0;
}  