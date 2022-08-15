#include "guest.h"


void worker::info()
{
	cout<<"职工编号："<<this->m_code<<"     "<<"职工姓名："<<this->m_name<<"     "<<"职工岗位："<<this->m_job<<"     "<<"员工职能:"<<this->work<<endl;
	
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
	cout<<"职工编号："<<this->m_code<<"     "<<"职工姓名："<<this->m_name<<"     "<<"职工岗位："<<this->m_job<<"     "<<"员工职能:"<<this->work<<endl;
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
	cout<<"职工编号："<<this->m_code<<"     "<<"职工姓名："<<this->m_name<<"     "<<"职工岗位："<<this->m_job<<"     "<<"员工职能:"<<this->work<<endl;
}

boss::boss(int code,string name,string job)
{
	this->m_code=code;
	this->m_name=name;
	this->m_job=job;
	this->work="3";
}