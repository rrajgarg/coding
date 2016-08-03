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
		int a[n+1]={0};
		lli sum[n+1]={0};
		FL(i,1,n+1)
		{
			sci(a[i]);
			sum[i]=sum[i-1]+a[i];
		//	cout<<sum[i]<<" ";
		}
		int m;
		vector<int> v(a,a+n+1);
		sort(v.begin(),v.end());
	//	FL(i,1,n+1) cout<<v[i]<<" ";
		lli sum2[n+1]={0};
		FL(i,1,n+1)
	//	 cout<<
		(sum2[i]=sum2[i-1]+v[i]);//<<" ";
		int x,y,z;
		sci(m);
		FL(i,0,m)
		{
			sci(x);
			sci(y);
			sci(z);
			if(x==1)
				printf("%lld\n",sum[z]-sum[y-1]);
			else printf("%lld\n",sum2[z]-sum2[y-1]);
		}

	}
	return 0;
}