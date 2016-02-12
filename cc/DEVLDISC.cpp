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
	sci(t);
	while(t--)
	{
		int n;
		sci(n);
		if(n<=6) printf("-1\n");
		else
		{
			printf("%d\n",n);
			if(n&1)
			{
				FL(i,1,n)
					printf("%d %d\n",i,i+1);
				printf("1 %d\n",n-1);
			}
			else
			{
				FL(i,1,n-1)
					printf("%d %d\n",i,i+1);
				printf("1 %d\n2 %d\n",n-2,n);
			}
			printf("1\n");
		}
	}
	return 0;
}