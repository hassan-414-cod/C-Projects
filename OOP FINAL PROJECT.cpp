#include <iostream>
#include <string>
#include <random>
using namespace std;
class ServiceProvider
{
	public:
	int choice;
	float subscription;
	float installation;
	float total;
	void payment()
	{
		int card;
		string name;
		int CVV;
		cout << "ENTER THE CARD NUMBER" << endl;
		cin >> card;
		switch (card)
		{
		case 123456:
			cout << "ENTER THE CVV CODE " << endl;
			cin >> CVV;
			switch (CVV)
			{
			case 123:
				cout << "ENTER YOUR NAME" << endl;
				cin >> name;
				if (name == "HAMAS")
				{
					cout << "SUCCESSFUL" << endl;
				}
				else
				{
					cout << "INVALID NAME" << endl;
				}
				break;
			default:
				cout << "INVALID NAME" << endl;
			}
			break;
		default:
			cout << "INVALID";
		}
	}	
};
class PTCL:public ServiceProvider
{
	public:
	 int a,b,c,abc;
	 void ptcl()
	 {	
		cout<<"\t \t \t \t \t \t \t \t \t \t \t TAHNKYOU FOR CHOOSING PTCL \n\n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both"<<endl;
	 	cin>>abc;
	 	if (abc == 1)
	 	{
	    start:
	 	cout << "Only Internet Packages: \n\n 1.Weekly \n 2.Monthly \n 3.Yearly " << endl;
		cin>>a;	
	 	switch (a)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 800;
				installation = 1000;
				total = 1800;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 3200;
				installation = 1000;
				total = 4200;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "As you have choosen our annual package, you're eligable for our promotion which is as follows: \nYou will be getting this package for a all time low price of Rs.30000/- Only";
				cout << "\n\nYour total payable amount is: " << endl;
				subscription = 30000;
				installation = 1000;
				total = 31000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			default:
	            cout << "INVALID SELECTION" << endl;
		        goto start;
            }
        }
        if (abc == 2)
		{
			cout << "Only Television Packages: \n\n 1.Weekly:\n 2.Monthly:\n 3.Yearly:" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 500;
				installation = 1000;
				total = 1500;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 2000;
				installation = 1000;
				total = 3000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 24000;
				installation = 1000;
				total = 25000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			default:
	        {
	            cout << "INVALID SELECTION " << endl;
		        //goto start;
		        break;
	        }  
			}
	    }
	    if (abc == 3)
	    {
	    	cout << "Collection Package: \n 1.Monthly:" << endl;
			cin >> c;
			switch (c)
			{
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 4500;
				installation = 2000;
				total = 6000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			}
		}
    }
};
class TransWorld:public ServiceProvider{
	public:
		int d,e,def;
		void Transworld()
		{
		cout << "\t \t \t \t \t \t \t \t \t \t \tTHANK YOU FOR CHOOSING:\tTRANSWORLD \n\n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both "<<endl;
		cin >> def;
		if (def == 1)
		{
			cout<<"Only Internet Packages: \n\n 1.Weekly:Rs.875/- \n 2.Monthly:Rs.3500/- \n 3.Yearly:Rs.42,000/- "<<endl;
			cin>>d;
			switch (d)
			{
			case 1:
				cout<<"You have choosen weekly"<<endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: \n Your total payable amount is: "<< endl;
				subscription = 749;
				installation = 10000;
				total = 10749;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: \n Your total payable amount is: "<< endl;
				subscription = 2996;
				installation = 10000;
				total = 12996;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: "<< endl;
				subscription = 35952;
				installation = 10000;
				total = 45952;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			}
		}
		if (def == 2)
		{
		
			cout << "Only Television Packages: \n\n 1.Weekly:Rs.299/- \n 2.Monthly:Rs.1196/- \n 3.Yearly:Rs.14,352/-" << endl;
			cin >> e;
			switch (e)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 299;
				installation = 1599;
				total = 1898;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: " << endl;
				subscription = 1196;
				installation = 1599;
				total = 2795;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "Your total payable amount is: \n Subscription: " << endl;
				subscription = 14352;
				installation = 1599;
				total = 15951;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
	        }
	    }
		if (def == 3)
		{
		    cout << "Sorry for the inconvenience, Transworld as for now does not offer combination packages of Internet and Television to everyone but you can visit us and we might make a custom package for you." << endl;
			//goto start;
			//break;		
		}
        }
 };
 class StormFibre:public ServiceProvider{
 	public:
 		int f,g,h,fgh;
 		void Stormfibre()
 		{
 		    cout << "\t \t \t \t \t \t \t \t \t \t \t THANK YOU FOR SELECTING:\tSTORMFIBER \n\n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both " << endl;
		cin >> fgh;
		if (fgh==1)
		{		
			cout << "Only Internet Packages: \n\n 1.Weekly:Rs.1250/- \n 2.Monthly:Rs.5000/- \n 3.Yearly:Rs.60,000/- " << endl;
			cin >> f;
			switch (f)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 1250 \n Installation: 3500 \n Total Amount= Rs.4750/-" << endl;
				subscription = 1250;
				installation = 3500;
				total = 4750;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 5000 \n Installation: 3500 \n Total Amount= Rs.8500/-" << endl;
				subscription = 5000;
				installation = 3500;
				total = 8500;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "LIMITED TIME OFFER \n Subscribe to our yearly package and get Free installation & Free Netflix subscription for an entire year. /n StormFibre and Nextflix damn thats a lethal combo /n Your total payable amount is: " << endl;
				subscription = 60000;
				installation = 'FREE';
				total = 60000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			
			//break;
			default:
				{
					cout<<"INVALID SELECTION"<<endl;
				}
		    }
		}
		if (fgh==2)
		{
			cout << "Only Television Packages: \n\n 1.Weekly:Rs.700/- \n 2.Monthly:Rs.2800/- \n 3.Yearly:Rs.33,600/-" << endl;
			cin >> g;
			switch (g)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 700;
				installation = 1000;
				total = 1700;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 2800;
				installation = 1000;
				total = 3800;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 33600;
				installation = 1000;
				total = 34000;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			default:
				{
					cout<<"INVALID SELECTION"<<endl;
				}
			}
			//break;
		}
		if (fgh==3)
		{
			cout << "Collection Package: \n 1.Monthly:Rs.6499/-" << endl;
			cin >> h;
			switch (h)
			{
			case 1:
				cout << "You have choosen monthly" << endl;
				cout << "\nYour total payable amount is: " << endl;
				subscription = 6499;
				installation = 4500;
				total = 10999;
				cout<<"Subscription Charges = "<<subscription<<"\n"; 
				cout<<"Installation Charges = "<<installation<<"\n"; 
				cout<<"Total Charges = "<<total<<"\n";
				break;
			default:
				{
					cout<<"INVALID SELCTION"<<endl;
				}
			}
		}
        } 
 };
 int main()
 {
    PTCL P;
 	TransWorld T;
 	StormFibre F;
    int S;
 	cout<<"\t \t \t \t \t \t \t \t \t \t \t PLEASE SELECT ANY OF THE SERVICE PROVIDER : \n\n \t1.PTCL \n \t2.TTRANSWORLD \n \t3.STORMFIBER "<<endl;
 	cin>>S;
 	switch(S)
 	{
 		case 1:
 			P.ptcl();
 			break;
 		case 2:
		    T.Transworld();
		    break;
		case 3:
		    F.Stormfibre();
			break;   
		    default:
	        {
	            cout << "INVALID SELECTION" << endl;
		    }
 	}
 	int y;
	cout<<"\n\nAs you have choosen you're desired package we are gonna redirect you to online payment option \n Press 1 = Online Payment \n Press 2 = Generate an PSID for offline payment"<<endl;
 	cin>>y;
 	if (y==1)
 	{
 		F.payment();
	}
	if (y==2)
	{
		random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dis(1, 100);
    for (int i = 0; i < 5; ++i) 
	{
        int randomNum = dis(gen);
        cout << randomNum;
    }
	}

return 0;
}