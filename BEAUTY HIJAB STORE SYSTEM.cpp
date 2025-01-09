#include <iostream>
#include <time.h>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

//Global Variables
	int tot=0,y=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	int e1=0,e2=0,e3=0,e4=0,e5=0,e6=0;
	int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
	int g1=0,g2=0,g3=0,g4=0,g5=0,g6=0;
	
void drawLine();
void option();
void variation();
void bawalcotton();
void bawalsatin();
void eyelashshawl();
void cottonshawl();
void pleatedshawl();
void printedshawl();
void addon();
void bills();
void totalsale();

void drawLine()
{
	for(int i=1;i<70;i++)
		cout<<"=";
	cout<<endl;
}

int main()
{
    string username="";
  	string password="";
    char answer;
    
		cout<<"\nPlease Enter Username & Password\n";
		cout<<"Username : ";
		cin>>username;
		cout<<"Password : ";
		cin>>password;
	
		if (username=="zulaikha" && password=="123z")
		{	cout<<"\nSuccessfull Login!";
			cout<<"\n\nPlease enter any key to continue\n";
		
				answer=getch();
				system("cls");
				option();
		}
		
		else if (username=="fikriyah" && password=="123f")
		{	cout<<"\nSuccessfull Login!";
			cout<<"\n\nPlease enter any key to continue\n";
		
				answer=getch();
				system("cls");
				option();
		}
			
		else if (username=="kauthar" && password=="123k")
		{	cout<<"\nSuccessfull Login!";
			cout<<"\n\nPlease enter any key to continue\n";
		
				answer=getch();
				system("cls");
				option();
		}
		
		else if (username=="aiman" && password=="123a")
		{	cout<<"\nSuccessfull Login!";
			cout<<"\n\nPlease enter any key to continue\n";
		
				answer=getch();
				system("cls");
				option();
		}
		
		else if (username=="faiz" && password=="123faiz")
		{	cout<<"\nSuccessfull Login!";
			cout<<"\n\nPlease enter any key to continue\n";
		
				answer=getch();
				system("cls");
				option();
		}
		
		else
		{	cout<<"\nInvalid Username or Password! Please try again.\n";
				main();
		}
}

void option()
{	int numopt;

	system("cls");
	
	drawLine();
	cout<<"\t\t\t BEAUTY HIJAB STORE\n";
	drawLine();
	cout<<"\t\t\t 1. Variation\n";
	cout<<"\t\t\t 2. Bills\n";
	cout<<"\t\t\t 3. Total Sales\n";
	cout<<"\t\t\t 4. Log Out\n\n";
	cout<<"\t\t\tEnter your choice : ";
	cin>>numopt;
		
		if(numopt==1)
		{
			system("cls");
			variation();
		}
		if(numopt==2)
		{	
			system("cls");
			bills();
		}
		if(numopt==3)
		{
			system("cls");
			totalsale();
		}
		if(numopt==4)
		{
			system("cls");
			main();
		}
		else
		cout<<"\nInvalid Code!";
		option();
}

void variation()
{	
	char numva;
	drawLine();
	cout<<"\t\t\t BEAUTY HIJAB STORE\n";
	drawLine();
	cout<<"\t\t\t\tType\n";
	drawLine();
	cout<<"\t\t\t 1. Bawal Cotton\n";
	cout<<"\t\t\t 2. Bawal Satin\n";
	cout<<"\t\t\t 3. Eyelash Shawl\n";
	cout<<"\t\t\t 4. Cotton Shawl\n";
	cout<<"\t\t\t 5. Pleated Shawl\n";
	cout<<"\t\t\t 6. Printed Shawl\n";
	cout<<"\t\t\t 7. Add-on\n\n";
	cout<<"Enter your choice or press 'b' to go back : ";

	do
	{
		numva=getch();
		
		if(numva=='1')
		{
			system("cls");
			bawalcotton();
		}
		if(numva=='2')
		{
			system("cls");
			bawalsatin();
		}
		if(numva=='3')
		{
			system("cls");
			eyelashshawl();
		}
		if(numva=='4')
		{
			system("cls");
			cottonshawl();
		}
		if(numva=='5')
		{
			system("cls");
			pleatedshawl();
		}
		if(numva=='6')
		{
			system("cls");
  			printedshawl();
		}
  	    if(numva=='7')
		{
			system("cls");
  			addon();
  		}
		else
		{
			cout<<"\nInvalid Code!";
		}
	}
	while(numva!='b');
		if(numva=='b')
		{
			system("cls");
			option();
		}
}

void bawalcotton()
{
	char numbc;
	
	drawLine();
	cout<<"\t\t\t BAWAL COTTON\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Dusty Pink\t\t20.00\n";
	cout<<"\t\t2. Champagne\t\t20.00\n";
	cout<<"\t\t3. Off White\t\t20.00\n";
	cout<<"\t\t4. Beidge\t\t20.00\n";
	cout<<"\t\t5. Grey\t\t\t20.00\n";
	cout<<"\t\t6. Grean Tea\t\t20.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";

	do
	{
		numbc=getch();
		
		switch (numbc)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				a1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				a2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				a3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				a4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				a5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				a6++;
				break;
			default:
				cout<<"\t\t"<<numbc<<" Invalid Code\n";
				break;
		}
	}
	while(numbc!='b');
		if(numbc=='b')
		{
			system("cls");
			variation();
		}
}

void bawalsatin()
{	char numbs;
	
	drawLine();
	cout<<"\t\t\t BAWAL SATIN\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Snow White\t\t23.00\n";
	cout<<"\t\t2. Cinderella\t\t23.00\n";
	cout<<"\t\t3. Aurora\t\t23.00\n";
	cout<<"\t\t4. Ariel\t\t23.00\n";
	cout<<"\t\t5. Belle\t\t23.00\n";
	cout<<"\t\t6. Jasmine\t\t23.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";
	
	do
	{
		numbs=getch();
		switch (numbs)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				b1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				b2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				b3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				b4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				a5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				b6++;
				break;
			default:
				cout<<"\t\t"<<numbs<<" Invalid Code\n";
				break;
		}
	}
	while(numbs!='b');
		if(numbs=='b')
		{
			system("cls");
			variation();
		}
}

void eyelashshawl()
{	char numes;
	
	drawLine();
	cout<<"\t\t\t EYELASH SHAWL\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Pearl Pink\t\t30.00\n";
	cout<<"\t\t2. Rose Cream\t\t30.00\n";
	cout<<"\t\t3. Peach Blush\t\t30.00\n";
	cout<<"\t\t4. Pure Peach\t\t30.00\n";
	cout<<"\t\t5. French Rose\t\t30.00\n";
	cout<<"\t\t6. Cream\t\t30.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";

	do
	{
		numes=getch();
		switch (numes)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				c1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				c2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				c3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				c4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				c5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				c6++;
				break;
			default:
				cout<<"\t\t"<<numes<<" Invalid Code\n";
				break;
		}
	}
	while(numes!='b');
		if(numes=='b')
		{
			system("cls");
			variation();
		}
}

void cottonshawl()
{	char numcs;
	
	drawLine();
	cout<<"\t\t\t COTTON SHAWL\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Khaki\t\t30.00\n";
	cout<<"\t\t2. Light Spice\t\t30.00\n";
	cout<<"\t\t3. Chocolate\t\t30.00\n";
	cout<<"\t\t4. Smoke\t\t30.00\n";
	cout<<"\t\t5. Olive\t\t30.00\n";
	cout<<"\t\t6. Lilac\t\t30.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";

	do
	{
		numcs=getch();
		switch (numcs)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				d1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				d2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				d3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				d4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				d5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				d6++;
				break;
			default:
				cout<<"\t\t"<<numcs<<" Invalid Code\n";
				break;
		}
	}
	while(numcs!='b');
		if(numcs=='b')
		{
			system("cls");
			variation();
		}
}

void pleatedshawl()
{	char numps;
	
	drawLine();
	cout<<"\t\t\t PLEATED SHAWL\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Raindrops\t\t30.00\n";
	cout<<"\t\t2. Honeydew\t\t30.00\n";
	cout<<"\t\t3. Brownie\t\t30.00\n";
	cout<<"\t\t4. Black\t\t30.00\n";
	cout<<"\t\t5. Navy\t\t\t30.00\n";
	cout<<"\t\t6. Mangosteen\t\t30.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";

	do
	{
		numps=getch();
		switch (numps)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				e1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				e2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				e3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				e4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				e5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				e6++;
				break;
			default:
				cout<<"\t\t"<<numps<<" Invalid Code\n";
				break;
		}
	}
	while(numps!='b');
		if(numps=='b')
		{
			system("cls");
			variation();
		}
}

void printedshawl()
{	char numpr;
	
	drawLine();
	cout<<"\t\t\t PRINTED SHAWL\n";
	drawLine();
	cout<<"\t\tVariation\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t\t1. Pinky Hibiscus\t35.00\n";
	cout<<"\t\t2. Purple Hibiscus\t35.00\n";
	cout<<"\t\t3. Peach Hibiscus\t35.00\n";
	cout<<"\t\t4. Brown Hibiscus\t35.00\n";
	cout<<"\t\t5. Grey Hibiscus\t35.00\n";
	cout<<"\t\t6. Mint Hibiscus\t35.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";

	do
	{
		numpr=getch();
		switch (numpr)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				f1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				f2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n"	;
				f3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				f4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				f5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				f6++;
				break;
			default:
				cout<<"\t\t"<<numpr<<" Invalid Code\n";
				break;
		}
	}
	while(numpr!='b');
		if(numpr=='b')
		{
			system("cls");
			variation();
		}
}

void addon()
{	char numao;
	
	drawLine();
	cout<<"\t\t\t\tADD-ON\n";
	drawLine();
	cout<<"\tVariation\t\t\t\tPrice (RM)\n";
	drawLine();
	cout<<"\t1. Brooch (random)\t\t\t2.00\n";
	cout<<"\t2. Hijabista FaceMask (Nude)\t\t21.00\n";
	cout<<"\t3. Hijabista FaceMask (Mint Green)\t21.00\n";
	cout<<"\t4. Hijabista FaceMask (Pastel Pink)\t21.00\n";
	cout<<"\t5. Inner Scarf (random)\t\t\t10.00\n";
	cout<<"\t6. Ring (random)\t\t\t5.00\n\n";
	cout<<"Enter your choice or press 'b' to go back : \n";
	
	do
	{
		numao=getch();
		switch (numao)
		{
			case '1':
				cout<<"\t\t1 selected\n";
				g1++;
				break;
			case '2':
				cout<<"\t\t2 selected\n";
				g2++;
				break;
			case '3':
				cout<<"\t\t3 selected\n";
				g3++;
				break;
			case '4':
				cout<<"\t\t4 selected\n";
				g4++;
				break;
			case'5':
				cout<<"\t\t5 selected\n";
				g5++;
				break;
			case'6':
				cout<<"\t\t6 selected\n";
				g6++;
				break;
			default:
				cout<<"\t\t"<<numao<<" Invalid Code\n";
				break;
		}
	}
	while(numao!='b');
		if(numao=='b')
		{
			system("cls");
			variation();
		}
}

void bills()
{	int total=0;
	char answer,b;
	

	drawLine();
	cout<<"\t\t\t\tBILL\n";
	drawLine();
	cout<<"Variation"<<setw(35)<<"Price(RM)"<<setw(5)<<"    Qty"<<setw(5)<<"    Amount(RM)"<<endl;
	drawLine();
	
	//Bawal Cotton
	if(a1>0)
	{
		cout<<"Dusty Pink"<<setw(30)<<"  20.00"<<setw(10)<<a1<<setw(10)<<20.00*a1<<endl;
		total+=(20.00*a1);
		y++;
	}
	if(a2>0)
	{
		cout<<"Champagne "<<setw(30)<<"  20.00"<<setw(10)<<a2<<setw(10)<<20.00*a2<<endl;
		total+=(20.00*a2);
		y++;
	}
	if(a3>0)
	{
		cout<<"Off White "<<setw(30)<<"  20.00"<<setw(10)<<a3<<setw(10)<<20.00*a3<<endl;
		total+=(20.00*a3);
		y++;
	}
	if(a4>0)
	{
		cout<<"Beidge    "<<setw(30)<<"  20.00"<<setw(10)<<a4<<setw(10)<<20.00*a4<<endl;
		total+=(20.00*a4);
		y++;
	}
	if(a5>0)
	{
		cout<<"Grey      "<<setw(30)<<"  20.00"<<setw(10)<<a5<<setw(10)<<20.00*a5<<endl;
		total+=(20.00*a5);
		y++;
	}
	if(a6>0)
	{
		cout<<"Green Tea "<<setw(30)<<"  20.00"<<setw(10)<<a6<<setw(10)<<20.00*a6<<endl;
		total+=(20.00*a6);
		y++;
	}
	
	//Bawal Satin
	if(b1>0)
	{
		cout<<"Snow White"<<setw(30)<<"  23.00"<<setw(10)<<b1<<setw(10)<<23.00*b1<<endl;
		total+=(23.00*b1);
		y++;
	}
	if(b2>0)
	{
		cout<<"Cinderella"<<setw(30)<<"  23.00"<<setw(10)<<b2<<setw(10)<<23.00*b2<<endl;
		total+=(23.00*a2);
		y++;
	}
	if(b3>0)
	{
		cout<<"Aurora    "<<setw(30)<<"  23.00"<<setw(10)<<b3<<setw(10)<<23.00*b3<<endl;
		total+=(23.00*b3);
		y++;
	}
	if(b4>0)
	{
		cout<<"Ariel     "<<setw(30)<<"  23.00"<<setw(10)<<b4<<setw(10)<<23.00*b4<<endl;
		total+=(23.00*b4);
		y++;
	}
	if(b5>0)
	{
		cout<<"Belle     "<<setw(30)<<"  23.00"<<setw(10)<<b5<<setw(10)<<23.00*b5<<endl;
		total+=(23.00*b5);
		y++;
	}
	if(b6>0)
	{
		cout<<"Jasmine   "<<setw(30)<<"  23.00"<<setw(10)<<b6<<setw(10)<<23.00*b6<<endl;
		total+=(23.00*b6);
		y++;
	}
	
	//Eyelash Shawl
	if(c1>0)
	{
		cout<<"Pearl Pink"<<setw(30)<<"  30.00"<<setw(10)<<c1<<setw(10)<<30.00*c1<<endl;
		total+=(30.00*c1);
		y++;
	}
	if(c2>0)
	{
		cout<<"Rose Cream"<<setw(30)<<"  30.00"<<setw(10)<<c2<<setw(10)<<30.00*c2<<endl;
		total+=(30.00*c2);
		y++;
	}
	if(c3>0)
	{
		cout<<"Peach Blush"<<setw(29)<<"  30.00"<<setw(10)<<c3<<setw(10)<<30.00*c3<<endl;
		total+=(30.00*c3);
		y++;
	}
	if(c4>0)
	{
		cout<<"Pure Peach"<<setw(30)<<"  30.00"<<setw(10)<<c4<<setw(10)<<30.00*c4<<endl;
		total+=(30.00*c4);
		y++;
	}
	if(c5>0)
	{
		cout<<"French Rose"<<setw(29)<<"  30.00"<<setw(10)<<c5<<setw(10)<<30.00*c5<<endl;
		total+=(30.00*c5);
		y++;
	}
	if(c6>0)
	{
		cout<<"Cream     "<<setw(30)<<"  30.00"<<setw(10)<<c6<<setw(10)<<30.00*c6<<endl;
		total+=(30.00*c6);
		y++;
	}
	
	//Cotton Shawl
	
	if(d1>0)
	{
		cout<<"Khaki     "<<setw(30)<<"  30.00"<<setw(10)<<d1<<setw(10)<<30.00*d1<<endl;
		total+=(30.00*d1);
		y++;
	}
	if(d2>0)
	{
		cout<<"Light Spice"<<setw(29)<<"  30.00"<<setw(10)<<d2<<setw(10)<<30.00*d2<<endl;
		total+=(30.00*d2);
		y++;
	}
	if(d3>0)
	{
		cout<<"Chocolate "<<setw(30)<<"  30.00"<<setw(10)<<d3<<setw(10)<<30.00*d3<<endl;
		total+=(30.00*d3);
		y++;
	}
	if(d4>0)
	{
		cout<<"Smoke     "<<setw(30)<<"  30.00"<<setw(10)<<d4<<setw(10)<<30.00*d4<<endl;
		total+=(30.00*d4);
		y++;
	}
	if(d5>0)
	{
		cout<<"Olive     "<<setw(30)<<"  30.00"<<setw(10)<<d5<<setw(10)<<30.00*d5<<endl;
		total+=(30.00*d5);
		y++;
	}
	if(d6>0)
	{
		cout<<"Lilac     "<<setw(30)<<"  30.00"<<setw(10)<<d6<<setw(10)<<30.00*d6<<endl;
		total+=(30.00*d6);
		y++;
	}
	
	//Pleated Shawl
	if(e1>0)
	{
		cout<<"Raindrops "<<setw(30)<<"  30.00"<<setw(10)<<e1<<setw(10)<<30.00*e1<<endl;
		total+=(30.00*e1);
		y++;
	}
	if(e2>0)
	{
		cout<<"Honeydew  "<<setw(30)<<"  30.00"<<setw(10)<<e2<<setw(10)<<30.00*e2<<endl;
		total+=(30.00*e2);
		y++;
	}
	if(e3>0)
	{
		cout<<"Brownie   "<<setw(30)<<"  30.00"<<setw(10)<<e3<<setw(10)<<30.00*e3<<endl;
		total+=(30.00*e3);
		y++;
	}
	if(e4>0)
	{
		cout<<"Black     "<<setw(30)<<"  30.00"<<setw(10)<<e4<<setw(10)<<30.00*e4<<endl;
		total+=(30.00*e4);
		y++;
	}
	if(e5>0)
	{
		cout<<"Navy      "<<setw(30)<<"  30.00"<<setw(10)<<e5<<setw(10)<<30.00*e5<<endl;
		total+=(30.00*e5);
		y++;
	}
	if(e6>0)
	{
		cout<<"Mangosteen"<<setw(30)<<"  30.00"<<setw(10)<<e6<<setw(10)<<30.00*e6<<endl;
		total+=(30.00*e6);
		y++;
	}
	
	//Printed Shawl
	if(f1>0)
	{
		cout<<"Pinky Hibiscus"<<setw(26)<<"  35.00"<<setw(10)<<f1<<setw(10)<<35.00*f1<<endl;
		total+=(35.00*f1);
		y++;
	}
	if(f2>0)
	{
		cout<<"Purple Hibiscus"<<setw(25)<<"  35.00"<<setw(10)<<f2<<setw(10)<<35.00*f2<<endl;
		total+=(35.00*e2);
		y++;
	}
	 if(f3>0)
	{
		cout<<"Peach Hibiscus"<<setw(26)<<"  35.00"<<setw(10)<<f3<<setw(10)<<35.00*f3<<endl;
		total+=(35.00*f3);
		y++;
	}
	if(f4>0)
	{
		cout<<"Brown Hibiscus"<<setw(26)<<"  35.00"<<setw(10)<<f4<<setw(10)<<35.00*f4<<endl;
		total+=(35.00*f4);
		y++;
	}
	if(f5>0)
	{
		cout<<"Grey Hibiscus "<<setw(26)<<"  35.00"<<setw(10)<<e5<<setw(10)<<35.00*e5<<endl;
		total+=(35.00*e5);
		y++;
	}
	if(f6>0)
	{
		cout<<"Mint Hibiscus "<<setw(26)<<"  35.00"<<setw(10)<<f6<<setw(10)<<35.00*f6<<endl;
		total+=(35.00*f6);
		y++;
	}
	
	//Add-on
	if(g1>0)
	{
		cout<<"Brooch (random) "<<setw(24)<<"  2.00"<<setw(10)<<g1<<setw(10)<<2.00*g1<<endl;
		total+=(2.00*g1);
		y++;
	}
	if(g2>0)
	{
		cout<<"Hijabista FaceMask (Nude)"<<setw(15)<<"21.00"<<setw(10)<<g2<<setw(10)<<21.00*g2<<endl;
		total+=(21.00*g2);
		y++;
	}
	if(g3>0)
	{
		cout<<"Hijabista FaceMask (Mint Green)"<<setw(9)<<"21.00"<<setw(10)<<g3<<setw(10)<<21.00*g3<<endl;
		total+=(21.00*g3);
		y++;
	}
	if(g4>0)
	{
		cout<<"Hijabista FaceMask (Pastel Pink)"<<setw(8)<<"21.00"<<setw(10)<<g4<<setw(10)<<21.00*g4<<endl;
		total+=(21.00*g4);
		y++;
	}
	if(g5>0)
	{
		cout<<"Inner Scarf (random)"<<setw(20)<<"10.00"<<setw(10)<<g5<<setw(10)<<10.00*g5<<endl;
		total+=(10.00*g5);
		y++;
	}
	if(g6>0)
	{
		cout<<"Ring (random)"<<setw(27)<<"5.00"<<setw(10)<<g6<<setw(10)<<5.00*g6<<endl;
		total+=(5.00*g6);
		y++;	
	}
	cout<<endl;
	cout<<setw(50)<<"Total Amount : "<<setw(10)<<total<<endl;
	tot+=total;
	
	cout<<"\nPlease press 'b' to go back\n";
	cin>>answer;
	
	if(answer=='B'||'b')
	{	
		a1=0,a2=0,a3=0,a4=0,a5=0,a6=0, b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,
		d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,e1=0,e2=0,e3=0,e4=0,e5=0,e6=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,g1=0,g2=0,g3=0,g4=0,g5=0,g6=0;
		b++;
		system("cls");
		option();	
	}
}

void totalsale()
{
		char b;
		char answer;
		
		time_t rawtime;struct tm * timeinfo;time ( &rawtime );timeinfo = localtime ( &rawtime );
		
		cout<< (asctime (timeinfo));
		cout<<"\nTotal Sales = RM"<<tot<<endl<<"Total Items Sold = "<<y<<endl;
		cout<<"\n\nPlease press 'b' to go back\n";
		cin>>answer;;
	
		if(answer=='B'||'b')
		{
			system("cls");
			option();
		}
}





















