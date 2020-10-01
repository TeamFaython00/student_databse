#include<iostream>
#include<string.h>
using namespace std;
void cgpa()
{
	system("cls");
	countdown();
	allfunc();
	cout<<"\n\n\t\t\t\tCGPA chart";    Sleep(500);
	cout<<"CGPA of the student: "<<mai.cgp;
	cin.ignore();
	cin.ignore();
}
void allfunc()
{
	mai.perc.per1=mai.marks.sub1*100/100;
	mai.perc.per2=mai.marks.sub2*100/100;
	mai.perc.per3=mai.marks.sub3*100/100;
	mai.perc.max=(mai.marks.sub1+mai.marks.sub2+mai.marks.sub3)*100/300;
	mai.gpp.gp1=mai.perc.per1*10/100;
	mai.gpp.gp2=mai.perc.per2*10/100;
	mai.gpp.gp3=mai.perc.per3*10/100;
	mai.cgp=(mai.gpp.gp1+mai.gpp.gp2+mai.gpp.gp3)/3;
}
void subper()
{
		countdown();
	system("cls");                                                                                                           
	cout<<"\t\t\t\tPercentage chart";
	allfunc();
	Sleep(500);
		cout<<"\nPercentage in "<<mai.sub.subname1<<" is: "<<mai.perc.per1<<"%";  Sleep(500);
		cout<<"\nPercentage in "<<mai.sub.subname2<<" is: "<<mai.perc.per2<<"%";  Sleep(500);
		cout<<"\nPercentage in "<<mai.sub.subname3<<" is: "<<mai.perc.per3<<"%";  Sleep(500);
		cout<<"\nTotal Percentage in all subject is: "<<mai.perc.max<<"%";    Sleep(1000); 
		cin.ignore();
}
void subgpa()
{
countdown();
	allfunc();
	system("cls");          
	cout<<"\t\t\t\tGPA chart";
	cout<<"\nGPA in "<<mai.sub.subname1<<" is :"<<mai.gpp.gp1;  Sleep(500);
	cout<<"\nGPA in "<<mai.sub.subname2<<" is :"<<mai.gpp.gp2;  Sleep(500);
	cout<<"\nGPA in "<<mai.sub.subname3<<" is :"<<mai.gpp.gp3;  Sleep(500);
	cin.ignore();
	cin.ignore();
}
int function();
{
	
}


