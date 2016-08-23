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
int a[1005];
void uni(int n,int x,int y)
{
    int t=a[x];
    FL(i,0,n)
        if(a[i]==t)
            a[i]=a[y];
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n;
        cin>>n;
        vector<pair<int,int> > v(n);
        FL(i,0,n)
        {
            cin>>v[i].first;
            cin>>v[i].second;
        }
        
        FL(i,0,n) a[i]=i;
        FL(i,0,n)
        {
            FL(j,i,n)
            {
                if(v[i].first==v[j].first||v[i].second==v[j].second)
                    uni(n,i,j);
            }
        }
        set<int> s(a,a+n);
        cout<<s.size()-1;
	}
	return 0;
}