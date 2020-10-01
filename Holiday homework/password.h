#include<iostream>
#include<string>
#include <conio.h>
#include<windows.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int password()
{
	system("cls");
	string pass="";
	char chp;
	char user[30];
	char name[30];
	cout<<"\n\n\n\n\n\t\tName of Teacher:";
	gets(name);
	cout<<"\t\tUsername:";
	cin>>user;
	cout<<"\t\tPassword:";
	chp = _getch();
   while(chp != 13){
      pass.push_back(chp);
      cout << '*';
      chp = _getch();}
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\tWelcome ";
	puts(name);
	Sleep(1000);
}
