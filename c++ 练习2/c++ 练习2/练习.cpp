/*
#include<iostream>
#include<string>
#include<graphics.h>
#include<vector>
#include<memory>
using namespace std;

int test1()
{
	vector<int> v1;
	vector<int> v2;
	//v1={1,2,3};
	//v2={1,2,3};
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	return v1.size();
	//vector<string> v2{"123"};
}

void func1()
{
	int day=5;
	int m_day=1;
	int result=0;

	int con=1;

	while(day>0)
	{
		result += con;
		if(m_day==con)
		{
			con++;
			m_day=0;
		}
		m_day++;
		day--;
	}
	cout<<result<<endl;
}

void judge(int num)//判断素数
{
	
	if(num==1)
	{
		cout<<num<<" ";
		return;
	}
	

	for(int k=2;k<num;k++)
	{
		if(num%k==0)
		{
			cout<<num<<" ";
			return;
		}
	}
	cout<<"("<<num<<")"<<" ";
}

//打印乘法表，素数加括号
void func2()
{
	int i=0,j=0;
	//int num=i*j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<"*"<<j<<" = ";
			judge(i*j);
			cout<<" ";
		}
		cout<<endl;
	}
}

//平均数
void func3()
{
	int n;

	int *p1=new int[10000];
	double avg=0;
	cin>>n;


	for(int i=0;i<n;i++)
	{
		cin>>*(p1 + i);
		avg +=*(p1 + i);
	}

	
	cout<<avg/n<<endl;
	delete p1;
}
//因式分解
void func4()
{
	int num;
	int i=2;
	int j=0;

	cin>>num;
	int a[100];
	
	while(num!=i)
	{
		if(num%i==0)
		{
			num=num/i;
			a[j]=i;	
			j++;
		}
		i++;
	}

	cout<<a[0];
	for(int k=1;k<=j;k++)
	{
		cout<<"*"<<a[k];
	}
}


void func5()
{
	
	int n;
	cin>>n;
	
	int num=n;int sum=0;
	int w;
	sum+=num;//sum=5

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			w=n*10;
		}
		num += w;
		sum += num;
	}

	cout<<num<<endl;
}


void func6()
{
	double sum=0;
	double num=0.01;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		
		sum += num;num=num*2;
	}

	cout<<sum;
}

void test2()
{
	int a=1;
	static int b=2;
	int c=10;
	int *p=new int(c);
	
}

void f1()
{
	int a=-5;int b=0;
	if(a)
	{
		throw exception();
	}
}

void f2()
{
	//auto_ptr<int> p1(new int(10));
	shared_ptr<int> p1(new int(10));
}

class testptr
{
public:
	testptr(const string s) : str(s) 
	{
		cout<<"created"<<endl;
	}

	~testptr()
	{
		cout<<"deleted"<<endl;
	}

	void showinfo() const
	{
		cout<<str<<endl;
	}
private:
	string str;
};

typedef struct p
{
	int a1;
	char b2;
}p1;


void t3(void *a)
{
	int *b=(int *)a;
	cout<<*b<<endl;
}

void t4(int &a)
{
	//cout<<*a;
}



class c1
{
public:
	c1(int a,int b)
	{
		this->x=a;
		this->y=b;
	}
private:
	int x;
	int y;
};

class base
{
public:
	int pub;
	base()
	{
		cout<<"base constructor"<<endl;
	}

	~base()
	{
		cout<<"base destructor"<<endl;

	}
	void setA(int a){this->x=a;
	}


	int getA(){return x;}
private:
	int x;
	
};

class son:public base
{
public:
	son()
	{
		cout<<"son constructor"<<endl;
	}

	~son()
	{
		cout<<"son destructor"<<endl;

	}

	void setB(int a){this->y=a;
	}

	int getB(){return y;
	}
private:
	int y;
};

void t6()
{
	base ba1,*pa;
	son so1,*pb;

	ba1.setA(3);
	so1.setB(10);
	//cout<<ba1.getA()<<endl;
	//cout<<so1.getB()<<endl;

	ba1=so1;
	//cout<<ba1.getA()<<endl;
	//cout<<so1.getB()<<endl;

	ba1.setA(100);
	//cout<<ba1.getA()<<endl;
	//cout<<so1.getB()<<endl;

	pa=&so1;
	cout<<pa->getA()<<endl;
	cout<<so1.getB()<<endl;

	pa->setA(20);
	cout<<pa->getA()<<endl;
	cout<<so1.getB()<<endl;
}

void t7()
{
	base a1;
	
	a1.pub=10;son b1;
	cout<<a1.pub<<endl;
	cout<<b1.pub<<endl;



	//son b1;


}

int t8()
{
	int i=0;
	i++;
	return i;
}

class time1
{
public:
	time1(int h=0,int m=0,int s=0):hh(h),mm(m),ss(s)
	{

	}

	//time1 operator()(int h,int m,int s)
	//{
		//time1 t1;
		//t1.hh=h;t1.mm=m;t1.ss=s;
		//return t1;
	//}

	void operator()(int h,int m,int s)
	{
		//this->hh=h;this->mm=m;this->ss=s;
		hh=h;mm=m;ss=s;
	}

	time1 operator=(const time1 &t1)
	{

	}

	

	void showtime()
	{
		cout<<"time is "<<hh<<":"<<mm<<":"<<ss<<endl;
	}

private:
	int hh,mm,ss;
};

void tf1()
{
	time1 t1(19,48,27);
	t1.showtime();

	t1.operator()(20,01,32);
	t1.showtime();

	t1(20,30,01);
	t1.showtime();
}

class XX
{
private:
	int m_a,m_b;
public:
	XX()
	{
		this->m_a=0;
		this->m_b=0;
	}
	
	XX(int a,int b)
	{
		this->m_a=a;
		this->m_b=b;
	}

	XX operator()(int a,int b,int c)
	{
		XX x1;
		x1.m_a=a+c;
		x1.m_b=b+c;
		return x1;
	}

	void showinfo()
	{
		cout<<"a = "<<this->m_a<<endl;cout<<"b = "<<this->m_b<<endl;
	}
};


void tf2()
{
	XX x1(1,2);
	x1.showinfo();

	x1(1,2,3);
	x1.showinfo();
	
}


int main()
{
	//cout<<test1();
	//vector<int> v2{1,2,3,4,5};
	//int day;
	//cin>>day;
	
	//test2();
	//cout<<b;
	//cout<<p<<endl;
	
	//cout<<"end";

	//f1();
	{
		//shared_ptr<testptr> p1(new testptr("shared ptr is created."));
		//p1->showinfo();
	}
	
	//t7();

	//p1 p2;
	//struct p1 p3;
	//int a=1;
	//int *b=&a;
	//t3(b);
	//cout<<&b<<endl;
	//cout<<&a<<endl;
	//cout<<b<<endl;
	//t4(&b);

	//t4(a);

	//cout<<t8();

	tf2();


	system("pause");
	return 0;
}

*/