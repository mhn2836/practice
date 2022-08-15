/*
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define pi 3.14

class dad
{
public:
	int sa,sb;
	
	dad()
	{
		sa=100;
		sb=200;
	}
	void f1()
	{
		cout<<"123"<<endl;
	}
};

class son:public dad
{
public:
	int sa,sb;

	son()
	{
		sa=1;
		sb=2;
	}

	void f1()
	{
		cout<<"456"<<endl;
	}
};

class calculator
{
public:
	int result;
	int m_num1,m_num2;

	calculator(int num1,int num2)
	{
		m_num1=num1;
		m_num2=num2;
	}

	int cal(string oper)
	{
		if(oper == "+")
		{
			return result=m_num1+m_num2;
		}

		else if(oper == "-")
		{
			return result=m_num1-m_num2;
		}
		else return 0;
	}
};

class cal
{
public:
	virtual int result()
	{
		return 0;
	}

	int m_num1,m_num2;
};

class plus_cal:public cal
{
	int result()
	{
		return m_num1+m_num2;;
	}

	//int m_num1,m_num2;
};

class sub_cal:public cal
{
	int result()
	{
		return m_num1-m_num2;
	}

	//int m_num1,m_num2;
};

class drink
{
public:
	void boil()
	{
		cout<<"boil the water"<<endl;
	}

	virtual void soak()=0;

	virtual void pour()=0;

	virtual void addmaterial()=0;

	void makedrink()
	{
		cout<<"the step of make this drink"<<endl;
		boil();
		soak();
		pour();
		addmaterial();
		cout<<endl;
	}
};

class tea:public drink
{
public:
	void soak()
	{
		cout<<"soak tea"<<endl;
	}

	void pour()
	{
		cout<<"pour the water"<<endl;
	}

	void addmaterial()
	{
		cout<<"add tea leaves"<<endl;
	}

};

class coffee:public drink
{
public:
	void soak()
	{
		cout<<"soak coffee"<<endl;
	}

	void pour()
	{
		cout<<"pour the water"<<endl;
	}

	void addmaterial()
	{
		cout<<"add coco powder"<<endl;
	}

};

class cpu
{
public:
	virtual void processing()=0;
};

class gpu
{
public:
	virtual void graph()=0;
};

class memory
{
public:
	virtual void mem()=0;
};

void test01()
{
	class son s;

	s.dad::f1();
	s.f1();
	//cout<<s.dad::sa<<endl;
	//cout<<s.sa<<endl;
}

void test02()
{
	calculator c1(10,20);
	cout<<c1.cal("+")<<endl;
	
}

void test03()
{
	class cal *p1=new plus_cal;
	p1->m_num1=10;
	p1->m_num2=20;
	cout<<p1->result()<<endl;
}

void test04()
{
	class drink *p1=new tea;
	p1->makedrink();

	class drink *p2=new coffee;
	p2->makedrink();
}

void test05()
{
	class coffee c2;
	c2.makedrink();

}

int main()
{
	//test05();
	string a;

	ifstream ifs;
	ifs.open("123.txt",ios::in);
	if(ifs.is_open()==0)
	{
		cout<<"fail"<<endl;
	}
	
	//ifs<<"zahngsan"<<endl;
	//	ifs<<"age:18"<<endl;
	//ifs.close();
	
	//char a[10]={'1','2','3','4','5'};

	while(getline(ifs,a))
	{
		cout<<a<<endl;
	}
	
	

	system("pause");
	return 0;
}
*/