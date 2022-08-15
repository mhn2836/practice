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

class testbase{
public:
	testbase(){
		cout<<"testbase construct"<<endl;
	}

	testbase(const testbase& t1){
		cout<<"testbase copy construct"<<endl;
		//*this = t1;
	}

	testbase& operator =(testbase& t1){
		cout<<"testbase == construct"<<endl;
		return t1;
	}

	void print(){
		cout<<"testbase"<<endl;
	}

	virtual void vprint(){
		cout<<"testbase print"<<endl;
	}

	~testbase(){
		cout<<"testbase delete"<<endl;
	}
};

class testson:public testbase{
public:
	testson(){
		cout<<"testson construct"<<endl;
	}

	testson& operator =(testson& t1){cout<<"testson == construct"<<endl;return *this;}

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
	//testson t;
	//testson *t1 = &t;
	//testbase b1;
	//t1.print();
	//testbase *t2 = t1;
	//testbase t3 = t1;

	//t2->print();	
	//t2->vprint();

	//t3.print();	
	//t3.vprint();
}

struct testm{
	char c1;
	
	short s2;
	double b1;
};

struct tests{
	char c1;
	struct testm t2;
	short s2;
	char c23;
	
	
	//double b;
	int a;

	
	
	//long long c2;
};

union testu{
	char c1;
	
	short s2;
	char c23;
	char c21;
	char c22;
	char c24;
	//double b;
	int a;
	
	//long long c2;
	
};


void f1(char p[24]){
	cout<<sizeof(p);
}

void printa(int a[],int i){
	//if(i < 3) throw 0;
	
	if(i >= 3) throw std::exception();
	cout<<a[i]<<endl;

	//return a[i];
}

void f2(){
	int a[3] ={1,2,3};

	try{
		for(int i = 0;i <= 3;i++){
			printa(a, i);
		}
	}
	catch(int e){
		if(e == 0) cout<<"index valid."<<endl;
		if(e == 1) cout<<"index overflow."<<endl;
	}

}

int main(){
	f2();

	//tests t1;
	//cout<<sizeof(t1);
	//char c1[] = "abcaadadasdsadsadasdasd"; 
	//cout<<sizeof(c1);
	//testu u1;
	//cout<<sizeof(u1);

	//f1(c1);

	system("pause");
	return 0;
}