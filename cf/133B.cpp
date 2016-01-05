#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define M 1000003
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
	int q=1;
    lli p[500]={1};
    FL(i,1,500)
        p[i]=(p[i-1]%M*2%M)%M;

	//sci(t);
	while(q--)
	{
        char a[105];
        scanf("%s",a);
        int l=strlen(a);
        int le=l*4-1;
        int t=0;
        FL(i,0,l)
        {
            
            if(a[i]=='>')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=3;
               }
            else if(a[i]=='<')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=2;
                t=((t%M)+(p[le--]%M)%M)%M;
               }
            else if(a[i]=='+')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=1;
                t=((t%M)+(p[le--]%M)%M)%M;
                le--;
               }
            else if(a[i]=='-')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                le--;
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                
               }
            else if(a[i]=='.')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=2;
                
               }
            else if(a[i]==',')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=1;
                t=((t%M)+(p[le--]%M)%M)%M;
               }
            else if(a[i]=='[')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                le-=1;
                
               }
            else if(a[i]==']')
              {
                t=((t%M)+(p[le--]%M)%M)%M;
                 t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                t=((t%M)+(p[le--]%M)%M)%M;
                
            }
            

        }
        printf("%d\n",t);
	}
	return 0;
}