#include "worker_manage.h"


//显示功能菜单
void workmanage::showMenu()
{
	cout<<"        员工管理系统       "<<endl;
	for(int i=0;i<35;i++)
	{
		cout<<'*';
	}
	
	cout<<endl;
	string a[8]={"1、添加职工信息","2、显示职工信息","3、删除离职员工信息","4、查找职工信息","5、修改职工信息","6、员工编号排序","7、清空系统信息","0、退出系统"};
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

//0、退出系统


workmanage::workmanage()
{
	
}