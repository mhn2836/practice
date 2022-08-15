/*
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<graphics.h>
#include<vector>
#include<stack>
#include<memory>
#include<algorithm>
#include<unordered_map>
using namespace std;

const int queueSize = 100;
const int maxsize=100;
int visited[maxsize]={0};

class treenode
{
public:
	treenode():val(0),left(nullptr),right(nullptr){};
	treenode(int x):val(x),left(nullptr),right(nullptr){};
	treenode(int x,treenode *l,treenode *r):val(x),left(l),right(r){};

private:
	int val;
	treenode *left;
	treenode *right;
};


void DFS(treenode node,int x)
{

}

void BFS(treenode node,int x)
{
}

class test
{
public:
	test(){cout<<1;}
	~test(){cout<<2;}
};

void f1()
{
	test t1;
	test t2;
}

template<class t>
class complex1
{
public:
	complex1(t real=0,t image=0):re(real),im(image)
	{}

	complex1 operator +(const complex1& c2)
	{
		return complex1(this->re+c2.re,this->im+c2.im);
	}

	complex1 operator +=(const complex1& c2)
	{
		return complex1(this->re+c2.re,this->im+c2.im);
	}

	complex1 operator -(const complex1& c2)
	{
		return complex1(this->re-c2.re,this->im-c2.im);
	}

	complex1 operator /(const complex1& c2)
	{}

	complex1 operator *(const complex1& c2)
	{}

	void showinfo()
	{
		cout<<"re = "<<this->re<<" ,"<<"im = "<<this->im<<endl;
	}
private:
	t re;
	t im;
	};

void f2()
{
	complex1<double> c1(1.1,2.2);
	complex1<double> c2(3.3,4.4);
	complex1<double> c3;
	c3+=c1;
	//c3=c3+c1;
	c3.showinfo();

}

template<class t>
class shared_ptr
{
public:
	shared_ptr(t* p):pt(p){}
	
	t& operator *() const
	{return *pt;}

	t& operator ->() const 
	{return pt;}

private:
	t* pt;
	long* pn;
};


struct foo
{
	void method(){cout<<"shared_ptr<foo> method()"<<endl;}
};

void f3()
{
	//shared_ptr<foo> p1;
}

int fibo(int n)
{
	//if(n=0) return 1;
	if(n<=2) return 1;

	return fibo(n-1)+fibo(n-2);
}

template<class t>
class queue
{
public:
	t data[queueSize];
	int front,rear;
};

template<class t>
class Mgraph
{
public:
	Mgraph(t a[],int n,int e):vertexNum(n),arcNum(e){
		//for(int i=0;i<vertexNum;i++){			}
		for(int i=0;i<vertexNum;i++){
			vertex[i]=a[i];
			for(int j=0;j<vertexNum;j++){
				arc[i][j]=0;
			}
		}
		
		for(int i=0;i<arcNum;i++){
			int a,b;
			cin>>a>>b;
			arc[a][b]=1;
			arc[b][a]=1;
		}
	}

	~Mgraph(){}

	void DFS(int v){
		cout<<vertex[v]<<' ';
		visited[v]=1;
		for(int i=0;i<vertexNum;i++)
		{
			if(arc[v][i] == 1 && visited[i]==0)
				DFS(i);
		}

	}
private:
	t vertex[maxsize];//顶点数组
	int arc[maxsize][maxsize];//邻接矩阵
	int vertexNum,arcNum;//顶点数和邻接边数
};

void f4()
{
	int a[]={1,2,3,4,5,6};
	Mgraph<int> m1(a,6,9);
	m1.DFS(1);
	cout<<endl;
}

void Ytri()
{
	vector<vector<int>> v1;
	for(int i=0;i<5;i++)
	{
		vector<int> temp;
		v1.push_back(temp);
	}
	
	v1[0].push_back(1);
	for(int i=1;i<5;i++)
	{
		v1[i].push_back(1);
		for(int j=0;j<i-1;j++)
		{
			v1[i].push_back(v1[i-1][j]+v1[i-1][j+1]);
		}
		v1[i].push_back(1);
	}
}

class dad{
public:
	private:

};

class son:dad
{public:
	private:};



void f5()
{
	int v1[13]={1,2,-8,-7,3,4,5,-3,-2,-1,-4,-5,-6};
	int goldcoins=0;int mark=0;
	sort(v1,v1+13);

	for(int i=12;i>0;i--)
	{
		if(mark+v1[i]<0){break;}
		goldcoins+=mark;
		mark+=v1[i];
	}

	cout<<goldcoins;
}

void error1(int x)
{
	try {cout<<"safe."<<endl;}
	catch(int i){cout<<i;}

}

void f6()
{
	unordered_map<int ,int> count;
	int n=123131113;
	int key=1;
	//count.insert({ key,n });
	//count.emplace(2,4564545);
	//count.emplace(3,67866699);

	//cout<<count[1]<<endl;
	//cout<<count[2]<<endl;
	//cout<<count[2]<<endl;
}

struct test1
{
	char a;
	char *b;
	short c;
};

typedef struct node{
    int val; 
    struct node *p_next; 
} node; 

bool ugly(int n)
{
	if(n == 1) return false;

        while(n!= 1){
            if(!n%2) {n = n/2;}
            if(!n%3) {n = n/3;}
            if(!n%5) {n = n/5;}
            if(n%2 && n%3 && n%5) return false;
        }
        
    return true;
}



void f7(string s,int a){
	
}


void f8()
{
	int a[3] = {0,1,2};
	int *p = a;

	cout<<p<<endl;
	cout<<& a[0]<<endl;
	cout<<& a[1]<<endl;
}

void f9(){
	float a1 = 1.1 / 1.5;
	float a2 = 1.6 / 1.5;

	cout<<(int)a1<<' '<<(int)a2<<endl;

	int a[4] = {1,2,3,4};
	int b = 0;
	f8();
}

class testa{
private:
	int* p;

public:
	testa(const int* a){
		p = new int(9);
		cout<<"testa is "<<*p<<endl;
	}

	testa(const testa &t){
			p = new int(9);
			cout<<"testa is "<<*p<<endl;
	}

	~testa(){
		cout<<"~testa is "<<*p<<endl;
		delete p;
		p = nullptr;
	}

};

void f10(){
	int a = 1;int* p = &a;
	testa t1(p);
	testa t2(t1);

}

class testbase{
public:
	void print(){
		cout<<"testbase"<<endl;
	}

	virtual void vprint(){
		cout<<"testbase print"<<endl;
	}

	virtual ~testbase(){
		cout<<"testbase delete"<<endl;
	}
};

class testson:public testbase{
public:
	void print(){
		cout<<"testson"<<endl;
	}
	
	void vprint(){
		cout<<"testson print"<<endl;
	}

	~testson(){
		cout<<"testson delete"<<endl;
	}
};


void f11(){
	testson t1;
	//t1.print();
	//testbase t2 = t1;
	testbase t3;
	//t2.print();	
	//t2.vprint();


}

int main()
{
	//f6();
	//complex1<double> *c1(1.1,2.2);
	//error1(1);
	//struct test1 t1;
	//cout<<sizeof(t1);
	
	//node *t1=new node;node *t2=t1;node *t3=new node;t3->val = 2;node *t4=new node;t4->val = 3;
	//t1->val=1;cout<<t1->val<<' '<<t2->val<<endl;
	//t2 ->p_next = t3;cout<<t1->p_next->val<<' '<<t2->p_next->val<<endl;
	//t3 ->p_next = t4;cout<<t1->p_next->p_next->val<<' '<<t2->p_next->p_next->val<<endl;
	//t2->p_next = t3;cout<<t1->p_next->val<<' '<<t2->p_next->val<<endl;
	//t2 = t2 ->p_next;cout<<t1->p_next->val<<' '<<t2->val<<endl;
	//t2->p_next = t3;
	//t1->val = 1;
	//t2->p_next = t3;t3 = t2;cout<<t1->val<<' '<<t2->val<<' '<<t2->p_next->val<<endl; 


	//cout<<t1->p_next<<endl;cout<<t2<<endl;
	//t2=t3;cout<<t1<<endl;cout<<t2<<endl;
	//int a=1;int* p1=&a;int* p2=p1;cout<<p1<<endl;cout<<p2<<endl;

	//t2=t1;
	//string s1="string";for(auto ch : s1){cout<<ch<<' ';}
	
	

	//delete t1;delete t2;delete t3;delete t4;
	//int *first,*second;first = new int[5];second = first;
	//delete[] second;delete[] first;
	//int a=(1,067);int b;b=1,067;cout<<a;
	//cout<<ugly(2);
	f11();

	


	system("pause");
	return 0;
}
*/