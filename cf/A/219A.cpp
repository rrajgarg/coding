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
		string s;
		cin>>s;
		int a[27]={0};
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
			if(a[i]%n)
			{
				cout<<-1;
				return 0;
			}
		for(int k=0;k<n;k++)
		for(int j=0;j<26;j++)
		{
			if(a[j])
				for(int i=0;i<1/((double)n/a[j]);i++)
					printf("%c",j+'a' );
		}
	}
	return 0;
}