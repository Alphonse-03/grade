#include<iostream.h>
#include<conio.h>
class yrsum
{
	private:
	int d,m,y;
	public:
	void get()
	{
		cout<<"enter day,month and year\n";
		cin>>d>>m>>y;
	}
	yrsum sum(yrsum a)
	{
		yrsum res;
		res.d=d+a.d;
		res.m=m+a.m;
		res.y=y+a.y;
		return res;
	}
	void display()
	{
		cout<<d<<"days"<<m<<"months"<<y<<"years";
	}
};
void main()
{
	clrscr();
	yrsum a,b,c;
	a.get();
	b.get();
	c=a.sum(b);
	c.display();
	getch();
}