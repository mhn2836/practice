/*
#include <iostream>
using namespace std;

int main()
{
	int a[100],num,temp=0,i,j,k;
	cout<<"请输入序列数："<<endl;
	cin>>num;
	cout<<"请输入数组："<<endl;
	for(i=0;i<num;i++)
	{
	cin>>a[i];
	}

	for(j=num;j>1;j--)
	{
		for(k=0;k<j-1;k++)
	{
		if(a[k]>a[k+1])
		{
		temp=a[k];a[k]=a[k+1];a[k+1]=temp;
		}
		else continue;			
	}
	}
	
	cout<<"排序后的数组为"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
	//cout<<i*j<<endl;

	//cout<<a<<b<<c<<endl;	

	system("pause");
	return 0;
}
*/