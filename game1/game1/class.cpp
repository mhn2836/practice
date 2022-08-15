#include"class.h"

Snake::Snake()
{
	POINT head={4,4};
	bodylist.push_back(head);
	dir=direction::RIGHT;

	//POINT p1={1,2};
	//POINT p2={1,3};
	//POINT p3={2,3};
	//bodylist.push_back(p1);
	//bodylist.push_back(p2);
	//bodylist.push_back(p3);


}

void Snake::draw()
{
	for(list<POINT>::iterator it=bodylist.begin();it!=bodylist.end();it++)
	{
		POINT position =*it;
		rectangle(position.x * 48 +160,position.y * 48,(position.x +1) * 48 +160,(position.y +1) * 48);
	}
}

void Snake::update()
{
	int xOffset[4]={0,0,-1,1};
	int yOffset[4]={-1,1,0,0};

	static int moveTime=0;
	int curTime=GetTickCount();

	if(curTime-moveTime<500)
	{
		return;
	}

	moveTime=curTime;

	list<POINT>::iterator it = bodylist.begin();
	int prevX=it->x;
	int prevY=it->y;

	it->x += xOffset[dir];
	it->y += yOffset[dir];

	it++;

	for(;it!=bodylist.end();it++)
	{
		int curX=it->x;
		int curY=it->y;

		it->x=prevX;
		it->y=prevY;

		prevX=curX;
		prevY=curY;
	}
}

void Snake::changeDirection(direction dir)
{
	if(dir == direction::DOWN)
	{}
}

void Wall::draw()
{
	line(160,0,160,720);
	line(160,500,0,500);
	line(160,200,0,200);
}

void Apple::draw()
{

}

void UI::draw()
{
	RECT scoreRect={10,30,140,80};
	drawtext("score",&scoreRect,DT_CENTER);

	RECT levelRect={10,540,140,590};
	drawtext("level",&levelRect,DT_CENTER);
}