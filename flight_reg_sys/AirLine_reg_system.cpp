#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void MainMenu();

class Management
{
public:
  Management()
  {
    MainMenu();
  } 
       
};

class Details
{
public:
   static string name,gender;
   int phoneNo;
   int age;
   string address;
   static int costumerId;
   char arr[100];


   void information()
   {
        cout<<"\nenter the costumer ID : ";
        cin>>costumerId;
        cout<<"\nenter the name : ";
        cin>>name;
        cout<<"\nenter the age : ";
        cin>>age;
        cout<<"\nenter the address : ";
        cin>>address;
        cout<<"\nenter the gender : ";
        cin>>gender;
        cout<<"your information are saved\n "<<endl;
   }
};

int Details::costumerId;
string Details::name;
string Details::gender;


class Registration
{
public:
  static int choice;
  int choice1;
  int back;
  static float charges;


  void flights()
   {
        vector<string> flights = {"Dubai" , "Canada" , "USA" , "UK" , "Europe" , "Japan"};

        for(int i = 0 ; i<flights.size(); i++)
        {
            cout<<(i+1)<<".flight to "<<flights[i]<<endl;
        }

        cout<<"press the number of the country that you would like to travel to "<<endl;

        cin>>Registration::choice;

        switch(Registration::choice)
        {
            case 1:
            {
                cout<<"_________________welcome to Emirates Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1400$"<<endl;
                cout<<"10 hours will cost 1200$"<<endl;
                cout<<"12 hours will cost 1000$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1200;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1000;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }

            case 2:
            {
                cout<<"_________________welcome to Canadian Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1800$"<<endl;
                cout<<"10 hours will cost 1600$"<<endl;
                cout<<"12 hours will cost 1400$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1800;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1600;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }
            case 3:
            {
                cout<<"_________________welcome to USA Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1800$"<<endl;
                cout<<"10 hours will cost 1600$"<<endl;
                cout<<"12 hours will cost 1400$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1800;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1600;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }
            case 4:
            {
                cout<<"_________________welcome to UK Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1800$"<<endl;
                cout<<"10 hours will cost 1600$"<<endl;
                cout<<"12 hours will cost 1400$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1800;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1600;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }
            case 5:
            {
                cout<<"_________________welcome to Europe Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1800$"<<endl;
                cout<<"10 hours will cost 1600$"<<endl;
                cout<<"12 hours will cost 1400$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1800;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1600;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }
            case 6:
            {
                cout<<"_________________welcome to Japanies Airlines____________\n"<<endl;
                cout<<"The following are the flights : "<<endl;

                cout<<"8 hours will cost 1800$"<<endl;
                cout<<"10 hours will cost 1600$"<<endl;
                cout<<"12 hours will cost 1400$"<<endl;
                
                cout<<"select the flight you want to book :";
                cin>>choice1;
                
                if(choice1==1)
                {
                    charges = 1800;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }
                else if(choice1==2)
                {
                    charges = 1600;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else if(choice1==3)
                {
                    charges = 1400;
                    cout<<"you have succesfully booked the flight with charges : "<<charges<<endl;
                }

                else
                {
                    cout<<"Invalid input. Returning back to flight menu"<<endl;
                    Registration::flights();
                }
                
                cout<<"press any key to go back to main menu "<<endl;

                cin>>back;

                if(back == 1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
                break;
            }
            default:
            {
                cout<<"Invalid input , back to mainMenu "<<endl;
                MainMenu();
                break;
            }
        }
   }
};

float Registration::charges;
int Registration::choice;

class Ticket: public Registration , Details
{
public:

   void Bill()
    {
        string destinations = "";
        ofstream outf("records.txt");
        {
            outf<<"________________XYZ Airlines____________"<<endl;
            outf<<"________________Ticket__________________"<<endl;
            outf<<"________________________________________"<<endl;

            cout<<"costumer ID :"<<Details::costumerId<<endl;
            cout<<"costumer Name :"<<Details::name<<endl;
            cout<<"costumer gender :"<<Details::gender<<endl;
            cout<<"\tDescription"<<endl<<endl;

            if(Registration::choice == 1)
            {
                destinations = "Dubai";
            }
            else if(Registration::choice == 2)
            {
                destinations = "Canada";
            }
            else if(Registration::choice == 3)
            {
                destinations = "USA";
            }
            else if(Registration::choice == 4)
            {
                destinations = "UK";
            }
            else if(Registration::choice == 5)
            {
                destinations = "Europe";
            }
            else if(Registration::choice == 6)
            {
                destinations = "Japan";
            }

            outf<<"Destination\t\t"<<destinations<<endl;
            outf<<"flight cost : "<<Registration::charges<<endl;
        }
        outf.close();
    }

    void DispBill()
    {
        ifstream ifs("records.txt");

        if(!ifs)
        {
            cout<<"file error "<<endl;
        }

        while(!ifs.eof())
        {
            ifs.getline(arr , 100);
            cout<<arr<<endl;
        }
        ifs.close();
    }

};


void MainMenu()
{
    int lchoise;
    int schoise;
    int back;

    cout<<"\t            XZY AirLines \n"<<endl;
    cout<<"____________MainMenu___________"<<endl;

    cout<<"\t_______________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t| press 1 to add costumer details     \t|"<<endl;
    cout<<"\t| press 2 for flight registration     \t|"<<endl;
    cout<<"\t| press 3 for ticket and chargers     \t|"<<endl;
    cout<<"\t| press 4 to exit                     \t|"<<endl;
    
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t_______________________________"<<endl;

    cout<<"enter the choice : ";
    cin>>lchoise;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoise)
    {
        case 1:
        {
            cout<<"_____________costumers__________\n"<<endl;
            d.information();
            cout<<"press any key to back to the mainMenu ";
            cin>>back;

            if(back == 1)
            {
                MainMenu();
            }
            else
            {
                MainMenu();
            }
            break;
        }
        
        case 2:
        {
            cout<<"_______book a flight using this system___________\n"<<endl;
            r.flights();
            break;
        }

        case 3:
        {
            cout<<"______Get you ticket_________\n"<<endl;
            t.Bill();

            cout<<"press 1 to display you ticket "<<endl;
            cin>>back;

            if(back == 1)
            {
                t.DispBill();
                cout<<"press any key to go back to mainMenu : ";
                cin>>back;
                if(back==1)
                {
                    MainMenu();
                }
                else
                {
                    MainMenu();
                }
            }
            else
            {
                MainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t______thank you______"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid input , please try again!\n"<<endl;
            MainMenu();
            break;
        }
    }
}

int main()
{
    Management manj;

    return 0;
}