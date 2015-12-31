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
	//sci(t);
	while(t--)
	{
		int d,s;
		sci(d);
		sci(s);
		int t1=0,t2=0;
		int a[d],b[d];
		FL(i,0,d)
		{
			sci(a[i]);
			sci(b[i]);
			t1+=a[i];
			t2+=b[i];
		}
		if(t2<s||t1>s) printf("NO\n");
		else
		{
			printf("YES\n");
			FL(i,0,d)
			{	
				if(t1!=s)
				FL(j,a[i],b[i])
				{
					++a[i];
					if((++t1)==s)
						j=100;
				}
				printf("%d ",a[i] );
			}
		}
	}
	return 0;
}