/*
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>

using namespace std;

#include "diyArray.hpp"



class student
{
public:
	void s()
	{
		cout<<endl;
	}

	int a1;
	int a2;
};

void test1()
{

}

float convert(float tempFer)
{
	float c;
	float temp;
	temp=(tempFer-32)*5;
	return c=temp/9;
}

void print(int val)
{
	cout<<val<<endl;
}

unsigned int f1(unsigned int n)
{
	unsigned int result;
	if(n==0)
	{
		result=1;
	}
	else result =f1(n-1)*n;
	return result;
}

int f2(int n,int k)
{
	int result;
	//int arr;
	if(k>n)
	{
		//arr=1;
		return 0;
	}
	else if(n==0 || k==0)
	{
		return 1;
	}
	//arr=(f2(n-1,k)*n)/k;
	else result=f2(n-1,k)+f2(n-1,k-1);
	

	return result;
}

class test
{
public:
	test(int a,int b)
	{
		x=a;y=b;
	}

	int operator +(int c);

private:
	int x;
	int y;
};

int test::operator+(int c)
{
	return x+y;
}

int main()
{

	 //const int a=10;
	
	//cout<<"c="<<convert(f)<<endl;
	
	//vector<int> v;
	
	
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();


	while(itBegin!=itEnd)
	{
		cout<<*itBegin<<endl;
		itBegin++;
		
	}

	
	//for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	//{
		//cout<<*it<<endl;
	//}
	


	//for_each(v.begin(),v.end(),print);

	system("pause");
	return 0;
}
*/