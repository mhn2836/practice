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

//��ƴ�����
void Design(HINSTANCE hInstance)
{
	WNDCLASS wc={0};
	wc.hbrBackground = CreateSolidBrush(RGB(204,255,255));		//������ɫ
	wc.hCursor=LoadCursor(NULL, IDC_CROSS);		//���
	wc.hIcon=LoadIcon(NULL,IDI_ERROR);	//����ͼ��
	wc.hInstance=hInstance;				//Ӧ�ó���ʵ���������ʾEXE
	wc.lpfnWndProc=WindowProc;			//���ڴ�����

}

//main():����̨������ں���
//WinMain():Windows������ں���
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPreInstance,LPSTR lpCmdLine,int nCmdShow)
{
	//MessageBox(NULL,"Hello world","����",MB_OK);
	Design(hInstance);
	//system("pause");
	return 0;

}
*/