#include "guest.h"


void worker::info()
{
	cout<<"ְ����ţ�"<<this->m_code<<"     "<<"ְ��������"<<this->m_name<<"     "<<"ְ����λ��"<<this->m_job<<"     "<<"Ա��ְ��:"<<this->work<<endl;
	
}

worker::worker(int code,string name,string job)
{
	this->m_code=code;
	this->m_name=name;
	this->m_job=job;
	this->work="1";
}


void manager::info()
{
	cout<<"ְ����ţ�"<<this->m_code<<"     "<<"ְ��������"<<this->m_name<<"     "<<"ְ����λ��"<<this->m_job<<"     "<<"Ա��ְ��:"<<this->work<<endl;
}

manager::manager(int code,string name,string job)
{
	this->m_code=code;
	this->m_name=name;
	this->m_job=job;
	this->work="2";
}


void boss::info()
{
	cout<<"ְ����ţ�"<<this->m_code<<"     "<<"ְ��������"<<this->m_name<<"     "<<"ְ����λ��"<<this->m_job<<"     "<<"Ա��ְ��:"<<this->work<<endl;
}

boss::boss(int code,string name,string job)
{
	this->m_code=code;
	this->m_name=name;
	this->m_job=job;
	this->work="3";
}