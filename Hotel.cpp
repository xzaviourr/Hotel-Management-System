#include <bits/stdc++.h>
#include<conio.h>
#include "Hotel.h"
using namespace std;

    Hotel::Hotel()
    {
        USERNAME="kapin";
        PASSWORD="kapin";
    }
	void Hotel::welcomescreen()
	{
	system("cls");
	cout<<endl<<endl<<endl<<endl;
	cout<<"                           HOTEL MANAGEMENT SYSTEM  "<<endl;
	cout<<"                               OOPS PROJECT"<<endl;
	cout<<"             ____________________________________________________  "<< endl;
	cout<< endl<< endl << endl<< endl;
	cout<<"                   SUBMITTED BY:                 SUBMITTED TO:     "<<endl;
    cout<<"                     Anshul (2018BCS-09)           Dr.Santosh Rathore   "<<endl;
	cout<<"                     Saniya Arora(2018BCS-046)                    "<<endl;
	cout<<"                     Kapin(2018BCS-025)                    "<<endl;
	cout<<  endl << endl;
	cout<<"              Press Enter to continue...." << endl << endl << endl << endl;
	getch();
	}
	void Hotel::loginscreen()
	{
		//time
		system("cls");


		cout<<  endl << endl << endl<< endl;
	    cout<<"                            LOGIN SCREEN\n";
		cout<<"             ____________________________________________________  "<< endl;
		cout<<"                          1.Administrator Login\n";
		cout<<"                          2.customer Login\n";
		cout<<"                          3.Exit\n";
		cout<<"\n\n\n";
		cout<<"Enter Choice::   ";
		cin>>choice;
		switch(choice)
		{
			case'1':
				system("cls");
				admin();
				break;
			case '2':
				//search_customer();
				break;
			case'3':
				exit(0);
				break;
			default:
				cout<<"wrong choice entered";
		}
	}
	void Hotel::admin()
	{
		//time
		system("cls");
		string username,password;
		cout<<"                          ADMINISTRATOR LOGIN\n";
		cout<<"             ____________________________________________________  "<< endl;
		cout<<endl<<endl<<endl;
		cout<<"                UserName: ";
		cin>>username;
		if(username==USERNAME)
		{
			cout<<"                Password: ";
			char c=getch();
			int count=PASSWORD.size();
            count--;
			while(count)
			{
				cout<<"*";
				password.push_back(c);
				c=getch();
				count--;
			}
			cout<<endl;
			if(password==PASSWORD)
			{
				adminpage();
			}
			else
			{
				cout<<"You entered wrong password.";
				loginscreen();
		    }
		}
		else
		{
			cout<<"Incorrect Username";
			loginscreen();
		}

	}
	void Hotel::adminpage()
	{
		system("cls");
		cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL MANAGEMENT SYSTEM "<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl;
		cout<<"\n\t\t\t  1.Accomodation"<<endl;
		cout<<"\n\t\t\t  2.Restaurant"<<endl;
		cout<<"\n\t\t\t  3.Employee"<<endl;
		cout<<"\n\t\t\t  4.Facilities Available"<<endl;
		cout<<"\n\t\t\t  5.Inventory"<<endl;
 		cout<<"Enter your choice:: ";
 		int choice;
 		cin>>choice;
 		switch(choice)
 		{
 			case 1:
 				acc_page();
 				break;
 			case 2:
 				resto_page();
 				break;
 			case 3:
 				emplo_page();
 				break;
 			case 4:
 				facavail_page();
 				break;
 			case 5:
 				inven_page();
 				break;
 			default:
				cout<<"wrong choice entered";
 		}
	}
	void Hotel::acc_page()
	{
		cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL NAME"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
	    cout<<"1.Add Customer \t\t\t 2.Check Out Customer\n";

	}


