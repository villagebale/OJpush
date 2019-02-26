#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	char b;
	cin>>a>>b;
	int i=0,temp=0;
	while(1)
	{
		if(i*i*2-1<=a)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	i--;
	temp=i*i*2-1;
	//cout<<temp<<" "<<i<<endl;
	int gap=a-temp;
	
	for(int j=i;j>=1;j--)
	{
		int count=0;
		if(i-j>0)
		{
			count=i-j;
		}
		for(int t=0;t<count;t++)
		{
			cout<<" ";
		}
		for(int d=2*j-1;d>0;d--)
		{
			cout<<b;
		}
		cout<<endl;
	}
	for(int j=i-1;j>0;j--)
	{
		for(int t=0;t<j-1;t++)
		{
			cout<<" ";
		}
		for(int t=0;t<2*i-1-2*(j-1);t++)
		{
			cout<<b;
		}
		cout<<endl;
	}
	cout<<gap;
	return 0;
}
