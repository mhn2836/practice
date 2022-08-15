#pragma once
#include<iostream>
#include<string>
#include<graphics.h>
#include<list>

using namespace std;


enum direction{UP,DOWN,LEFT,RIGHT};

class dad
{
public:
	virtual void draw()=NULL;
};

class Snake:public dad
{
public:
	Snake();
	void draw();
	void update();
	static int moveTime;
	void changeDirection(direction dir);
	

private:
	list<POINT> bodylist;
	int dir;
	
};

class Wall:public dad
{
public:
	void draw();
private:
	int m_x;
	int m_y;
};

class Apple:public dad
{
public:
	void draw();
};

class UI:public dad
{
public:
	void draw();
};