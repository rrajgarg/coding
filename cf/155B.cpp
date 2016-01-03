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

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second > right.second;
    }
};

int main()
{
	int t=1;
	//sci(t);
	while(t--)
	{
		int n;
		sci(n);
		vector<pair<int ,int> > v(n);
		FL(i,0,n)
		{
			int a,b;
			sci(a);
			sci(b);
			v[i]=mk(a,b);
			
		}
		sort(v.begin(),v.end(),sort_pred());
		int c=1;
		int s=0;
		int i=0,f=1;
		while(c&&i<n)
		{
			if(v[i].second==0&&f) { sort(v.begin(),v.end(),greater<pair<int,int> >()); i=0;f=0;}
			s+=v[i].first;
			c+=v[i].second;
			
			v[i].first=0;
			v[i++].second=0;
			c--;
		}
		printf("%d\n",s );
	}
	return 0;
}