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

const int size=10000+5;
bitset<size> prime;

int main()
{
	int t=1;
	sci(t);
	prime.flip();
	int limit=sqrt(size);
	vector<int> p;
    p.pb(2);
    for(int i=3;i<=limit;i+=2)
	  if(prime[i])
	      for(int j=i*2;j<=size;j+=i)
			prime[j]=0;
    for(int i=3;i<=size;i+=2)
		if(prime[i])
	  		p.pb(i);
	while(t--)
	{
		int n,c=0,m=10005,now=0;
		sci(n);
		int a[n+1]={0};
		FL(i,1,n+1)
		{ 
			sci(a[i]);
			if(a[i]<a[i-1]){ c+=a[i-1]-a[i]; a[i]=a[i-1];  }
			//cout<<c<<endl;
		}
		FL(i,0,p.size())
		{
			now=0;
			FL(j,1,n+1)
			{
				now+=((p[i]-(a[j]%p[i]))%p[i]);
				if(now>m) break;
				//cout<<now<<" ";
			}
			if(now<m) m=now;
			//cout<<endl;
		}
		printf("%d\n",m+c);
	}
	return 0;
}