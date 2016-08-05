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
			string n;
			cin>>n;
			int l=n.length();
			FL(i,0,l) 
				if(n[i]=='8'||n[i]=='0')
					{cout<<"YES\n"<<n[i];return 0;}
			int a;
			FL(i,0,l)
			{
				
				FL(j,i+1,l)
				{
					a=10*(n[i]-'0');
					a+=(n[j]-'0');
					//cout<<a<<endl;
					if(a%8==0)
					{
						{cout<<"YES\n"<<a;return 0;}
					}
				}
			}
			FL(i,0,l)
			{
				FL(j,i+1,l)
				{
					FL(k,j+1,l)
					{
						a=100*(n[i]-'0');
						a+=10*(n[j]-'0');
						a+=(n[k]-'0');
					//	cout<<a<<endl;
						if(a%8==0)
						{
							{cout<<"YES\n"<<a;return 0;}
						}
					}
				}
			}
			cout<<"NO";
	}
	return 0;
}