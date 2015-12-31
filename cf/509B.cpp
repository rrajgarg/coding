#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define MOD 1e9+7
#define lli long long int
#define pb push_back
#define nline printf("\n")

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
	//sci(t);
	while(t--)
	{
		int n,k;
		sci(n),sci(k);
		int a[n],d=0;
		FL(i,0,n) sci(a[i]);
		FL(i,0,n)
		{
			FL(j,i+1,n)
			{
				if(abs(a[i]-a[j])>d) d=abs(a[i]-a[j]);
			}
		}
		if(d>k) printf("NO");
		else
		{
			printf("YES\n");
			
			FL(i,0,n)
			{
				int q=1;
				FL(j,1,a[i]+1)
				{
					printf("%d ",j<=k?j:q++);
					if(q>k) q=1;
				}
				nline;
			}
		}
	}
	return 0;
}