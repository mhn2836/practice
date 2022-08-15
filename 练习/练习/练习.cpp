#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	char a[3]={30,31,128},b[3];
	for(int i=0;i<3;i++)
	{
		b[i]=a[i];
		cout<<b[i]<<endl;
	}
	

	

	system("pause");
	return 0;

}