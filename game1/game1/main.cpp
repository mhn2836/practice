#include<graphics.h>
#include<string>
#include<iostream>
#include<conio.h>
#include"class.h"
using namespace std;


bool GameRunning = 1;

Snake s1;
Wall w1;
Apple a1;
UI u1;


bool KeyDown(int key)
{
	return (GetAsyncKeyState(key)&0x8000? 1:0);
}

void draw()
{
	cleardevice();
	s1.draw();
	w1.draw();
	a1.draw();
	u1.draw();
}

void keyboardControl()
{
	if(KeyDown(VK_ESCAPE))
	{
		GameRunning = 0;
		
		return ;
	}

	if (KeyDown(VK_LEFT))
	{
		s1.changeDirection(direction::LEFT);
	}

	if (KeyDown(VK_RIGHT))
	{
		s1.changeDirection(direction::RIGHT);
	}

	if (KeyDown(VK_UP))
	{
		s1.changeDirection(direction::UP);
	}

	if (KeyDown(VK_DOWN))
	{
		s1.changeDirection(direction::DOWN);
	}
}

void handleLogic()
{
	s1.update();
}

//³õÊ¼»¯±³¾°Í¼Ïñ
void init()
{
	initgraph(1280,720);
	
	setbkcolor(WHITE);
	setlinecolor(BLACK);
	settextcolor(BLACK);
	cleardevice();

}

void status()
{
	while(GameRunning)
	{
		keyboardControl();
		handleLogic();
		draw();
		Sleep(30);
	}
}

void close()
{
	getchar();
	closegraph();
}

int main()
{
	init();
	status();

	
	close();
	
	//test1();
	
	//ellipse(200,100,100,300);
	//outtextxy(200,100,"hello world");
	//bar3d(300,300,300,300,100,1);
	

	system("pause");
	return 0;


}