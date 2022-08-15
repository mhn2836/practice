#pragma once
#include<iostream>
#include<string>
using namespace  std;

template<class t>
class diyArray
{
public:
	diyArray(int compacity)
	{
		this->m_compacity=compacity;
		this->m_size=0;
		this->pAddress=new t(this->m_compacity);
	}
private:
	t *pAddress;//指向堆区的指针
	int m_compacity;
	int m_size;
};