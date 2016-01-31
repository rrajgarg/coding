#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define FLI(i,a,b) for(int i=a;i>=b;--i)
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
		int a[n];
		lli sum=0;
		FL(i,0,n)
		{
			sci(a[i]);
			sum+=a[i];
			//cout<<sum;
		}
		if(sum%3) cout<<0;
		else
		{
			lli s=0;
			vector<int> f,r;
			FL(i,0,n)
			{
				s+=a[i];
				if((double)s==(double)sum/3)
					f.pb(i);
			}
			s=0;
			//nline
			FLI(i,n-1,0)
			{
				s+=a[i];
				if((double)s==(double)sum/3)
					r.pb(i);
			}

			lli no=0;
			sort(r.begin(),r.end());
			FL(i,0,f.size())
			{
				//cout<<*upper_bound(r.begin(),r.end(),f[i]+1)<<f[i]+1<<"\n";
				no+=r.end()-upper_bound(r.begin(),r.end(),f[i]+1);
			}
			cout<<no;
		} 
	}
	return 0;
}