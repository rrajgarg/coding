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
string a,b;
int x=0,y=0,z=0,c=0;
void solve(int i,int sum)
{
    if(i==a.length())
    {
        sum==x?y++:z++;
        return;
    }
    if(b[i]=='+')
        solve(i+1,sum+1);
    else if(b[i]=='-')
        solve(i+1,sum-1);
    else
    {
        solve(i+1,sum+1);
        solve(i+1,sum-1);
    }
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		
        cin>>a>>b;
        FL(i,0,a.length())
            a[i]=='+'?x++:x--;
       
        solve(0,0);
        cout << fixed << setprecision(10);
        cout<<(double)y/(y+z);
	}
	return 0;
}