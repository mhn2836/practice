/*
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<graphics.h>
#include<vector>
#include<stack>
#include<memory>
using namespace std;

class example
{
public:
	int operator[](int a)
	{
		cout<<"example::operator:["<<a<<']'<<endl;
		return a;
	}
	int operator[](string a)
	{
		cout<<"example::operator:["<<a<<']'<<endl;
		return 0;
	}


	int operator()(int a)
	{
		cout<<"example::operator:("<<a<<')'<<endl;
		return a;
	}

	int operator()(int a,int b)
	{
		cout<<"example::operator:("<<a<<','<<b<<')'<<endl;
		return a;
	}

};

void f1()
{
	example e1;
	int i=e1(e1(1),2);
	cout<<"i="<<i<<endl;

	int s1=e1[i];int s2=e1["a"];

	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
}

template<class t>
class base 
{
public:
	base()
	{
	}

protected:
    t a,b;
};

template<class t>
class friend1
{
public:
	friend1(){};
private:
	int a;
};

void func1()
{
	int *p1=new int ;
	int *p2=new int[100];

	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;

	delete p1;
	delete p2;
}

void f2()
{
	int a;
	string b;
	char c[100];
	//cin.get(a);
	//cin.get(b);
	getline(cin,b);
	//cin.getline(c,10);

	//cout<<a<<endl;
	cout<<b<<endl;
}

class a
{
private:
	int a1;
	string s1;
	char c1;
	friend class b;

protected:
	int b1;
	string s2;

public:
	a()
	{
		this->a1=0;
		this->b1=1;
		this->s1="abc";
		this->s2="def";
	}
	
	void showinfo()
	{
		cout<<this->a1<<endl;
	}

	void f1(int x);

	void foo(int x,int y);

	//void f1(int x);

};

inline void a::f1(int x)
{

}

class b 
{
private:
	
protected:
public:
	void showinfo(a &ca)
	{
		cout<<ca.a1<<endl;
	}
};

int foo(int x,int y)
{
	return x+y;
}


int test(int x)
{
	return x+x;
}



void f3()
{
	 a a3;
	 a3.showinfo();

	 b b3;
	 b3.showinfo(a3);

}

class person{
public:
	person(string name,string id,int chinese,int math,int english)
	{this->name=name;this->id=id;this->chinese=chinese;this->math=math;this->english=english;}

	void showinfo()
	{
		cout<<this->name<<"\t"<<this->id<<"\t"<<this->chinese<<"\t"<<this->math<<"\t"<<this->english<<endl;
	}
private:
	string name;string id;int chinese;int math;int english;
};

void f4()
{
	string name;string id;int chinese;int math;int english;
	fstream iofile;
	iofile.open("d:/info.txt",ios::out|ios::app);
	cout<<"input person information."<<endl;
	cin>>name;
	id="775";chinese=100;math=100;english=100;
	iofile.close();
	iofile.open("d:/info.txt",ios::in);
}

void f5()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(2);
	cout<<v1.size();
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
	{
        vector<int>::iterator it;
        vector<int> v1;
        //cout<<¡® ¡¯;
        //int a=nums.begin();
        int b;
		//return {1,2};
    }

	int maxArea(vector<int>& height) {
        int s=0;//´¢Ë®Ãæ»ý
		for(vector<int>::iterator it1=height.begin();it1!=height.end()-1;it1++)
		//for (int i=0;i<height.size()-1;i++)
		{
			//int temp= height[i];
			int *temp;
				*temp=*it1;
			for(vector<int>::iterator it2=height.end();it2>it1;it2--)
            //for (int j = height.size() - 1; j > i; j--)
			{
				//if (height[i] > height[j]) { temp = height[j];}
               // else temp = height[i];
                
				if(*it1>*it2){*temp=*it2;}
				else *temp=*it1;
				int d=distance(it2,height.begin());
				if((*temp) *(d) > s)  s=(*temp)*(d);
              // if(temp * (j-i) > s) s= temp * (j - i);

				
			}
            //return s;
		}
        return s;

    }
};

void fun1()
{
	int a=1234;
	stringstream s1;
	string s2;
	
	s1<<a;
	s2=s1.str();
	//cout<<s2;
	reverse(s2.rbegin(),s2.rend());
	cout<<s2;

}

bool fun2(int x)
{
	int j=0;
	int temp=x;
	//int sum=0,
	vector<int> v1;

	while(temp/10)
	{
		v1.push_back(temp%10);
		temp=temp/10;
		j++;

	}
	
	v1.push_back(temp);
	//j++;



	for(int i=0;i<(j/2+1);i++)
	{
		//sum+=v1[j]*10;
		if(v1[i]!=v1[j-i]) 
		//cout<<0;
		return false;
	}
	//else 
	//cout<<1;
	return true;
	
}
//

string fun3(vector<string> strs)
{
	if(strs.size()==0) return "";
	if(strs.size()==1) return strs[0];
	
	for(int i=0;i<strs[0].size();i++)
	{
		for(int j=1;j<strs.size();j++)
		{
			if(strs[j][i]!=strs[0][i]||i==strs[j].size())
			{
				return strs[0].substr(0,i);
			}
		}
	}
	return strs[0];
	//cout<<s1.begin();

	//return "";
	//string s1="abc";
	//cout<<s1[1];
	

	
 	//sum+=(roman)s1[0];
	
	for(int i=0;i<s1.size()-1;i++)
	{
		//cout<<*it;
		if(s1[i]>s1[i+1]) {sum+=s1[i];}
		else {sum+=s1[i+1]-s1[i];i++;}
	}
	
}

bool fun4(string s)
{
	stack<char> s1;
	s1.push(s[0]);
	//char c1=s[0];
	//s1.push(s[1]);
	//return true;
	
	for(int i=1;i<s.size();i++)
	{
		if(s[i]=='('|| s[i]=='{' || s[i]=='[')
			s1.push(s[i]);
		else if(s1.top()=='(' && s[i]==')') s1.pop();
		else if(s1.top()=='[' && s[i]==']') s1.pop();
		else if(s1.top()=='{' && s[i]=='}') s1.pop();
		else return false;

		//cout<<s1[i];
	}
	
	for(int i=s1.size()-1;i<s.size();i++){
		if(s1.top()==s[i]) 
		{
			s1.pop();
		}
		else return false;

	}
	
	

	while(!s1.empty())
	{
		cout<<s1.top();
		s1.pop();
	}
	
	//return true;
	if(s1.empty()) return true;else return false;
}

class  listnode
{
public:
	int val;

	listnode *next;
	listnode():val(0),next(nullptr){}
	listnode(int x):val(x),next(nullptr){}
	listnode(int x,listnode *next):val(x),next(next){}
};

listnode * list_bi1(listnode *l1,listnode *l2)
{
	if(!l1) return l2;
	if(!l2) return l1;

	listnode *head=nullptr;listnode *tail=nullptr;
	if(l2->val > l1->val) {head=tail=l1;l1=l1->next;}
	else {head=tail=l2;l2=l2->next;}
	
	tail->next=nullptr;
	while(l1 && l2)
	{
		if(l2->val > l1->val)
		{
			listnode *next=l1->next;
			tail->next=l1;
			l1->next=nullptr;
			tail=l1;
			l1=next;
		}
		else {
			listnode *next=l2->next;
			tail->next=l2;
			l2->next=nullptr;
			tail=l2;
			l2=next;
		}
	}

	if(l1) tail->next=l1;
	if(l2) tail->next=l2;
	return head;
}

void fun5()
{
	vector<int>	nums;
	nums.push_back(1);nums.push_back(1);nums.push_back(2);nums.push_back(3);

	//vector<int>::iterator it1=nums.begin()+1;
	//nums.erase(it);
	//int temp=*it1;
	for(vector<int>::iterator it=nums.begin()+1;it!=nums.end();)
	{
		//for(vector<int>::iterator it1=nums.begin()+1;it1!=nums.end();)
			//cout<<*it<<endl;
			
				if(*it==*(it-1)) it=nums.erase(it);
				else it++;
				//else it1++;

	}

	for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
	{
		cout<<*it<<endl;
	}
}


int fun6()
{
	string haystack="bbbaaa";string needle="bba";
	int num=0;
	string::iterator it1;
	string::iterator it2=needle.begin();
	
	for(it1=haystack.begin();it1!=haystack.end()-needle.size()+1;it1++)
        {
            
                if(*it2==*it1)  
                {
                   num=it1-haystack.begin();
                   while(it2!=needle.end())
                   {
                       
                       if(*it1!=*it2) break;it1++;it2++;
                       

                   }
                   if(it2==needle.end()) return num;
				   else {it2=needle.begin();it1=haystack.begin()+num;}
                   //else it2++;
                   
                }
                
            

        }
        //if(it1==haystack.end()-needle.size()+1) 
	return -1;
	

}

int fun7()
{
	string s="ab mhna  ";
	
	if(s==" ") return 0;

    int sum=0;int max=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ') sum+=1;
		else if(s[i+1]!=' ' && s[i]==' ') {max=sum;sum=0;}  
        else if(s[i+1]!=' ' && s[i]==' ')  sum=0;
        //return 1;
    }
	if(sum > max) max=sum;
    return max;
}

void fun8()
{
	string a="1111";string b="1";
	reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
		int num=2*max(a.size(),b.size())-a.size()-b.size();

        if(a.size()>b.size()) {
			//num=a.size()-b.size();
            for(int i=0;i<num;i++)
            {
                b+='0';
            }}
        else if(b.size()>a.size()) {
			//num=b.size()-a.size();
            for(int i=0;i<num;i++)
            {
                a.push_back('0');
            }
        }

        int temp=0;string s1;//int n;
        for(int i=0;i<a.size();i++){
			//n=a[i]-'0'+b[i]-'0'+temp;
            if(a[i]-'0'+b[i]-'0'+temp>=2)
            {
                if((a[i]+b[i]+temp)%2==0) {s1.push_back('0');}
                else {s1.push_back('1');}
                temp=1;
            }

            else{
                if((a[i]+b[i]+temp)%2==0) {s1.push_back('0');}
                else {s1.push_back('1');}
                temp=0;
            }


        }
        if(temp==1) s1.push_back('1');
        reverse(s1.begin(),s1.end());
		cout<<s1;
}

void fun9()
{
	typedef  int zhen;
	double n=1.0;
	double x=2.1;
	double *p1=&n;
	double &p2=n;

	p2=x;
	//cout<<sizeof(n)<<endl;
	//cout<<sizeof(p1)<<endl;
	//cout<<sizeof(p2)<<endl;
	cout<<p2<<endl;
	cout<<n<<endl;
}

void f(int *x,int *y)
{
	*x=5;
	*y=8;
}

int main()
{
	//int (*pf)(int a);pf=test;
	//cout<<pf(3);
	//f5();
	
	//cout<<fun2(1222);
	//vector<string> v1;
	//v1[1]="abc";
	//v1[2]="abcd";
	//seed s1;
	//string s="({[()])}";
	//string s1="(){}[()]";
	//string s2="(){}}{";
	//cout<<fun4(s2);
	//stack<seed> s2;

	//stack<seed>::iterator it;

	//enum abc{A=2,B=4,C=6}a1;
	//string s1="abcde";
	//a1=B;
	//cout<<s1.size();
	//cout<<fun7();
	//fun9();
	//string haystack="baaan";
	//string::iterator it=haystack.end()-1;cout<<*it;
	//int *x,*y;int a=0;int b=0;x=&a;y=&b;f(x,y);printf("%d,%d\n",*x,*y);
	
	
	
	system("pause");
	return 0;
}
*/