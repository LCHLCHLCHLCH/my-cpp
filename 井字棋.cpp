#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
char a[4][4];


void staout()
{
		/*第一行*/
	cout<<"---        ---        ---"<<endl;
	cout<<" "<<a[1][1]<<"         "<<" "<<a[2][1]<<"         "<<" "<<a[3][1]<<"         "<<endl;
	cout<<"---        ---        ---"<<endl;

	
	
	/*第二行*/
	cout<<endl<<endl; 
	cout<<"---        ---        ---"<<endl;
	cout<<" "<<a[1][2]<<"         "<<" "<<a[2][2]<<"         "<<" "<<a[3][2]<<"         "<<endl;
	cout<<"---        ---        ---"<<endl;

	
	/*第三行*/
	cout<<endl<<endl; 
	cout<<"---        ---        ---"<<endl;
	cout<<" "<<a[1][3]<<"         "<<" "<<a[2][3]<<"         "<<" "<<a[3][3]<<"    "<<endl;
	cout<<"---        ---        ---"<<endl;
	
	cout<<endl<<endl<<endl<<endl<<endl;

}



int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=' ';
		}
	}
	
	int x,y; 
	
	staout();
	staout();
	 
	while(1)
	{
		
		
		
		/*1行动*/
		cout<<"玩家1：";
		cin>>y>>x;
		a[x][y]='x';
		
		staout();
		
		
		/*检测*/
		if(a[1][1]==a[2][1]&&a[2][1]==a[3][1]&&a[1][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[1][2]==a[2][2]&&a[2][2]==a[3][2]&&a[1][2]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[1][3]==a[2][3]&&a[2][3]==a[3][3]&&a[1][3]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[1][1]==a[1][2]&&a[1][2]==a[1][3]&&a[1][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[2][1]==a[2][2]&&a[2][2]==a[2][3]&&a[2][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[3][1]==a[3][2]&&a[3][2]==a[3][3]&&a[3][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[1][1]==a[2][2]&&a[2][2]==a[3][3]&&a[1][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		if(a[3][1]==a[2][2]&&a[2][2]==a[1][3]&&a[3][1]=='x'){staout;cout<<"1获得胜利\n";system("pause");return 0;} 
		
		/*2行动*/
		cout<<"玩家2：";
		cin>>y>>x;
		a[x][y]='o';
		
		/*检测*/
		if(a[1][1]==a[2][1]&&a[2][1]==a[3][1]&&a[1][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[1][2]==a[2][2]&&a[2][2]==a[3][2]&&a[1][2]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[1][3]==a[2][3]&&a[2][3]==a[3][3]&&a[1][3]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[1][1]==a[1][2]&&a[1][2]==a[1][3]&&a[1][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[2][1]==a[2][2]&&a[2][2]==a[2][3]&&a[2][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[3][1]==a[3][2]&&a[3][2]==a[3][3]&&a[3][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[1][1]==a[2][2]&&a[2][2]==a[3][3]&&a[1][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		if(a[3][1]==a[2][2]&&a[2][2]==a[1][3]&&a[3][1]=='o'){staout;cout<<"2获得胜利\n";system("pause");return 0;} 
		
		
		staout();
		
		
	}
	
	
} 
