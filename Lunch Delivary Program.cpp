#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
void admin();
void menu();
void delivery();
void bill();
void feedback();
void contact();
float b;
int main()
{	int main_choice;
	cout<<"\t\t\tWELCOME TO FODDIE FOOD."<<endl;
	cout<<"\t\t\t\t\tA PLACE, PERFECT FOR FOOD LOVERS."<<endl;
	cout<<"Press 1 to enter  menu."<<endl;
	cout<<"Press 2 to contact us."<<endl;
	cout<<"Press 3 to exist."<<endl;
	
	cin>>main_choice;
	switch(main_choice)
	{
		case 1:
		menu();
			delivery();
			bill();
			feedback();
			break;
		case 2:
		contact();
		break;
		case 3:
		return 0;
	}

return 0;
}
void menu()
{
	int choice;
	cout<<"\t\t\tPress 1 for Fast Food"<<endl;
	cout<<"\t\t\tPress 2 for Desi Food"<<endl;
	cout<<"\t\t\tPress 3 for Cold Drink"<<endl;
	cout<<"\t\t\tPress 4 for Deals"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
		int ch;
		cout<<"\t\t\tDISH"<<setw(21)<<"PRICE"<<endl;
		cout<<"\t\t\tPizza"<<setw(18)<<"1400"<<endl;
		cout<<"\t\t\tShuwarma"<<setw(15)<<"80"<<endl;
		cout<<"\t\t\tZinger Burger"<<setw(10)<<"250"<<endl;
		cout<<"\t\t\tMaccronies"<<setw(12)<<"100"<<endl;
		cout<<"Press 1 for Pizza"<<endl<<"Press 2 for Shuwarma"<<endl<<"Prrss 3 for Zinger Burger"<<endl<<"Press 4 for Maccromies"<<endl;
		cin>>ch;
		
	if (ch==1)
	{	int c;
		cout<<"How many Pizzas You wanna buy?"<<endl;
		cin>>c;
		b=1400*c;
	}
	if (ch==2)
	{
		int c;
		cout<<"How many Shuwarmas you wanna buy?"<<endl;
		cin>>c;
		b=80*c;
	}
	if (ch==3)
	{
		int c;
		cout<<"How many Zinger Burgers you wanna buy?"<<endl;
		cin>>c;
		b=250*c;
		
	}
	if (ch==4)
	{
		int c;
		cout<<"How many plates of Maccronies you wanna buy?"<<endl;
		cin>>c;
		b=100*c;
	}
	
	break;}
	case 2:
	{
		int ch;
		cout<<"\t\t\tDish"<<setw(16)<<"Price"<<endl;
		cout<<"\t\t\tBiryani"<<setw(11)<<"140"<<endl;
		cout<<"\t\t\tQorma"<<setw(13)<<"150"<<endl;
		cout<<"\t\t\tHaleem"<<setw(12)<<"150"<<endl;
		cout<<"\t\t\tDal Mash"<<setw(10)<<"130"<<endl;
		cout<<"\t\t\tDal channa"<<setw(8)<<"130"<<endl;
		cout<<"Press 1 for Biryani"<<endl<<"Press 2 for Qorma"<<endl<<"Prrss 3 for Haleem"<<endl<<"Press 4 for Dash Mash"<<endl<<"Press 5 for Dal Channa"<<endl;
		cin>>ch;
		if (ch==1)
		{	
			int c;
			cout<<"How many plates of Biryani you wanna have?"<<endl;
			cin>>c;
			b=140*c;
		}
		if (ch==2)
		{
			int c;
			cout<<"How many Plates of qorma you wanna buy?"<<endl;
			cin>>c;
			b=150*c;
		}
		if (ch==3)
		{
			int c;
			cout<<"How many Plates of Haleem yu wanna buy?"<<endl;
			cin>>c;
			b=150*c;
		}
		if (ch==4)
		{
			int c;
			cout<<"How many plates of Dal Mash you wanna buy?"<<endl;
			cin>>c;
			b=130*c;
		}
		if (ch==5)
		{	
			int c;
			cout<<"How many plates of Dal Channa you wanna buy?"<<endl;
			cin>>c;
			b=130*c;}
		break;}
		case 3:
	{
			int ch;
			cout<<"\t\t\tDrinks"<<setw(11)<<"Price"<<endl;
			cout<<"\t\t\tPepsi"<<setw(10)<<"100"<<endl;
			cout<<"\t\t\t7up"<<setw(12)<<"100"<<endl;
			cout<<"\t\t\tMirinda"<<setw(8)<<"100"<<endl;
			cout<<"Press 1 for Pepsi"<<endl<<"Press 2 for 7up"<<endl<<"Press 3 for Mirinda"<<endl;
			cin>>ch;
			if (ch==1)
			{
				int c;
				cout<<"How many Bottles you wanna buy?";
				cin>>c;
				b= 100*c;
			}
			if (ch==2)
			{
				int c;
				cout<<"How many Bottles you wanna buy?";
				cin>>c;
				b=100*c;
			}
			if (ch==3)
			{
				int c;
				cout<<"How many Bottles you wanna buy?" ;
				cin>>c;
				b=100*c;
			}
		
	
	break;}
	case 4:
		{
		int ch;
		cout<<"2 extra large shuwarmas and one cold drink in Rs230"<<endl;
		cout<<"Pizza+Zinger Burger+Cold drink in Rs1500."<<endl;
		cout<<"Pizza+Shuwarma+Fries in Rs1400"<<endl;
		cout<<"Press 1 for 1st deal"<<endl<<"Press 2 for 2nd deal"<<endl<<"Press 3 for Third deal"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			{
			cout<<"Your bill is Rs230. "<<endl;
			b=230;
			break;}
		case 2:
			{
				cout<<"Your bill is Rs1500. "<<endl;
			b=1500;
			break;}
		case 3:
			{
				cout<<"Your bill is Rs1400. "<<endl;
			b=1400;
			break;}
			}
		}
	}
}

void delivery()
{
	string location;
	cout<<"Delivery Charges = Rs250:"<<endl;
	cout<<"Enter Your Location.";
	cin>>location;
	getline (cin,location);
	cout<<endl<<endl;
}
void bill()
{	string t="TA8267",h="HAM007",i;
float m,n;
	cout<<"Enter Voucher.";
	cin>>i;
	if (i==t||i==h)
	{
	cout<<"Congratulations vouchers entered successfully you get 50% discount."<<endl;
	cout<<"Yours standard bill is Rs"<<b<<endl;
	b=b/2;
	cout<<"Your bill after voucher is Rs " << b<<endl;
	cout<<"Delivery charges = Rs250"<<endl;
	cout<<"Bill after delivery charges is Rs" << b+250 <<endl<<endl;
	}
	else
	{
	cout<<"Wrong voucher You get a fine of Rs 150 Anni diya ae mazak ae."<<endl;
	cout<<"Yours standard bill is Rs"<<b<<endl;
	cout<<"Delivery charges = Rs250"<<endl;
	cout<<"Bill after delivery charges and fine is Rs" << b+250+150 <<endl<<endl;}
	 
}
void feedback()
{
	int feedback;
	cout<<"Please must give us feedback. Your feedback will help us alot in our service"<<endl<<endl;
	cout<<"How much you like our service on scale of 1-5 with one being the highest? " ;
	cin>>feedback;
	if (feedback<=3)
	{
		cout<<"Thank you!";
		
	}
	else if (feedback==4)
	{
		string suggestion;
		cout<<"It looks you aren't much satisfied with our services Please give us suggestions how we can improve our service."<<endl;
		cin>>suggestion;
		cout<<"Thanks for your suggestion we will surely try to work according to your suggestion to make our service good."<<endl;
	}
	else if (feedback==5)
	{
		string suggestion;
		cout<<"It looks you aren't much satisfied with our services Please give us suggestions how we can improve our service."<<endl;
		cin>>suggestion;
		cout<<"Thanks for your suggestion we will surely try to work according to your suggestion to make our service good."<<endl;
	}
	}
	void contact()
	{cout<<"Email: foodiefood12@gmail.com"<<endl;
	cout<<"Phone Number: 090078601"<<endl;
	}
	
