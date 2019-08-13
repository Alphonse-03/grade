#include<iostream.h>
#include<conio.h>
#include<string.h>
class Grade
{
	private:
	int roll,p1,p2,p3,avg;
	char name[20];
	public:
	Grade()
	{
		roll=0;
		p1=0;
		p2=0;
		p3=0;
		avg=0;
		strcpy(name,"\0");
	}
	Grade(int a,int b,int c,int d,char str[])
	{
		p1=a;
		p2=b;
		p3=c;
		roll=d;
		strcpy(name,str);
	}
	void average()
	{
		avg=(p1+p2+p3)/3;
	}
	void display()
	{
		if(avg>90)
		{
			cout<<"a";
		}
		else if(avg>=75&&avg<90)
		{
			cout<<"b";
		}
		else if(avg<75)
		{
			cout<<"c";
		}
		cout<<"roll"<<roll<<endl;
		cout<<"name"<<name<<endl;
	}    };
	void main()
	{
	      clrscr();
	      Grade m(70,90,100,2,"alphonse");
	      m.average();
	      m.display() ;
	      getch();
	    }

