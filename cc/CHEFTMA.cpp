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
		int n,k,m;
		sci(n);
		sci(k);
		sci(m);
		int a[n],b[n],q[n],s=0;
		FL(i,0,n) sci(a[i]);
		FL(i,0,n){ sci(b[i]); q[i]=a[i]-b[i];s+=q[i];}
		int c[k+m];
		FL(i,0,k+m) sci(c[i]);
		sort(q,q+n,greater<int>());
		sort(c,c+k+m,greater<int>());
		int i=0,j=0;
		while(j<k+m && i<n)
		{
			if(c[j]<=q[i])
			{
				q[i]-=c[j];
				s-=c[j];
				i++;
			}
			j++;
		}
		printf("%d\n",s );
	}
	return 0;
}