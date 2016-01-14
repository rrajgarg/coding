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
		int z,o;
		sci(z);
		sci(o);
		if(z*2+2<o) printf("-1");
		else if(z-o>1) printf("-1");
		else
		{
			if(z>o)
				FL(i,0,z+o)
				{
					if(i&1) printf("1");
					else printf("0");
				}
			else
			{
				int i=0;
				//int j=0;
				while(z+o)
				{
					if(z!=o&&i<2)
					{
						printf("1");
						o--;
						i++;
					}
					else if(z!=o&&i==2)
					{
						printf("0");
						z--;
						i=0;
					}
					else if(z==o)
					{
						int j=i==2?1:0;
						while(z+o)
						{
							if(!(j--&1)){z--; printf("1");}
							else {o--;printf("0");}
						}
					}

				}
			}
		}

	}
	return 0;
}