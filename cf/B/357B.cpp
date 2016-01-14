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
		int n;
		sci(n);
		int m;
		sci(m);
		int a[n+1]={0};
		FL(i,0,m)
		{
			int b[3];
			FL(j,0,3) sci(b[j]);
			if(a[b[0]]==0&&a[b[1]]==0&&a[b[2]]==0)
			{
				a[b[0]]=1;
				a[b[1]]=2;
				a[b[2]]=3;
			}
			else if(a[b[0]])
			{
				if(a[b[0]]==1) {a[b[1]]=2;a[b[2]]=3; }
				if(a[b[0]]==2) {a[b[1]]=1;a[b[2]]=3; }
				if(a[b[0]]==3) {a[b[1]]=1;a[b[2]]=2; }
			}
			else if(a[b[1]])
			{
				if(a[b[1]]==1) {a[b[0]]=2;a[b[2]]=3; }
				if(a[b[1]]==2) {a[b[0]]=1;a[b[2]]=3; }
				if(a[b[1]]==3) {a[b[0]]=1;a[b[2]]=2; }
			}
			else if(a[b[2]])
			{
				if(a[b[2]]==1) {a[b[1]]=2;a[b[0]]=3; }
				if(a[b[2]]==2) {a[b[1]]=1;a[b[0]]=3; }
				if(a[b[2]]==3) {a[b[1]]=1;a[b[0]]=2; }	
			}
		}
		FL(i,1,n+1)
			printf("%d ",a[i]);
	}
	return 0;
}