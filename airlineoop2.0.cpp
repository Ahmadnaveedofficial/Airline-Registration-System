
// Airline Registration System



#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void mainMenu();



class Management
{
    public:
    
        Management()
        {
            mainMenu();

        }
    
};

class Details
{
    public:
      static string name, gender;
      int phone;
      int age;
      string add;
      static int cId;
      char arr[100];

       void information()
       {
        cout<<"\nEnter the Customer ID : ";
        cin>>cId;
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\n Enter the age : ";
        cin>>age;
        cout<<"\n Address : ";
        cin>>add;
        cout<<"\n Gender :";
        cin>>gender;
        cout<<" Your details are saved with us\n"<<endl;

       }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges ;

    void flights()
    {
           string flightN[]={"Dubai","Canadia","UK","Australia","USA","Europe"};
           for(int a = 0; a<6 ; a++)
           {
             cout<<(a+1)<<" . flight to"<<flightN[a]<<endl;

           }
           cout<<"\nWelcome to Airlines!"<<endl;
           cout<<"Press there the number of country of which want to book flight:";
           cin>>choice;

           switch (choice)
           {
           case 1 :
           {
             cout<<"_______________Welcome to Dubai Emirates_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. DUB-498"<<endl;
              cout<<"\t08-12-2024 7:40PM 4hrs Rs.14000"<<endl;
              cout<<"2. DUB-658"<<endl;
              cout<<"\t09-12-2024 9:40PM 5hrs Rs.13500"<<endl;
              cout<<"3. DUB-508"<<endl;
              cout<<"\t08-12-2024 10:40PM 6hrs Rs.12500"<<endl;

              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=14000;
                cout<<"\nYou have successfully booked a flight DUB-498"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else if (choice1==2)
              {
                charges=13500;
                cout<<"\nYou have successfully booked a flight DUB-658"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
               else if (choice1==3)
              {
                charges=12500;
                cout<<"\nYou have successfully booked a flight DUB-508"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }

           }
           case 2:
           {
              cout<<"_______________Welcome to Canadian Airlines_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. CA-198"<<endl;
              cout<<"\t22-01-2024 5:40AM 16hrs Rs.34000"<<endl;
              cout<<"2. CA-289"<<endl;
              cout<<"\t23-12-2024 9:40PM 20hrs Rs.33500"<<endl;
              cout<<"3. CA-208"<<endl;
              cout<<"\t26-12-2024 12:40AM 23hrs Rs.32500"<<endl;

              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=34000;
                cout<<"\nYou have successfully booked a flight CA-198"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else if (choice1==2)
              {
                charges=33500;
                cout<<"\nYou have successfully booked a flight CA-289"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
               else if (choice1==3)
              {
                charges=32500;
                cout<<"\nYou have successfully booked a flight CA-208"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }
           }
           case 3:
           {
              cout<<"_______________Welcome to UK Airways_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. UK-798"<<endl;
              cout<<"\t09-12-2024 7:40PM 14hrs Rs.44000"<<endl;
              
              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=44000;
                cout<<"\nYou have successfully booked a flight UK-798"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
             
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }
           }

           case 4 :
           {
               cout<<"_______________Welcome to US Airways_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. US-578"<<endl;
              cout<<"\t25-02-2024 5:40AM 18hrs Rs.94000"<<endl;
              cout<<"2. US-289"<<endl;
              cout<<"\t23-12-2024 9:40PM 20hrs Rs.93500"<<endl;
              cout<<"3. US-208"<<endl;
              cout<<"\t26-12-2024 12:45AM 21hrs Rs.82500"<<endl;

              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=94000;
                cout<<"\nYou have successfully booked a flight US-578"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else if (choice1==2)
              {
                charges=93500;
                cout<<"\nYou have successfully booked a flight US-289"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
               else if (choice1==3)
              {
                charges=82500;
                cout<<"\nYou have successfully booked a flight US-208"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }
           }
           case 5 :
           {
              cout<<"_______________Welcome to Australian Airlines_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. AS-898"<<endl;
              cout<<"\t22-01-2024 5:40AM 16hrs Rs.64000"<<endl;
              cout<<"2. AS-889"<<endl;
              cout<<"\t23-12-2024 9:40PM 20hrs Rs.63500"<<endl;
              cout<<"3. AS-908"<<endl;
              cout<<"\t26-12-2024 12:40AM 23hrs Rs.62500"<<endl;

              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=64000;
                cout<<"\nYou have successfully booked a flight AS-898"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else if (choice1==2)
              {
                charges=63500;
                cout<<"\nYou have successfully booked a flight AS-889"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
               else if (choice1==3)
              {
                charges=62500;
                cout<<"\nYou have successfully booked a flight AS-908"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }
           }
           case 6:
           {
            cout<<"_______________Welcome to European Airlines_______________\n"<<endl;

             cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;

             cout<<"Following are the flights \n"<<endl;
              
              cout<<"1. EU-348"<<endl;
              cout<<"\t22-01-2024 5:40AM 7hrs Rs.78000"<<endl;
              cout<<"2. EU-859"<<endl;
              cout<<"\t23-12-2024 7:40AM 5hrs Rs.73500"<<endl;
              cout<<"3. EU-308"<<endl;
              cout<<"\t26-12-2024 12:40AM 8hrs Rs.72500"<<endl;

              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

              if (choice1==1)
              {
                charges=78000;
                cout<<"\nYou have successfully booked a flight EU-348"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else if (choice1==2)
              {
                charges=73500;
                cout<<"\nYou have successfully booked a flight EU-859"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
               else if (choice1==3)
              {
                charges=72500;
                cout<<"\nYou have successfully booked a flight EU-308"<<endl;
                cout<<" You can go menu and get your ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the menu"<<endl;
                flights();
              }
              cout<<"Press any key to back the main menu:";
              cin>>back;
              if (back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu();
              }
           }
           default:
           {
            cout<<"Invalid input , Shifting you to the main menu !"<<endl;
            mainMenu();
            break;

           }



           } 

           
    }

};
float registration::charges;
int registration::choice;

class ticket : public registration , Details
{
  public:

       void Bill()
       {
         string destination="";
         ofstream outf("record.txt");
         {
          outf<<"_______________ASUU Airlines_______________"<<endl;
          outf<<"___________________Ticket__________________"<<endl;
          outf<<"___________________________________________"<<endl;
          

          outf<<"Customer ID     :\t"<<Details::cId<<endl;
          outf<<"Customer Name   :\t"<<Details::name<<endl;
          outf<<"Customer Gender :\t"<<Details::gender<<endl;
          
          outf<<"\tDescription"<<endl<<endl;
          
          if (registration::choice==1)
          {
            destination="Dubai";
          }
           else if (registration::choice==2)
          {
            destination="Canadia";
          }
           else if (registration::choice==3)
          {
            destination="UK";
          }
           else if (registration::choice==4)
          {
            destination="USA";
          }
           else if (registration::choice==5)
          {
            destination="Australia";
          }
           else if (registration::choice==6)
          {
            destination="Europe";
          }
          outf<<"Destination :\t\t"<<destination<<endl;
          outf<<"Flight cost :\t\t"<<registration::charges<<endl;
         
          


         }
         outf.close();
       }
       void dispBill()
       {
       	
        ifstream ifs;
        ifs.open("record.txt");
         {
//           if (!ifs)
//           {
//              cout<<"File error!"<<endl;
//           }
			
			string line ;
           while (getline(ifs, line))
           {
             
             cout<<line<<endl;
           }
         }
         ifs.close();
       }
};








void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                 ASUU Airlines \n"<<endl;
    cout<<"\t___________________Main Menu___________________"<<endl;  // 15 lines each

    cout<<"\t _____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t      |"<<endl;

    cout<<"\t|\t Press 1 to Add The Customer Details  |"   <<endl;
    cout<<"\t|\t Press 2 For Flight Registration      |"   <<endl;
    cout<<"\t|\t Press 3 For Tickets and Charges      |"   <<endl;
    cout<<"\t|\t Press 4 For Exit                     |"   <<endl;
    cout<<"\t|\t\t\t\t\t      |"<<endl;           
	            
    cout<<"\t _____________________________________________"<<endl;

    cout<<" Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1 :
    {
        cout<<"_______________Coustomer_______________\n"<<endl;
        d.information();
        cout<<" Press any key to go back the Main menu";
        cin>>back;

        if (back==1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();

        }
        break;
        
    }
    case 2 :
    {
        cout<<"_______________Book a Flight using this system _______________\n"<<endl;
        r.flights();
        break;
    }
    case 3 :
    {         cout<<"_______________GET YOUR TICKET_______________\n"<<endl;
         t.Bill();

         cout<<"Your Ticket is printed,you can collect it \n"<<endl;
         cout<<"Press 1 to display your ticket ";

         cin>>back;
         if (back==1)
         {
            t.dispBill();
            cout<<" Press any key to go back the Main menu";
            cin>>back;
            if (back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

         }
         else
         {
            mainMenu();
         }
         break;
    }   
      case 4 :
      {
        cout<<"\n\n\t__________Thank-you__________"<<endl;
        break;
      }
      default :
      {
        cout<<"Invalid input, Please try again!\n"<<endl;
        mainMenu();
        break;
      }
    }


}






int main()
{
    Management mobj;
    return 0;

}
