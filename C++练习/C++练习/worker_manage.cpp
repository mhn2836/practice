#include "worker_manage.h"


//��ʾ���ܲ˵�
void workmanage::showMenu()
{
	cout<<"        Ա������ϵͳ       "<<endl;
	for(int i=0;i<35;i++)
	{
		cout<<'*';
	}
	
	cout<<endl;
	string a[8]={"1�����ְ����Ϣ","2����ʾְ����Ϣ","3��ɾ����ְԱ����Ϣ","4������ְ����Ϣ","5���޸�ְ����Ϣ","6��Ա���������","7�����ϵͳ��Ϣ","0���˳�ϵͳ"};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<'*';
		}
		cout<<' '<<a[i]<<' ';
	
		cout<<endl<<endl;
	}
	
}

//0���˳�ϵͳ


workmanage::workmanage()
{
	
}