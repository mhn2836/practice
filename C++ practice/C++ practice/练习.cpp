/*

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class person
{
public:
	person(string name,int age)
	{
		this->m_age=age;
		this->m_name=name;
	}

	string m_name;
	int m_age;
};



void swap1(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap2(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


template<typename t>
void swap3(t &a,t &b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}



template<class t>
int compare(t a,t b)
{
	if(a!=b)
	{
		return 0;
	}
	else return 0;
}

template<> int compare(person p1,person p2)
{
	if(p1.m_age==p2.m_age && p1.m_name==p2.m_name)
	{
		return 1;
	}
	else return 0;
}


template<class nametype,class agetype>
class person
{
public:

	person(nametype name,agetype age)
	{
		this->m_age=age;
		this->m_name=name;

	}

	void showinfo()
	{
		cout<<"name:"<<this->m_name<<endl;
		cout<<"age:"<<this->m_age<<endl;
	}
	
	agetype m_age;
	nametype m_name;
};

template<class t1,class t2>
class person
{
public:
	person(t1 name,t2 age);
		
	void showinfo();
	

	t1 m_name;
	t2 m_age;
};
template<class t1,class t2>
person<t1,t2>::person(t1 name,t2 age)
{
	this->m_name=name;
	this->m_age=age;
}

template<class t1,class t2>
void person<t1,t2>::showinfo()
{
		cout<<"name:"<<this->m_name<<endl;
		cout<<"age:"<<this->m_age<<endl;

}

template<class t1,class t2>
void show(person<t1,t2> p)
{
	p.showinfo();
}

void test01()
{
	class person<string,int> p1("zhangsan",23);
	p1.showinfo();

	
}

template<class T>
void show1(T &p1)
{
	
}

void test02()
{
	class person<string,int> p2("lisi",22);
	show1(p2);
}
int main()
{
	//int a=2,b=4;
	//swap1(a,b);

	//swap3(a,b);
	//string a="112312313123";
	//char b[]="12";
	//cout<<sizeof(b)/sizeof(char)<<endl;
	//int a=2;
	
	//int c=3;
	//cout<<compare(a,b)<<endl;
	
	//plus1(c1,c2);
	//test10();
	
	test01();

	
	
	//test1(a,c1);
	//test10();
	

	//std::cout<<a<<std::endl;
	//std::cout<<b<<std::endl;
	system("pause");
	return 0;

}
*/