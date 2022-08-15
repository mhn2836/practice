/*

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void exchange(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}

void test1()
{
	string s1("1234");
	cout<<s1<<endl;

	string s2;
	s2.assign("hello");
	cout<<s2<<endl;
	
}

void test2()
{
	string s1="123";
	string s2="456";
	//cout<<s1+s2<<endl;

	string s3;
	s3.append(s1);
	cout<<s3.find("56");
	//cout<<s3<<endl;
}

class student
{
public:
	student(int age,string name)
	{
		this->mage=age;
		this->mname=name;
	}
private:
	int mage;
	string mname;
};


//素数
void func1()
{
	int num;
	cout<<"输入一个数:";
	cin>>num;
	
	if(num>3 && num<1000)
	{
		for(int i=2;i<num;i++)
		{
			if(num % i==0)
			{
				cout<<"非质数"<<endl;
				break;
			}
		
			if(i==num-1)
			{
				cout<<"质数"<<endl;
			}
		}
		
	}
	else cout<<"error"<<endl;
}

//字符串查找数字
int func2()
{
	char c1[1000];
	int count=0;
	cin>>c1;

	for(int i=0;i<sizeof(c1)/sizeof(char);i++)
	{
		if(c1[i]-'0'>=0 && c1[i]-'0'<10)
		{count++;}
	}
	return count;
}

//统计去除最高最低分的平均分
void func3()
{
	int n;
	double result[100];
	double avg=0;
	double max=0,min=0;
	cout<<"please print coach num:";
	cin>>n;

	cout<<"coach result"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>result[i];


		max=result[0];min=max;

		if(max<=result[i])
		{
			max=result[i];
		}

		if(min>=result[i])
		{
			min=result[i];
		}
	
		avg+=result[i];
	}


	
	avg=(avg-max-min)/(n-2);
	cout<<"avg= "<<avg;
}

int main()
{
	//test2();

	//func2();
	//func3();

	system("pause");
	return 0;
}
*/