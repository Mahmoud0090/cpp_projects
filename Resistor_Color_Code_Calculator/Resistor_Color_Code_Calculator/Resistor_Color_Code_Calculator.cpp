#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
    map<string, int> colorValues = { {"black" , 0},{"brown" , 1},{"red" , 2},{"orange" , 3},{"yellow" , 4},
    {"green" , 5},{"blue" , 6}, {"violet" , 7}, {"grey" , 8}, {"white" , 9} };

    map<string, string> tolerance = { {"brown" , "+-1%"} ,{"red" , "+-2%"} ,{"green" , "+-0.5%"} ,
    {"blue" , "+-0.25%"} , {"violet" , "+-0.1%"} , {"grey" , "+-0.05%"} , {"gold" , "+-5%"} ,
    {"silver" , "+-10%" } };

    int numberOfBands;

    cout << "enter the number of bands : ";
    cin >> numberOfBands;

    vector<string> colors;
    int i = 1;
    while (i <= numberOfBands)
    {
        string color;
        cout << "enter the color of band " << i <<" :";
        cin >> color;
        
        colors.push_back(color);
        i++;
    }

    string resValue;
    long long int value;

    for (int i = 0; i < colors.size() - 1; i++)
    {
        if (i < colors.size() - 2)
        {
            resValue += to_string(colorValues[colors[i]]);
        }
        else
        {
            value = stoi(resValue) * (pow(10, colorValues[colors[i]]));
        }
    }
    cout << "the value of the resistor is : " << value << " ohm with " << tolerance[colors[colors.size() - 1]] << " tolerance\n";
}
    

