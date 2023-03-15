#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int h = 0 , m = 0 , s=0;
    int alarmh = 0 , alarmm = 0 , alarms=0;

    cout<<"Enter the time in format HH:MM:SS\n\n";
    cin>>h>>m>>s;

    cout<<"set the alarm at HH:MM:SS\n\n";
    cin>>alarmh>>alarmm>>alarms;
    
    if(h<24 && m<60 && s<60)
    {
        start:
        for(h ; h<24 ; h++)
        {
            for(m ; m<60 ; m++)
            {
                for(s ; s<60 ; s++)
                {
                    //this will clear the existing screen data
                    system("CLS");
                    cout<<h<<" : "<<m<<" : "<<s;

                    //this condition is used to check AM and PM
                    if(h<12)
                    {
                        cout<<" AM";
                    }
                    else
                    {
                        cout<<" PM";
                    }
                    
                    // setting the alarm
                    if(h == alarmh && m == alarmm && s == alarms)
                    {
                        //this will produce alarm sound in the output
                        cout<<"\a\a\a\a\a\a\a\a\a\a\a\a";
                    }

                    //this will stop the loop for 1 sec
                    for(double i = 0; i<99999999 ; i++)
                    {
                        i++;
                        i--;
                    }
                }
                s=0;
            }
            m = 0;
        }
        h = 0;
        //this will never stop the loop
        goto start;
   }
   else
   {
        cout<<"Invalid input for the time"<<endl;
   }

    return 0;
}