#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;string a;
	cin>>k>>a;
	int l=a.length();
	if(k>l) cout<<"NO";
	else
	{
		int c=1;
		
		vector<string> v;
		int b[26]={0},pos=0;
		for(int i=0;i<l;i++)
			{
				if(i==0)
					b[a[i]-'a']++;
				if(b[a[i]-'a']==0&&c<k)
				{
					//cout<<pos<<" "<<c<<"   ";
					v.push_back(a.substr(pos,i-pos));
					c++;
					pos=i;
					b[a[i]-'a']++;
				}
				else if(c==k){
					//cout<<"<<c<<"   ;
					v.push_back(a.substr(pos,l-pos));c++;break;
				}
			}
		if(c==k)
		v.push_back(a.substr(pos,l-pos));
		if(c<k) cout<<"NO";
		else{
			cout<<"YES\n";
			for(int i=0;i<k;i++)
			cout<<v[i]<<"\n";
		}
	}
}