/*

#include<iostream>
using namespace std;

const int splitTime_min=500;
const int splitTime_max=2000;



class cell
{
public:
	cell(int birth);
	int getid() const;
	int getSplitTime() const ;
	bool operator <(const cell &s)const;
	void split();

private:
	static int count;
	int id;
	int time;

};

priority_queue<cell> cellQueue;

int cell::count=0;

cell::cell(int birth):id(count++)
{
	time=birth + (rand()%(splitTime_max-splitTime_min))+splitTime_min;
}

int cell::getid() const
{
	return id;
}

int cell::getSplitTime() const
{
	return time;
}

bool cell::operator<(const cell &s)const
{
	return time>s.time;
}

void cell::split()
{
	cell child1(time);
	cell child2(time);
	cout<<time<<"s cell#"<<id<<"split to #"<<child1.getid()<<" and #"<<child2.getid()<<endl;
	cellQueue.push(child1);
	cellQueue.push(child2);
}

typedef struct example
{
	string name;
	int age;
}e;

int fi(int n)
{
	int result;
	if(n<1)
	{
		return 0;
	}
	else if(n==1 || n==2)
	{
		return 1;
	}
	else result=fi(n-1)+fi(n-2);
	return result;
}

void iterFi()
{
	int a[100];
	a[0]=0;
	a[1]=1;
	a[2]=1;

	for(int i=3;i<10;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}

	for(int i=1;i<10;i++)
	{
		cout<<a[i]<<endl;
	}

}


int main()
{
	
	
	srand(static_cast <unsigned>(time(0)));
	int t;
	cout<<"please print simulation time:";
	cin>>t;

	cellQueue.push(cell(0));
	while(cellQueue.top().getSplitTime()<=t)
	{
		cellQueue.top().split();
		cellQueue.pop();
	}
	
	//int month=2;
	//iterFi();
	
	string s1="123";
	//cout<<"123"<<endl;
	system("pause");
	return 0;
}

*/