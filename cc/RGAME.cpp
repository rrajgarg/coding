#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define M 1000000007
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
	sci(t);
	while(t--)
	{
		lli n;
		scli(n);
		lli a[n+5];
		FL(i,0,n+1) scli(a[i]);
		lli s=a[0]%M;
		lli x=1;
		lli ans=((a[1]%M)*(s%M))%M;
		FL(i,2,n+1)
		{
			s=( s%M + ( (x%M) * (a[i-1]%M) )%M )%M;
			ans=( (ans<<1)%M + ( (a[i]%M) * (s%M) )%M)%M;
			x=(x<<1)%M;
		}
		printf("%lld\n",(((ans%M)<<1)%M)%M );
	}
	return 0;
}