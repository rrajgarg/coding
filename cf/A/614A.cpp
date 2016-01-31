#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(long long int i=a;i<b;++i)
#define MOD 1000000007
#define lli long long int
#define pb push_back
#define nline printf("\n")

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
lli power(lli x, lli y)
{
    lli temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main()
{
	lli l,r,k;
	scli(l);
	scli(r);
	scli(k);
	int c=0;
	if(l==1) printf("1 "),c++;
	lli a=l;
	FL(i,1,64)
		{	

			lli p=(lli)power(k,i);
		//	cout<<p<<" "<<i<<endl;
			if(p<=a) break;
			a=p;
			if(p>=l&&p<=r) printf("%lld ",p),c++;
		}	
	if(!c) printf("-1");
	
}