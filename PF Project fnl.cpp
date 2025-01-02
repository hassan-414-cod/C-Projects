#include <iostream>
using namespace std;
int main()
{
	int choise = 0, a, b, c, d, e, f, g, h, i, j, k, l;
	long int card;
	int pin = 0;
	int CVV = 0;
	string name;
	cout << "Choose your lifestyle by choosing best internet and Tv service Providers. Here are few best providers. We will assure you the best service.\n So lets get started, Press Numbers 1,2,3 and chose your Tv network. \n 1.PTCL \n 2.Transworld \n 3.StormFiber " << endl;
	cin >> choise;
	// 1=PTCL;
	// 2=Transworld;
	// 3=StormFiber;
	switch (choise)
	{
	case 1:
		cout << "Thank You for choosing PTCL \n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both " << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Only Internet Packages: \n 1.Weekly:Rs.800/- \n 2.Monthly:Rs.3200/- \n 3.Yearly:Rs.38,400/- " << endl;
			cin >> b;
			switch (b)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 800 \n Installation: 1000 \n Total Amount= Rs.1800/-" << endl;
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 3200 \n Installation: 1000 \n Total Amount= Rs.4200/-" << endl;
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "As you have choosen our annual package, you're eligable for our promotion which is as follows \n You will be getting this package for a all time low price of Rs.30000/- Only";
				cout << "Your total payable amount is: \n Subscription: 30000 \n Installation: 1000 \n Total Amount= Rs.31,000/-" << endl;
				break;
			}
			break;
		case 2:
			cout << "Only Television Packages: \n 1.Weekly:Rs.500/- \n 2.Monthly:Rs.2000/- \n 3.Yearly:Rs.24,000/-" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 500 \n Installation: 1000 \n Total Amount= Rs.1500/-" << endl;
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 2000 \n Installation: 1000 \n Total Amount= Rs.3000/-" << endl;
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "Your total payable amount is: \n Subscription: 24000 \n Installation: 1000 \n Total Amount= 25,000/-" << endl;
				break;
			}
			break;
		case 3:
			cout << "Collection Package: \n 1.Monthly:Rs.4500/-" << endl;
			cin >> c;
			switch (c)
			{
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 4500 \n Installation: 2000 \n Total Amount= Rs.6000/-" << endl;
				break;
			}
			break;
		}
		break;
	default:
	{
		cout << "Invalid Selection" << endl;
		break;
	}
	goto end;
	case 2:
		cout << "Thank You for choosing Transworld \n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both " << endl;
		cin >> e;
		switch (e)
		{
		case 1:
			cout << "Only Internet Packages: \n 1.Weekly:Rs.875/- \n 2.Monthly:Rs.3500/- \n 3.Yearly:Rs.42,000/- " << endl;
			cin >> f;
			switch (f)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: \n Your total payable amount is: \n Subscription: 749 \n Installation: 10000 \n Total Amount= Rs.10,749/-" << endl;
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: \n Your total payable amount is: \n Subscription: 2996 \n Installation: 10000 \n Total Amount= Rs.12,996/-" << endl;
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "We have a special offer for our new customers, now get high speed flash fiber internet for discounted price: \n Your total payable amount is: \n Subscription: 35,952 \n Installation: 10000 \n Total Amount= Rs.45,952/-" << endl;
				break;
			}
			break;
		case 2:
			cout << "Only Television Packages: \n 1.Weekly:Rs.299/- \n 2.Monthly:Rs.1196/- \n 3.Yearly:Rs.14,352/-" << endl;
			cin >> g;
			switch (g)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 299 \n Installation: 1599 \n Total Amount= Rs.1898/-" << endl;
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 1196 \n Installation: 1599 \n Total Amount= Rs.2795/-" << endl;
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "Your total payable amount is: \n Subscription: 14,352 \n Installation: 1599 \n Total Amount= 15,951/-" << endl;
				break;
			}
			break;
		case 3:
			cout << "Sorry for the inconvenience, Transworld as for now does not offer combination packages of Internet and Television to everyone but you can visit us and we might make a custom package for you." << endl;
			break;
		default:
			cout << "Invalid Selection" << endl;
		}
		break;
	case 3:
		cout << "Thank You for choosing StormFiber \n Select any \n 1.Only Internet \n 2.Only TV service \n 3.Both " << endl;
		cin >> i;
		switch (i)
		{
		case 1:
			cout << "Only Internet Packages: \n 1.Weekly:Rs.1250/- \n 2.Monthly:Rs.5000/- \n 3.Yearly:Rs.60,000/- " << endl;
			cin >> j;
			switch (j)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 1250 \n Installation: 3500 \n Total Amount= Rs.4750/-" << endl;
				break;
			case 2:
				cout << "You have choosen Monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 5000 \n Installation: 3500 \n Total Amount= Rs.8500/-" << endl;
				break;
			case 3:
				cout << "You have choosen Yearly" << endl;
				cout << "LIMITED TIME OFFER \n Subscribe to our yearly package and get Free installation & Free Netflix subscription for an entire year. /n StormFibre and Nextflix damn thats a lethal combo /n Your total payable amount is: \n Subscription: 60,000 \n Installation: FREE \n Total Amount= Rs.60,000/-" << endl;
				break;
			}
			break;
		case 2:
			cout << "Only Television Packages: \n 1.Weekly:Rs.700/- \n 2.Monthly:Rs.2800/- \n 3.Yearly:Rs.33,600/-" << endl;
			cin >> k;
			switch (k)
			{
			case 1:
				cout << "You have choosen weekly" << endl;
				cout << "Your total payable amount is: \n Subscription: 700 \n Installation: 1000 \n Total Amount= Rs.1700/-" << endl;
				break;
			case 2:
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 2800 \n Installation: 1000 \n Total Amount= Rs.3800/-" << endl;
				break;
			case 3:
				cout << "You have choosen yearly" << endl;
				cout << "Your total payable amount is: \n Subscription: 33,600 \n Installation: 1000 \n Total Amount= 34,000/-" << endl;
				break;
			}
			break;
		case 3:
			cout << "Collection Package: \n 1.Monthly:Rs.6499/-" << endl;
			cin >> l;
			switch (l)
			{
			case 1:
				cout << "You have choosen monthly" << endl;
				cout << "Your total payable amount is: \n Subscription: 6499 \n Installation: 4500 \n Total Amount= Rs.10,999/-" << endl;
				break;
			}
			break;
		default:
		{
			cout << "Invalid Selection" << endl;
			goto end;
		}
		}
	}
	end:
		cout << "Enter card number" << endl;
		cin >> card;
		switch (card)
		{
		case 123456:
			cout << "Enter Your CVV code" << endl;
			cin >> CVV;
			switch (CVV)
			{
			case 123:
				cout << "Enter your Full name" << endl;
				cin >> name;
				if (name == "uzma")
				{
					cout << "Successful" << endl;
				}
				else
				{
					cout << "Invalid name" << endl;
				}
				break;
			default:
				cout << "Invalid" << endl;
			}
			break;
		default:
			cout << "invalid";
		}
		return 0;
}