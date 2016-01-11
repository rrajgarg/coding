	#include<bits/stdc++.h>
	 
	using namespace std;
	 
	#define gc getchar
	#define sci scanint
	#define scli scanlong
	#define FL(i,a,b) for(int i=a;i<b;++i)
	#define M 1000000007
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
	struct cyc
	{
		lli dist;
			lli spee;
			lli prev;
	};
	 
	int main()
	{
		int t=1;
		//sci(t);
		while(t--)
		{
			int n,q;
			sci(n);
			sci(q);
			cyc arr[100005];
			lli maxsp=-5;
			int maxi=0;
			lli max=-5;
			//lli maxspprev=-5;
			//int maxip=0;
			int nilu[100005];
			int k=0;
	 
			FL(i,0,q)
			{
				int m;
				sci(m);
				if(m==1)
				{
					lli ti,cy,sp;
					scli(ti);
					scli(cy);
					scli(sp);
				//	if(ti!=prev[cy])
						arr[cy].dist+=((ti-arr[cy].prev)*arr[cy].spee);
					arr[cy].spee=sp;
					arr[cy].prev=ti;
					
					if(sp>maxsp){ nilu[k++]=cy;maxsp=sp;}
	 			//	nline;
				}
				else
				{
					lli ti;
					scli(ti);
					
					FL(i,maxi,k)
					{
						lli dist=arr[nilu[i]].dist+((ti-arr[nilu[i]].prev)*arr[nilu[i]].spee);
						
						if(dist>=max) {max=dist; maxi=i;}
						//arr[nilu[i]].prev=ti;
					//	cout<<spee[nilu[i]]<<" ";
					}
				//	nline
					printf("%lld\n",max);
				}
			}
		}
		return 0;
	}  