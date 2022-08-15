#include "worker_manage.h"
#include "guest.h"

//显示功能菜单

//输入编号
int Input(int num)
{
	cout<<"please choose number:";
	cin>>num;
	return num;
}

char *itostr(int n,char *string){
	if(n < 0){
		n = -n;
		*string = '-';
		string++;
	}
	if(n / 10 != 0)
		string  = itostr(n/10,string);
	*string = n % 10 + '0';
	string++;
	*string = '\0';
	return string;
}

//写入文件
void write()
{
	string a;

	ofstream ofs;
	ofs.open("C:/Users/MHN/Desktop/123.txt",ios::out);

	ofs<<"zahngsan"<<endl;
	ofs<<"age:18"<<endl;
	ofs.close();

}

int main()
{
	//test();
	//showMenu();
	unsigned char c1=5;
	signed char c2=200;

	cout<<c1<<endl;
	cout<<c2<<endl;

	
	
	/*
	cout<<"please choose number:";
	cin>>num;

	
	while(num!=0)
	{
		switch(num)
		{
		case 1:
			//i=Add(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 2:
			//Showinfo(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 3:
			//i=Delete(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 4:
			//Check(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 5:
			//Change(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 6:
			//i=Reset(p,i);
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		case 7:
			system("pause");system("cls");w1.showMenu();
			num=Input(num);cout<<endl;break;
		default:
			cout<<"error"<<endl;
			system("pause");system("cls");w1.showMenu();
			num=Input(num);
			break;
		}
	}
	*/
	
	//cout<<"退出系统成功"<<endl;
	system("pause");
	return 0;
}