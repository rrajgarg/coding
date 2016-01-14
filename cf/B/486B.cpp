#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	//scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m][n],b[m][n],c[m][n];
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				a[i][j]=1;
				c[i][j]=0;
				scanf("%d",&b[i][j]);
			}
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				if(b[i][j]==0)
				{
					for(int k=0;k<n;++k) a[i][k]=0;
					for(int k=0;k<m;++k) a[k][j]=0;
				}
			}
		//cout<<endl;
		

		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				if(a[i][j])
				{	
					for(int k=0;k<n;++k) c[i][k]=1;
					for(int k=0;k<m;++k) c[k][j]=1;
				}
			}
		//cout<<endl;
		
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				if(c[i][j]!=b[i][j])
				{	
					cout<<"NO";
					return 0;
				}
			}
		cout<<"YES\n";
		for(int i=0;i<m;++i)
		{
			for(int j=0;j<n;++j)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}