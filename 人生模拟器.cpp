#include<iostream>
#include<ctime> 
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	/*�����*/
	unsigned seed;
	seed=time(0);
	srand(seed); 
	/*�����*/
	
	
	short a[3];
	short a1;
	/*Ͷ�������� 
	for(int i=0;i<3;i++){a[i]=(rand())%6+1;};
	cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2]; 
	*/
	
	
	
	int age=0;//���� 
	int money;//Ǯ 
	int money_ability=1;//׬Ǯ���� 
	int effort; 
	bool life=1;
	
	string name; 
	cout<<"������������"; 
	cin>>name;
	
	/*ѡ�����*/
	a1=rand()%3;
	switch(a1)
	{
		case 0:
			cout<<"���������һ����������ͥ";
			money=10;
			effort=1;
			break; 
		case 1:
			cout<<"���������һ��ũ���ͥ";
			money=2;
			effort=2;
			break;
		case 2:
			cout<<"��ĸ�ĸ�ǹ���";
			money=3;
			effort=2;
			break;
	} 
	
	
	
	
	/*��ʼ����ѭ��*/
	while(life==1)
	{
		cout<<"��ǰ״̬��"
	} 
	
	
	 


















	
} 
