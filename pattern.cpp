#include<iostream>
using namespace std;
int main()
{
	int n,count=0,k=1;
	cin>>n;
	int u=n;
	while(u!=0)
	{
		count++;
		u=u-i;	
	}
	int  sum=count,t=count;
	for(int i=1;i<=(2*count);i++)
	{ int x;
		x=i;
		if(i>count)
		{
		x=count-(i%(count+1));
		k=n-sum;
		sum=sum+(--t);
		}
		for(int j=1;j<=x;j++)
		{
			if(i<=count)
			{	cout<<k;
				if(j!=x)
				cout<<"*";
				k++;
			}
		if(i>count)
				cout<<k+j;
				if(j!=x)
				cout<<"*";
		}
		cout<<endl;
	}
}
