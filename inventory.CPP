
#include<iostream.h>
#include<conio.h>
class Inventory
{
	int c1,c2,c3,y;
	public:
	void menu()
	{
		cout<<"ENTER 1 FOR GETTI THE LOCATION OF PRODUCT AND DETAILS"<<endl;
		cout<<"ENTER 2 FOR BUYING NEW PRODUCTS"<<endl;
		cin>>c1;
		switch(c1)
		{
			case 1: clrscr();
				cout<<"ENTER 1 FOR TABLE\t\tENTER 2 FOR SYSTEM"<<endl;
				cout<<"ENTER 3 FOR PRINTER\t\tENTER 4 FOR PROJECTOR"<<endl;
				cout<<"ENTER 5 FOR MAIN SYSTEM"<<endl;
				cin>>c2;
			switch(c2)
			{
				case 1:clrscr();
				cout<<"LOCATION:the table is present in lab 1 "<<endl;
					cout<<"IT IS MADE OFF GOOD QUALITY WOOD AND IT IS POTABLE"<<endl;
					break;
				case 2: clrscr();
					cout<<"LOCATION:the SYSTEM is present in lab 2 4TH ROW "<<endl;
				       cout<<"IT IS A CORE i5 7th GEN SYSTEM WHICH IS HAVING AM ADDITIONAL GRAPHICS CARD"<<endl;
					break;
				case 3:clrscr();
				cout<<"LOCATION:the table is present in lab 2 4th ROW ATTACHED TO SYSTEM"<<endl;
					cout<<"IT IS A LASER PRINTER AND I A HP PRODUCT"<<endl;
					break;
				case 4: clrscr();
					cout<<"LOCATION:the PROJECTOR is present in lab 1 "<<endl;
					cout<<"IT IS A COLOURED PROJECTOR AND IS OF SUMSUNG COMPANY"<<endl;
					break;
				case 5: clrscr();
					cout<<"LOCATION:the MAIN SYSTEM is present in lab 1 "<<endl;
					cout<<"IT IS A CORE i9 4th GEN SYSTEM AND CAN DO ANY SORT OF OPERATIONS"<<endl;
					break;
				default:cout<<"please check your selection"<<endl;
					break;
			}
			break;
			case 2: clrscr();
				cout<<"ENTER 1 FOR PRINTER\tHURRY ONLY 7 PRINTERS LEFT"<<endl;
				cout<<"Rs 12999"<<endl;
				cout<<"ENTER 2 for KEYBOARD\tHURRY ONLY 19 KEYBOARD LEFT"<<endl;
				cout<<"Rs 1999"<<endl;
				cout<<"ENTER 3 FOR MONITOR\tHURRY ONLY 29 MONITORS LEFT"<<endl;
				cout<<"Rs 18999"<<endl;
				cout<<"ENTER 4 FOR CPU\tHURRY ONLY 4 CPU LEFT"<<endl;
				cout<<"Rs 9999"<<endl;
				cout<<"ENTER 5 FOR PROJECTORS\tHURRY ONLY 10 PROJECTORS LEFT"<<endl;
				cout<<"Rs 3999"<<endl;
				cin>>c3;
			switch(c3)
			{
				case 1:cout<<"press 1 to confirm"<<endl;
					cin>>y;
				switch(y)
				{
					case 1:cout<<"thanks for buying our product it will be delivered to you by 17th of this month"<<"have a good day"<<endl;
					cout<<"only 6 pieces left"<<endl;
						       break;

					default: cout<<"SORRY WE DIDNT WORK ACCORDING TO YOUR EXPECTSATIONS"<<endl;
					break;
				}
				break;

				case 2:cout<<"press 1 to confirm"<<endl;
				cin>>y;
				switch(y)
				{
					case 1:cout<<"thanks for buying our product it will be delivered to you by 17th of this month"<<"have a good day"<<endl;
					cout<<"only 18 pieces left"<<endl;
						       break;
					default: cout<<"SORRY WE DIDNT WORK ACCORDING TO YOUR EXPECTSATIONS"<<endl;
					break;
				}
				break;
				case 3:cout<<"press 1 to confirm"<<endl;
					cin>>y;
				switch(y)
				{
					case 1:cout<<"thanks for buying our product it will be delivered to you by 17th of this month"<<"have a good day"<<endl;
					cout<<"only 28 pieces left"<<endl;
						       break;

					default: cout<<"SORRY WE DIDNT WORK ACCORDING TO YOUR EXPECTSATIONS"<<endl;
					break;
				}
				break;
				case 4:cout<<"press 1 to confirm"<<endl;
				cin>>y;
				switch(y)
				{
					case 1:cout<<"thanks for buying our product it will be delivered to you by 17th of this month"<<"have a good day"<<endl;
					cout<<"only 3 pieces left"<<endl;
						       break;

					default: cout<<"SORRY WE DIDNT WORK ACCORDING TO YOUR EXPECTSATIONS"<<endl;
					break;
				}
				break;
				case 5:cout<<"press 1 to confirm"<<endl;
				cin>>y;
				switch(y)
				{
					case 1:cout<<"thanks for buying our product it will be delivered to you by 17th of this month"<<"have a good day"<<endl;
					cout<<"only 6 pieces left"<<endl;
						       break;

					default: cout<<"SORRY WE DIDNT WORK ACCORDING TO YOUR EXPECTSATIONS"<<endl;
					break;
				}
				break;
				default:cout<<"check your input"<<endl;
				break;
			}
			break;
		       default:cout<<"sorry we didnt get you try again"<<endl;
		       break;
		}
	}
};
void main()
{
	Inventory obj;
	clrscr();
	cout<<"THIS MODULE WAS DEVELOPED BY ABHILAV DEV"<<endl;
	obj.menu();
	getch();
}
