/*
#include <iostream>
#include <string>
using namespace std;

//#include "array.h"

//void array(int i,int j);

struct student
{
	string name;
	int score;
};


struct teacher
{
	string name;
	struct student s[5];

};



void info(struct teacher t[],int num)
{
	string arr="ABCDE";
	int score[5]={60,70,80,90,100};

	for(int i=0;i<num;i++)
	{
		t[i].name="Teacher_";
		t[i].name=t[i].name+arr[i];
		
		for(int j=0;j<5;j++)
	{
		t[i].s[j].name="Student_";
		t[i].s[j].name=t[i].s[j].name+arr[j];
		t[i].s[j].score=score[j];

	}

	}

	
}

void print(struct teacher *p)
{
	for(int i=0;i<3;i++)
		{
			cout<<"老师姓名："<<t[i].name<<endl;
			for(int j=0;j<5;j++)
			{
				cout<<"学生姓名: "<<t[i].s[j].name<<' '<<"成绩为："<<t[i].s[j].score<<endl;

			}
			cout<<endl;

		}
}
*/

/*
struct hero
{
	string name;
	int age;
	char sex;
};


void sort(struct hero h[5],int num)
{
	struct hero temp;
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(h[j].age>h[j+1].age)
			{
				temp=h[j];h[j]=h[j+1];h[j+1]=temp;
			}
			
		}
	}

	

}


int main()
{
	int num=5;
	//int score[5]={60,70,80,90,100};
	//1、创建老师数组
	//cout<<"输入老师数量"<<endl;
	//cin>>num;
	struct hero h[5]={{"刘备",35,'m'},{"张飞",31,'m'},{"关羽",33,'m'},{"赵云",27,'m'},{"貂蝉",20,'f'}};
	sort(h,num);

	for(int i=0;i<5;i++)
	{
		cout<<h[i].name<<' '<<h[i].age<<' '<<h[i].sex<<endl;
	}
	


	//2、创建填充老师和其中的学生信息的函数
	

	//int *p=a;



	/*
	struct student
	{
		
		int score;
		struct info
		{
			string name;
			int age;

		}num1,num2;
	};
	*/

	//struct student s1={90,{"zhangsan",18}};
	
	//struct student *p=s;

	
	//cout<<p->name<<endl<<s[0].age<<endl<<s[0].score<<endl;
	//cout<<s[1].name<<endl<<s[1].age<<endl<<s[1].score;
	//*p2=30;
	//p=&b;
	//cout<<a<<endl;

	

	
	/*
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
	

	system("pause");
	return 0;
}

*/

