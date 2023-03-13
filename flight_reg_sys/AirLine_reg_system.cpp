#include <iostream>
#include <fstream>
#include <iomanip>
#include "Details.h"

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
            r.flight();
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
                t.display();
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