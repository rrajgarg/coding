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

int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n,m,d;
		sci(n);
		sci(m);
		sci(d);
		int a[n*m+5];
		sci(a[0]);
		FL(i,1,n*m)
		{
			sci(a[i]);
			if(a[i]%d!=a[0]%d)
			{
				printf("-1");
				return 0;
			}
			

		}
		sort(a,a+(n*m));
		int c=0;
		int q=a[(n*m)/2];
		//cout<<q;
		FL(i,0,n*m)
		{
			c+=(abs(q-a[i]))/d;
		//	cout<<c<<" ";
		}
		printf("%d\n", c);
	}
	return 0;
}