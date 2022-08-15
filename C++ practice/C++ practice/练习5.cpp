
/*
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<graphics.h>

using namespace std;

void test1()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int score[10];
	for(int i=0;i<5;i++)
	{
	cin>>score[i];
	cout<<score[i]<<endl;
	}


	//fclose(stdin);
	//fclose(stdout);
}

//句子首字母转大写
void func1()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	string s1;
	getline(cin,s1);

	s1[0]-=32;

	
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==' ' && s1[i+1]-'a'>=0)
		{
			s1[i+1] -=32;
		}
	}
	cout<<s1<<endl;
}

//求最大公约数
int func2(int a,int b)
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);

	int num=0;
	int max,min;

	if(a>=b)
	{
		max=a;min=b;
	}
	else {max=b;min=a;}
	
	while(max%min!=0)
	{
		num=max%min;
		max=min;
		min=num;
	}
	
	return num;

}

//**  整数翻转
void func3()
{
	int n;
	int result=0;


	cin>>n;
	while(n>0)
	{
		result=result*10+n%10;
		n=n/10;
	}

	cout<<"result="<<result;
}

//翻转字符串1
void func4()
{
	string s1;
	
	//string temp;
	getline(cin,s1);

	string s2(s1.begin(),s1.end());

	//cout<<s2<<endl;

	for(int i=0;i<s1.size();i++)
	{
		s2[i]=s1[s1.size()-i-1];
		s2[s1.size()-i-1]=s1[i];
	}

	cout<<s2<<endl;


}
//翻转字符串2
void func5()
{
	string s1;
	getline(cin,s1);

	string s2(s1.rbegin(),s1.rend());

	cout<<s2<<endl;
}


int fib(int n)
{
	
	int result; 
	if(n==1)
	{
		return 2;
	}
	if(n==2)
	{
		return 3;
	}
	result=fib(n-1)+fib(n-2);
	return result;
}
void func6()
{
	int n;
	cin>>n;

	cout<<"result ="<<fib(n);
}

//猴子吃桃 16
int func7(int n)
{
	int num;

	if(n==1)
	{
		return 1;
	}

	if(n==2)
	{
		return 4;
	}

	if(n==3)
	{
		return 10;
	}

	num=(func7(n-1)+1)*2;
	return num;
}

//计算个人所得税（非递归）
int func8(double count)
{
	double result=0;

	if(count>=83500)
	{
		
		result +=(count-83500)*0.45;count=83500;
	}
	
	if(count>=58500 && count<=83500)
	{
		
		result +=(count-58500)*0.35;count=58500;
	}
	
	if(count>=38500 && count<=58500)
	{
		
		result +=(count-38500)*0.3;count=38500;
	}

	if(count>=12500 && count<=38500)
	{
		
		result +=(count-12500)*0.25;count=12500;
	}

	if(count>=8000 && count<=12500)
	{
		
		result +=(count-8000)*0.2;count=8000;
	}

	if(count>=5000 && count<=8000)
	{
		
		result +=(count-5000)*0.1;count=5000;
	}

	if(count>=3500 && count<=5000)
	{
		
		result += (count-3500)*0.03;count=3500;
	}

	if(count<=3500)
	{
		return result;
	}
	

	//result=func8(count);

	//return result;
}


//
void func9()
{
}
int main()
{
	
	//vector<int> v1;
	
	func9();

	system("pause");
	return 0;
}
*/