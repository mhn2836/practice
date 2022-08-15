/*
#include <iostream>
#include <string>
using namespace std;
const double pi=3.14;

void arr_sum()
{
	int sum=0;
	int n=0;
	for(int i=0;i<50;i++)
	{
		sum=sum+2*n+1;
		n++;
	}
	cout<<"sum="<<sum<<endl;
}

class point
{
public:
	int x;
	int y;	
	int x1,y1;

	void get_dc()
	{
		cout<<"print default coordinate"<<endl;
		cin>>x;
		cin>>y;

	}

	void get_c()
	{
		cout<<"print input coordinate"<<endl;
		cin>>x1;
		cin>>y1;

	}

	void d_coordinate()
	{
		cout<<"default coordinate = "<<"("<<x<<','<<y<<")"<<endl<<endl;
	}

	
	void coordinate()
	{
		cout<<"input coordinate = "<<"("<<x1<<','<<y1<<")"<<endl<<endl;
	}
}p1;

class circle
{
public:
	int r;
	int d;

	void get_r()
	{
		cout<<"r=";
		cin>>r;
	}
	int get_d()
	{
		return d=(p1.x - p1.x1)*(p1.x - p1.x1)+(p1.y - p1.y1)*(p1.y - p1.y1);
	}
	void judge()
	{
		if(r*r<get_d())
		{
			cout<<"The point is out of the circle"<<endl;
		}
		else if(r*r==get_d())
		{
			cout<<"The point is on the circle"<<endl;
		}

		else cout<<"The point is in the circle"<<endl;
	}

}c1;

class person
{
public:
	string pname;
	int age;

private:
	int height;
	person()
	{
		height=180;
	}

	//static int pnum;
};

//int person::pnum=1;
class phone
{
public:
	string pname;

	phone()
	{
		cout<<"构造函数"<<endl;
	}
	
	phone(string name)
	{
		cout<<"构造函数"<<endl;
		pname=name;
	}



};

class student
{
public:
	int s_age;
	string s_name;
	class phone p1;


	student(int age,string sname,string pname)
	{
		s_age=age;
		p1.pname=pname;
		s_name=sname;
		
		//cout<<"age= "<<s_age<<endl;
	}



	~student()
	{
		cout<<"析构函数"<<endl;
	}



};

class building
{
	friend class goodguy;
public:
	string sittingroom;
	building();
private:
	string bedroom;
	void show();

};

building::building()
{
	sittingroom="客厅";
	bedroom="卧室";
}

void building::show()
{
	
}

class goodguy
{
public:
	building b1;
	goodguy()
	{
		cout<<"访问:"<<b1.sittingroom<<endl;
		cout<<"访问:"<<b1.bedroom<<endl;
	}
};

class test
{
public:
	test()
	{
		cout<<"c++ test"<<endl;
	}
	
};

class show:public test
{
public:
	show()
	{
		cout<<"123"<<endl;
	}
};

void add(int *p1,int *p2)
{
	int c;
	c=*p1+*p2;
	cout<<c<<endl;
}

void test01()
{
	class student s1(18,"zhangsan","huawei");
	cout<<s1.s_age<<"的"<<s1.s_name<<"拿着"<<s1.p1.pname<<"的手机"<<endl;

	//s1.p1.pname
	

}

void test02()
{
	//class goodguy g1;
	//cout<<b1.sittingroom;
	class show s1;
	
}

int main()
{
	//class point p1;
	//class person p1;
	//int a=1,b=2;
	//add(&a,&b);
	
	//class person p1;
	//p1.page=18;p1.pname="zhangsan";

	test02();

	//class person *p=&p1;
	//cout<<p->pname<<' '<<p->page<<endl;


	//class student s1(18);

	
	p1.get_dc();
	p1.d_coordinate();
	c1.get_r();

	cout<<"It is a circle located in "<<"("<<p1.x<<','<<p1.y<<")"<<" with r="<<c1.r<<endl<<endl;

	p1.get_c();
	p1.coordinate();
	c1.judge();
	//cout<<"b"<<b<<endl;
	
	system("pause");
	return 0;
}
*/