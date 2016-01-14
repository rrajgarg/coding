#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	//scanf("%d",&t);
	while(t--)
	{
		char a[1000+5];
		scanf("%s",a);
		int c[26]={0};
		int l=strlen(a);
		for(int i=0;i<l;++i) c[a[i]-'a']++;
		int f=0;
		for(int i=0;i<26;i++)
			if(c[i]%2) f++;
		if(f<=1) cout<<"First";
		else if(f%2==0) cout<<"Second";
		else cout<<"First";
	}
	return 0;
}
