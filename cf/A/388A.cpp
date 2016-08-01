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
		int k;
		sci(k);
		int a[n];
		FL(i,0,n)
			sci(a[i]);
		int p=0;
		int sum=0;
		int min=INT_MAX;
		FL(i,0,k)
		{
			sum+=a[i];
		}
		int o=p+1;
		if(min>sum) min=sum;
		FL(i,k,n)
		{
			sum+=a[i];
			sum-=a[p++];
			if(min>sum){ min=sum; o=p+1;}
		}
		cout<<o;

	}
	return 0;
}