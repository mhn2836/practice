/*

#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

class a
{
public:
	void func1();
	void func2();
	int func3();
};

class single_list
{
private:
	int data;
	single_list *next;

public:
	single_list *create(int len)
	{
		single_list *prev,*head,*tail;
		head =new single_list;
		head->data=len;
		head->next=NULL;
		prev=head;
		if(len==0)
		{
			goto end;
		}
		cout<<"print node num/n";

		while(len--)//链表节点计数为0
		{
			int data1;
			tail = new single_list;
			cin>>data1;
			this->attach(prev,tail,data);
			prev=tail;
		}
        end:return head;
	}

	void attach(single_list* prev,single_list* tail,int data)
		{
			tail->next=NULL;
			tail->data=data;
			prev->next=tail;
		}

	int getLength(single_list *list)
	{
		return list->data;
	}

	void print(single_list *list)
	{
		if(!list->data)
		{
			cout<<"list is empty/n";
			return;
		}
		int len=list->data;
		single_list *ptr1=list->next;
		for(int i=0;i<len;i++)
		{
			cout<<ptr1->data<<' ';
			ptr1=ptr1->next;
		}
	}

	single_list* sort(single_list *list)
	{
		single_list *head,*prev1,*prev2;
		head=list;
		prev1=list->next;
		while(prev1)
		{
			prev2=prev1->next;
			while(prev2)
			{
				if(prev1->data>prev2->data)
				{
					prev1->data += prev2->data;
					prev2->data = prev1->data-prev2->data;
					prev1->data -= prev2->data;
				}
				prev2=prev2->next;
			}
			prev1=prev1->next;
		}
		return head;
	}
};

template<class T>
class BiNode
{
public:
	T data;
	BiNode<T> *lchild,*rchild;
};

template<class t>
class BiTree
{
private:
	BiNode<t> *m_root;
	BiNode<t> *CreateTree();

public:
	BiTree();
	~BiTree();
	BiNode<t> *GetRoot();

	int BiNum(BiNode<t> *);
	int TreeDepth(BiNode<t> *);
	int LeafNum(BiNode<t> *);
};

template<class t>
BiTree<t>::BiTree()
{
	m_root=new BiNode<t>;
	m_root=CreateTree();
}

template<class t>
BiTree<t>::~BiTree()
{

}

template<class t>
BiNode<t>* BiTree<t>::CreateTree()
{
	char c1=getchar();
	BiNode<t> *Pnode;

	if(ch==' ')
	{
		Pnode=NULL;
	}
	else 
	{
		Pnode=new BiNode<t>;
		Pnode->data=ch;
		Pnode->lchild=CreateTree();
		Pnode->rchild=CreateTree();
	}
	return Pnode;
}


void a::func1()
{
	cout<<"111\n";
}

void func1()
{ cout<<"111\n";};


bool func3()
{
	int a=1;
	int b=0;
	return b==0;
}

int main()
{
	//class a a1;
	//a1.func1();
	
	//void (*Fptr)();
	//Fptr=func1;Fptr();

	int a;
	int *p1=new int(a);



	system("pause");
	return 0;
}
*/