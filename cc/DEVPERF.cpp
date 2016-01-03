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
		int n,m; 
		sci(n);
		sci(m);
		char ch[m];
		int i2=-5,i1=1005,j2=-5,j1=1005,f=0;
		FL(i,0,n)
		{
			scanf("%s",ch);
			FL(j,0,m)
			{
				
				if(ch[j]=='*')
				{   f=1;
					if(i>i2) i2=i;
					if(i<i1) i1=i;
					if(j>j2) j2=j;
					if(j<j1) j1=j;
				}
			}
			
			
		}
		//cout<<i1<<" "<<i2<<" "<<j1<<" "<<j2<<" ";
		int a=i2-i1,b=j2-j1;
		if(a&1) a++;
		if(b&1) b++;
		printf("%d\n",f?(a/2>b/2?a/2:b/2)+1:0);
	}
	return 0;
}