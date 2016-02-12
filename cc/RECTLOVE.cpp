#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define MOD 1e9+7
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
		lli n,m,k;
		scli(n);
		scli(m);
		scli(k);
		lli a[k];
		FL(i,0,k) scli(a[i]);
		double sum=0;
		FL(i,0,k)
		{
			lli mod=a[i]%m;
			double pro=ceil((double)a[i]/m);
			if(mod!=0)
				sum+=((mod)*(m+1-mod)*pro*(n+1-pro));
			else
				sum+=(m*pro*(n+1-pro));
		}
		sum=sum/( ( n*(n+1) ) /2);
		printf("%0.8lf\n",sum/( (m*(m+1) )/2));
	}
	return 0;
}