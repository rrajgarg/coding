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
int n,m;
char a[51][51];
int vis[51][51]={0};
int x,y;
int func(int q,int w,char c,int count)
{
	if(a[q][w]!=c) return 0;
	if(count==1)
		FL(i,0,n)
			FL(j,0,m)
				vis[i][j]=0;

	if(q==x&&w==y&&count>=4) return 1;
	if(q>=n||w>=m||q<0||w<0) return 0;
	if(vis[q][w]==1) return 0;
	vis[q][w]=1;
	int p;
	p=func(q+1,w,c,count+1);
	 
	
	
	p=max(p,func(q,w+1,c,count+1));
	p=max(p,func(q,w-1,c,count+1));

	p=max(p,func(q-1,w,c,count+1));
	
	return p;
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
		sci(n);sci(m);
		
		FL(i,0,n)
			cin>>a[i];
		FL(i,0,n)
			FL(j,0,m)
			{
				x=i;
				y=j;
				if(func(i,j,a[i][j],1))
				{
					cout<<"Yes";
					return 0;
				}
			}
			cout<<"No";
	}
	return 0;
}