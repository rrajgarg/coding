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
bool cmp(pair<int,int> f ,pair<int,int> s)
{
    if(f.first<s.first) return true;
    if(f.first>s.first) return false;
    if(f.first==s.first) return f.second>s.second;
}
int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int v;
        sci(v);
        pair<int,int> a[9];
        int min=10000000;
        FL(i,0,9) {sci(a[i].first),a[i].second=i+1;if(min>a[i].first) min=a[i].first;}
      //  sort(a,a+9,cmp);
        int max=-5;
        if(v<=min) printf("-1");
        else
        {
            int k=0;
            FL(i,0,9) if(v/a[i].first>max) max=v/a[i].first,k=i+1;
            v=v-max*k;
            cout<<k;
            while(max--)
            {
                for(int i=8;i>=0;i--)
                {
                    if(v-a[0].first>0){ printf("%d",a[i].second);v-=a[0].first;break;}
                    else if(v==0){ printf("%d",a[k-1].second);break;}
                }
            }
        }

	}
	return 0;
}