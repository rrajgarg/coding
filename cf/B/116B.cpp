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
	//sci(t);
	while(t--)
	{
		int n,m;
		char q[15];
		sci(n);
		sci(m);
		int a[n+1][m+1]={0};
		FL(i,0,n)
		{
			scanf("%s",q);	
			FL(j,0,m)
			{
				
				if(q[j]=='P') a[i][j]=1;
				if(q[j]=='W') a[i][j]=2;
			}
		}
		int c=0;
		FL(i,0,n)
		{
			FL(j,0,m)
			{
				if(a[i][j]==1)
				{	
					a[i][j]=0;
					if(a[i+1][j]==2)
						c++,a[i+1][j]=0;
					if(a[i][j+1]==2)
						c++,a[i][j+1]=0;
					if(i-1>=0&&a[i-1][j]==2)
						c++,a[i-1][j]=0;
					if(j-1>=0&&a[i][j-1]==2)
						c++,a[i][j-1]=0;
				}
			}
		}	
		cout<<c;
	}
	return 0;
}