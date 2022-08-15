#include "array.h"

void array(int i,int j)
{
	int score[3][3],sum=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			cin>>score[i][j];
		}
	


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+score[i][j];
			//
		}
		cout<<"学生"<<i+1<<"的成绩为"<<sum<<endl;
		sum=0;
	}
}