#include<iostream>
#include<ctime> 
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	/*随机数*/
	unsigned seed;
	seed=time(0);
	srand(seed); 
	/*随机数*/
	
	
	short a[3];
	short a1;
	/*投三个骰子 
	for(int i=0;i<3;i++){a[i]=(rand())%6+1;};
	cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2]; 
	*/
	
	
	
	int age=0;//年龄 
	int money;//钱 
	int money_ability=1;//赚钱能力 
	int effort; 
	bool life=1;
	
	string name; 
	cout<<"请输入姓名："; 
	cin>>name;
	
	/*选择身份*/
	a1=rand()%3;
	switch(a1)
	{
		case 0:
			cout<<"你出生在了一个富二代家庭";
			money=10;
			effort=1;
			break; 
		case 1:
			cout<<"你出生在了一个农村家庭";
			money=2;
			effort=2;
			break;
		case 2:
			cout<<"你的父母是工人";
			money=3;
			effort=2;
			break;
	} 
	
	
	
	
	/*开始人生循环*/
	while(life==1)
	{
		cout<<"当前状态："
	} 
	
	
	 


















	
} 
