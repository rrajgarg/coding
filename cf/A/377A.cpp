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
char a[505][505];
int n,m,k;
int vis[505][505];
void fun(int x,int y)
{
	if(a[x][y]=='#') return;
	if(x<0||y<0||y>=m||x>=n) return;
	if(vis[x][y]) return;
	vis[x][y]=1;
	fun(x+1,y);
	fun(x-1,y);
	fun(x,y+1);
	fun(x,y-1);
	if(k-->0) a[x][y]='X';
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
		sci(n);
		sci(m);
		sci(k);
		int x,y;
		
		FL(i,0,n)
			scanf("%s",a[i]);
		FL(i,0,n)
			FL(j,0,m)
				{
					if(a[i][j]=='.')
						{x=i,y=j; break;}
					
				}
		fun(x,y);
		FL(i,0,n)
			cout<<a[i]<<endl;
	}
	return 0;
}