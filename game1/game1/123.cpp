/*
#include<string>
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<Windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam);

LRESULT CALLBACK WindowProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	return DefWindowProc(hWnd,uMsg,wParam,lParam);
}

//设计窗口类
void Design(HINSTANCE hInstance)
{
	WNDCLASS wc={0};
	wc.hbrBackground = CreateSolidBrush(RGB(204,255,255));		//背景颜色
	wc.hCursor=LoadCursor(NULL, IDC_CROSS);		//光标
	wc.hIcon=LoadIcon(NULL,IDI_ERROR);	//错误图标
	wc.hInstance=hInstance;				//应用程序实例句柄，表示EXE
	wc.lpfnWndProc=WindowProc;			//窗口处理函数

}

//main():控制台窗口入口函数
//WinMain():Windows窗口入口函数
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPreInstance,LPSTR lpCmdLine,int nCmdShow)
{
	//MessageBox(NULL,"Hello world","丁涛",MB_OK);
	Design(hInstance);
	//system("pause");
	return 0;

}
*/