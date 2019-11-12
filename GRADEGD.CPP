/*module by Alphonse Prakash*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Grade
{
	int c,ct,j,jt,w,wt,s,st,jlt,jl,clt,cl,ci,ji,si,wi,cli,jli,point;
	char name[20],course[5];
	int roll,yoj;
	double sgpa,total;
	int cp[6];
	public:
	void getMarks()
	{
		cout<<"enter the marks obtained in c++ in external exam\t";
		cin>>c;
		if(c>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			  exit(0);
			  getch();
		}
		cout<<"enter the marks obtained in c++ in internal exam\t";
		cin>>ci;
		if(ci>40)
		{
			cout<<"please enter marks less than 40"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in java in external exam\t";
		cin>>j;
		if(j>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in java in internal exam\t";
		cin>>ji;
		if(ji>40)
		{
			cout<<"please enter marks less than 40"<<endl;
			exit(0);
			getch();
		}

		cout<<"enter the marks obtained in software engineering in external exam\t";
		cin>>s;
		if(s>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in software engineering in internal exam\t";
		cin>>si;
		if(si>40)
		{
			cout<<"please enter marks less than 40"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in Web Development in external exam\t";
		cin>>w;
		if(w>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in Web Development in internal exam\t";
		cin>>wi;
		if(wi>60)
		{
			cout<<"please enter marks less than 40"<<endl;
			exit(0);
			getch();

		}
		cout<<"enter the marks obtained in c++ lab in external exam\t";
		cin>>cl;
		if(cl>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in c++ lab in internal exam\t";
		cin>>cli;
		if(cli>40)
		{
			cout<<"please enter marks less than 40"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in java lab in external exam\t";
		cin>>jl;
		if(jl>60)
		{
			cout<<"please enter marks less than 60"<<endl;
			exit(0);
			getch();
		}
		cout<<"enter the marks obtained in java in internal exam\t";
		cin>>jli;
		if(jli>40)
		{
			cout<<"please enter marks less than 40"<<endl;
			{
			exit(0);
			getch();
			}
		}

	}
	void gstudent()
	{
		cout<<"enter the name"<<endl;
		cin>>name;
		cout<<"enter the department"<<endl;
		cin>>course;
		cout<<"enter the roll"<<endl;
		cin>>roll;
		cout<<"enter the year of joining"<<endl;
		cin>>yoj;
	}
	void dstudent()
	{
		cout<<endl;
		cout<<name<<endl;
		cout<<course<<endl;
		cout<<roll<<endl;
		cout<<yoj<<endl;
	}
	void getTotal()
	{
		ct=c+ci;
		jt=j+ji;
		wt=w+wi;
		st=s+si;
		clt=cl+cli;
		jlt=jl+jli;
		total=ct+jt+wt+st+clt+jlt;
		double per=total/600*100;
		if(per>=90)
		{
			cout<<"Grade of the student A+"<<endl;
		      //	grade[0]='A';
		       //	grade[1]='+';
		       //	grade[2]='\0';
		}
		else if(per>=80&&per<90)
		{
			cout<<"Grade of the student A"<<endl;
		       //	grade[0]='A';
		       //	grade[1]='\0';
		}
		else if(per>=70&&per<80)
		{
			cout<<"Grade of the student B"<<endl;
		       //	grade[0]='B';
			//grade[1]='\0';
		}
		else if(per>=60&&per<70)
		{
			cout<<"Grade of the student C"<<endl;
		       //	grade[0]='C';
		       //	grade[1]='\0';
		}
		else if(per>=50&&per<60)
		{
			cout<<"Grade of the student D"<<endl;
		       //	grade[0]='D';
		       //	grade[1]='\0';
		}
		else if(per>=35&&per<50)
		{
			cout<<"Grade of the student P"<<endl;
		       //	grade[0]='P';
		       //	grade[1]='\0';
		}
		else
		{
			cout<<"Grade of the student F"<<endl;
		}
	       /*	for(int i=0;i<3;i++)
		{
			cout<<grade[i];
		}  */
	}
	int getpoint(int m)
	{
	      if(m>=90)
	      {
		point=10;
	      }
	      else if(m>=80&&m<90)
	      {
		point=9;
	      }
	      else if(m>=70&&m<80)
	      {
		point=8;
	      }
	      else if(m>=60&&m<70)
	      {
		point=7;
	      }
	      else if(m>=50&&m<60)
	      {
		point=6;
	      }
	      else if(m>=35&&m<50)
	      {
		point=5;
	      }
	      else
	      {
		point=0;
	      }
	      return point;
	}
	void getSgpa()
	{
	       int a=getpoint(ct);
	       int b=getpoint(jt);
	       int c=getpoint(st);
	       int d=getpoint(wt);
	       int e=getpoint(jlt);
	       int f=getpoint(clt);
	       sgpa=((4*a)+(4*b)+(5*c)+(5*d)+(3*e)+(3*f))/24.0;
	       cout<<"Sgpa of the student="<<sgpa;
	}
};
void main()
{

	Grade obj;
	clrscr();
	cout<<"	THIS MODULE IS CREATED BY ALPHONSE PRAKASH"<<	endl;
	obj.gstudent();
	obj.getMarks();
	clrscr();
	obj.getTotal();
	obj.getSgpa();
	obj.dstudent();
	getch();
}
