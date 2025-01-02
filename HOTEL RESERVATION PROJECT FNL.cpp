//Hotel Reservation System: 
#include <iostream>
#include <string>
using namespace std;


class HotelReservations
{

	     
	     public:
	     	int rooms,mattress;
	     	float guests;
	     	float Rupees;
	     	
	     	HotelReservations()
	     	{
	     	
	     	   rooms;
	     	   guests;
	     	   mattress;
	     	}
	     	
};
class Guests: public HotelReservations
{
	public:
	
		void manual()
		{
			cout<<"\t\t\n ENTER THE NUMBER OF GUESTS, ROOMS AND MATTRESSES : \n\n" <<endl;
	    
		}
		void setNo_G(int g)
		{
			guests=g;
		}
		int getguests()
		{
			return guests;
		}
		void setNo_R(int r)
		{
			rooms=r;
		}
		int getrooms()
		{
			return rooms;
		}
		void setNo_M(int m)
		{
			mattress=m;
		}
		int getmattress()
		{	
		  return mattress;
    	}
    	
    	
    void displaydata()
    	{
    	cout<<Guests::getguests()<<"\tGUESTS AS PER DATA \n" <<endl;
    	cout<<Guests::getrooms()<<"\tROOMS AS PER DATA \n" <<endl;
    	cout<<Guests::getmattress()<<"\tMATTRESS AS PER DATA \n" <<endl;	
    	}
	
	
	 void AutoRes()
		{
		
    int e;
    bool validInput=false;
    start32:
    cout<<"\t\tENTER THE NUMBER OF GUESTS\n"<<endl;
    while (!validInput) 
	{
        cin>>guests;
		if (guests<=6) 
		{
            cout<<"\t\tYOUR TOTAL NUMBER OF GUESTS\n " <<guests<<endl;
            cout<<"\t\tTHE COMBINATIONS OF ROOMS FOR 6 OR LESS THAN 6 GUESTS ARE\n"<<endl;
            cout<<"\t1 :- 1 ROOM WITH MASTER BED & AND 1 MATTRESS AVAILABLE.\n"<<endl;
            cout<<"\t2 :- 2 ROOMS 3 MATTRESSES (1 EXTRA MATTRESS ON DISCOUNT CHARGES AVAILABLE).\n"<<endl;
            cout<<"\t3 :- 4 ROOMS 5 MATTRESSES AVAILABLE.\n"<<endl;
                      
            cout<<"\t\tENTER ANY NUMBER TO SELECT YOUR COMBINATION FOR ROOM RESERVATION.\n"<<endl;
                      

            while (false) 
			{
                cin>>e;

                if (e==1) 
				{
                    cout<<"\t\tYOU HAVE CHOSEN 1 : \n "<<endl;
                    cout<<"\t\tYOUR TOTAL CHARGES AS PER CURRENT RATES ARE: \n (ALL CHARGES ARE SET TO PER NIGHT).\n "<<endl;
                    cout<<"\t\t-ROOM = 6000.\n \t\t-MATTRESS = 500. \n\n"<<endl;
                    cout<<"\t\tCHARGES FOR 1ST COMBINATION: RP 6500 PER NIGHT + (TAX 15%). \n"<<endl;
                    break;
                } 
				else if (e==2) 
				{
                    cout<<"\t\tYOU HAVE CHOSEN 2 : \n "<<endl;
                    cout<<"\t\tYOUR TOTAL CHARGES AS PER CURRENT RATES ARE: \n (ALL CHARGES ARE SET TO PER NIGHT).\n "<<endl;
                    cout<<"\t\t-ROOM = 6000.\n \t\t-MATTRESS = 500. \n\n "<<endl;
                    cout<<"\t\tCHARGES FOR 2ND COMBINATION: RP 13500 PER NIGHT + (TAX 15%). \n "<<endl;
                    break;
                } 
				else if (e==3) 
				{
                   cout << "\t\tYOU HAVE CHOSEN 3 : \n "<<endl;
                   cout << "\t\tYOUR TOTAL CHARGES AS PER CURRENT RATES ARE: \n (ALL CHARGES ARE SET TO PER NIGHT).\n "<<endl;
                   cout << "\t\t-ROOM = 6000\n \t\t-MATTRESS = 500 \n\n "<<endl;
                   cout << "\t\tCHARGES FOR 3RD COMBINATION: RP 26000 PER NIGHT + (TAX 15%). \n "<<endl;
                   break;
                }
				else 
				{
                    cout << "\t\t\" INVALID SELECTION  RE-ENTER THE NUMBER FROM 1 2 OR 3.\"\n"<<endl;
                }
                }

            validInput=true;
        }
		 else if (guests >= 10)
		  {
            cout << "\t\t SORRY WE CANNOT ACCOMODATE THIS GUESTS AS WE HAVE OTHER RESERVATIONS TOO. \n"<<endl;
            goto start32;
            break;
        } 
		else
		{
          cout << "\t\t\" INVALID SELECTION  RE-ENTER THE NUMBER FROM 1 2 OR 3.\"\n"<<endl;
        }
    }

  }
};
class Charges: public Guests
{
	public:
	    float mattress=500;
	    float rooms=6000;
	    
	     void calculateCharges(int combination)
    {
        float taxRate=0.15; // 15% tax rate

        float totalCharges=0;

        if (combination==1)
        {
            totalCharges=rooms+mattress+(rooms+mattress)*taxRate;
        }
        else if (combination==2)
        {
            totalCharges=2*rooms+3*mattress+(2*rooms+3*mattress)*taxRate;
        }
        else if (combination==3)
        {
            totalCharges=4*rooms+5*mattress+(4*rooms+5*mattress)*taxRate;
        }

        cout<<"TOTAL CHARGES FOR COMBINATION : "<<combination<<" RP "<<totalCharges<< " PER NIGHT (including tax)."<<endl;
    }
    
    
	     
};
 class Payment
 {
 	public:
 		void pay_1()
 		{
 			int cn,p;
 			cout<<"ENTER CARD NUMBER "<<endl;
 			cin>>cn;
 		    cout<<"ENTER PIN "<<endl;
 			cin>>p;
 		    cout<<"PAYMENT SUCCESSFUL"<<endl;
 			
 			
		 }
 };

int main()
{   int tr ,tm,TT;
    int S;
	int g,m,r;
    string p,w;
   	HotelReservations H;
   	Guests G;
   	Charges C;
   	Payment P;
	cout<<" ______________________________________________________________________________________________THE HOTEL RESERVATIONS ARE OPEN___________________________________________________________________________________\n"<<endl;
   
    cout<<"\t\t RESERVATION FACILITIES : \n 1: MANUAL OR 2: AVAILABILITY \n PRESS 1 OR 2." <<endl;
    start02:
    cin>>S;
    switch(S)
    {
    	case 1:
    		G.manual();
    	//________________________________________________________________	
    		cout<<"ENTER THE NO OF GUESTS : SAVED.\n"<<endl;
    		cin>>g;
    		G.setNo_G(g);
        	cout<< G.getguests()<<" GUESTS  \n\n"<<endl;
        	
        	
        //_________________________________________________________________	
        	cout<<"ENTER THE NO OF MATTRESSES\n RP 500 PER MATTRESS "<<endl;
        	cin>>m;
    		G.setNo_M(m);
        	cout<< G.getmattress()<<" MATTRESS : SAVED. \n\n"<<endl;
        	tm=m*500;
        //_________________________________________________________________	
        	cout<<"ENTER THE NO OF ROOMS \n RP 6000 PER ROOM "<<endl;
        	cin>>r;
    		G.setNo_R(r);
    		cout<< G.getrooms()<<" ROOMS : SAVED. \n\n" <<endl;
    		tr=r*6000;
    	//_________________________________________________________________
		    cout<<"THANK YOU FOR ENTRING DATA NOW SHALL WE PROCEED TO PAY ?\n TYPE : YES OR yes \n   Or   NO OR no  \n\n"<<endl;
		    G.displaydata();
		   
        //___________________________________________________________________________________________________________________________________________
		  start01:
		    cin>>p;                                                                         // simple if start (within switch)
           if (p=="yes" || p=="YES")                                                       
            {
            cout<<" YOUR TOTAL COST FOR MATTRESS IS : "	<<tm<<endl;
            cout<<"YOUR TOTAL COST FOR ROOMS IS : "<<tr<<endl;
            TT=tm+tr;	
            cout<<"TOTAL COST IS : "<<TT<<endl;  
            P.pay_1();
			                                                               
            break;
            }
        //_____________________________________________________________ 
            if (p=="NO" || p=="no")
            {
           	
          	cout<<" DO YOU WANT TO EXIT WEBSITE"<<endl;
        //_________________________________________________________ 
            start03:
		    cin>>w;                                                                         //nested if start
		  	if(w=="YES"|| w=="yes")
           	{
           		cout<<"THANKYOU FOR SURVEYING OUR WEBSITE TAKE CARE"<<endl;
           		break;
		    }
			  if (w=="NO" || w=="no")  
            {
            cout<<"OK"<<endl;
            cout<<"SO SHALL WE PROCEED TO PAY?"<<endl;
            goto start01;                                                                         
            }
			 else 
			 {
			   	cout<<"\t\t \"INVALID...TYPE AGAIN AS PER INSTRCUTIONS\" \n "<<endl;
			   	goto start03;                                                              //nested if end
			 }
            break;//___________________________________________________________________________//break for case 1 //__________________________
            }                                                                                    
        //____________________________________________________________
		  
			else 
			{
			cout<<"\t\t \"INVALID...TYPE AGAIN AS PER INSTRCUTIONS\" \n "<<endl;
			goto start01;
			}
         	break;
           
		   
		    case 2:
		    G.AutoRes();
		    int combination;
            cout << "ENTER THE NUMBER OF THE COMBINATION YOU HAVE CHOSEN: ";
             cin >> combination;

            if (combination >=1 && combination <=3)
            {
            C.calculateCharges(combination); 
            P.pay_1();
            }
            else
            {
            cout<<"INVALID COMBINATION NUMBER"<<endl;
            }

        
        break;
		    
				
		break;
    	default:
    		{
    			cout<<"\tINVALID SELECTION \n"<<endl;
    			cout<<"\tPRESS ONLY 1 OR 2 \n"<<endl;
    			goto start02;
			}
	}
   
     return 0;
}


