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
		int p,q,l,r;
		sci(p); 
		sci(q);
		sci(l);
		sci(r);
		int a[p],b[p],c[q],d[q];
		FL(i,0,p) sci(a[i]), sci(b[i]);
		FL(i,0,q) sci(c[i]), sci(d[i]);
		int cn=0;
		FL(i,l,r+1)
		{
			FL(j,0,p)
			{
				FL(k,0,q)
				{
					if(!(i+d[k]<a[j]||c[k]+i>b[j]))
					{
						cn++;
						//printf("%d ",c);
						//cout<<c[k]+i<<" "<<d[k]+i<<" "<<a[j]<<" "<<b[j]<<" "<<i<<endl;
						j=k=100;
					}
				}
			}
		}
		printf("%d",cn);
	}
	return 0;
}