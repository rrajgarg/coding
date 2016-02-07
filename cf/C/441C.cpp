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

int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n,m,k;
		sci(n);
		sci(m);
		sci(k);
		int nm=n*m;
		int ans=nm;
		int x=1,y=1;
		int dir=1;
		FL(i,0,k-1)
		{
			printf("%d ",nm/k);
			ans=ans-nm/k;
			FL(j,0,nm/k)
			{
				if(x>m) y++,x=m,dir=dir^1;
				if(x<=0) y++,x=1,dir=dir^1;
				printf("%d %d ",y,dir?x++:x--);
			}


			nline;
		}
		printf("%d ",ans);
			//ans=ans-nm/k;
			FL(j,0,ans)
			{
				if(x>m) y++,x=m,dir=dir^1;
				if(x<=0) y++,x=1,dir=dir^1;
				printf("%d %d ",y,dir?x++:x--);
			}
	}
	return 0;
}