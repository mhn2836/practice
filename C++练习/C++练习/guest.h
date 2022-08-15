#pragma once//防止头文件重复包含

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class guest
{
public:
	virtual void info()=0;

	string work;
	int m_code;
	string m_name;
	string m_job;

};


class worker:public guest
{
public:
	void info();
	worker(int code,string name,string job);
};

class manager:public guest
{
public:
	void info();
	manager(int code,string name,string job);
};

class boss:public guest
{
public:
	void info();
	boss(int code,string name,string job);
};