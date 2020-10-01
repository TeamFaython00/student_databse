#include<iostream>
#include<string>
#include<windows.h>
#include"early.h"
#include"show.h"
#include"countdown.h"
#include"password.h"
using namespace std;




void reportcard()
{
	countdown();
	allfunc();
		system("cls");
	cout<<"\t\t\tStudent Detail Panel\n\n";
	Sleep(500);
	cout<<"Name of the student:";
	puts(mai.name);    Sleep(500);
	cout<<"Class:"<<mai.cla;    Sleep(500);
	cout<<"\n\n\t\t\t\tMarks Scored";    Sleep(1000);
	cout<<"\nMarks scored in "<<mai.sub.subname1<<" :"<<mai.marks.sub1<<"\100";    Sleep(500);
	cout<<"\nMarks scored in "<<mai.sub.subname2<<" :"<<mai.marks.sub2<<"\100";    Sleep(500);
	cout<<"\nMarks scored in "<<mai.sub.subname3<<" :"<<mai.marks.sub3<<"\100";    Sleep(500);
	cout<<"\n\n\t\t\t\tPercentage chart";    Sleep(1000);
		cout<<"\nPercentage in "<<mai.sub.subname1<<" is: "<<mai.perc.per1<<"%";  Sleep(500);
		cout<<"\nPercentage in "<<mai.sub.subname2<<" is: "<<mai.perc.per2<<"%";  Sleep(500);
		cout<<"\nPercentage in "<<mai.sub.subname3<<" is: "<<mai.perc.per3<<"%";  Sleep(500);
		cout<<"\nTotal Percentage in all subject is: "<<mai.perc.max<<"%";    Sleep(1000);
		cout<<"\n\n\t\t\t\tGPA chart";    Sleep(1000);
	cout<<"\nGPA in "<<mai.sub.subname1<<" is :"<<mai.gpp.gp1;  Sleep(500);
	cout<<"\nGPA in "<<mai.sub.subname2<<" is :"<<mai.gpp.gp2;  Sleep(500);
	cout<<"\nGPA in "<<mai.sub.subname3<<" is :"<<mai.gpp.gp3;  Sleep(500);
	cout<<"\n\n\t\t\t\tCGPA chart";    Sleep(1000);
	cout<<"\n\nCGPA of the student: "<<mai.cgp;  Sleep(500);
	cout<<"\nx-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
	cin.ignore();
	cin.ignore();
}
void select()
{
	system("cls");
	cout<<"Following function available:";
	cout<<"\n1)Subject Percentage\n2)Subject GPA\n3)CGPA\n4)Report Card";
	cout<<"\nEnter your choice:";
	cin>>mai.option;
	if(mai.option==1)
	{
		subper();
	}
	if(mai.option==2)
	{
		subgpa();
	}
	if(mai.option==3)
	{
		cgpa();
	}
	if(mai.option==4)
	{
		reportcard();
	}
}
int main()
{
	int opt;
	int opti;
	early();
	cin.ignore();
	password();
	show();
	do{
	enter();
	do{
		select();
		system("cls");
		cout<<"Do you want to go back to Function Chart\n1)Yes\n2)No\n";
		cin>>opti;
	}while(opti==1);
	system("cls");
	cout<<"Do you want to rerun the program\n1)Yes\n2)No\n";
	cin>>opt;
	if(opt==2);
	{
		cout<<"\n\n\t\tThanks For Using The Program......";
	}
    }while(opt==1);
}
