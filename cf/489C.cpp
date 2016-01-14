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
		int m,s;
        sci(m);
        sci(s);
        if(m==1 && s==0 ) printf("0 0");

        else if(!s|| m*9<s) printf("-1 -1");
        else
        {
            int a[m]={1};
            int sum=1;
            int i=m-1;

            while(sum<s&&i>=0)
            {
                int n=9;
                while(n)
                {
                    if(n+sum<=s) {
                        a[i]+=n;
                        i--;
                        sum+=n;
                        break;
                    }
                    n--;

                }
                
            }
            if(s==sum)
                    FL(i,0,m) cout<<a[i];
                cout<<" ";
            memset(a,0,sizeof(a));
            a[0]=0;
            sum=0;
            i=0;
            while(sum<s&&i>=0)
            {
                int n=9;
                while(n)
                {
                    if(n+sum<=s) {
                        a[i]+=n;
                        i++;
                        sum+=n;
                        break;
                    }
                    n--;

                }
                
            }
            if(s==sum)
                    FL(i,0,m) cout<<a[i];
        }
	}
	return 0;
}