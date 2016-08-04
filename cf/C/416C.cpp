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
		int n;
		sci(n);
		int c,p;
		vector<pair<pair<int,int>,int> > v(n);
		FL(i,0,n)
		{
			sci(c);
			sci(p);
			v[i]=mk(mk(-p,-c),i+1);
		}
		int k;
		sci(k);
		vector<pair<int,int> > a(k);
		
		FL(i,0,k) {sci(c); a[i]=mk(c,i+1);}
		sort(a.begin(),a.end());
		sort(v.begin(),v.end());
	//	FL(i,0,n) cout<<v[i].first.first<<" "<<v[i].second<<endl;
		vector< pair<int,int> > ans;
		int count=0,sum=0,j=0;
		FL(i,0,n)
		{

			FL(j,0,k)
			{
				if(-v[i].first.second<=a[j].first)
				{
					ans.pb(mk(v[i].second,a[j].second));
					count++;
					sum+=v[i].first.first;
					a[j].first=0;
					break;
				}
			}
		}
		cout<<count<<" "<<-sum<<endl;
		FL(i,0,ans.size())
			cout<<ans[i].first<<" "<<ans[i].second<<endl;

	}
	return 0;
}