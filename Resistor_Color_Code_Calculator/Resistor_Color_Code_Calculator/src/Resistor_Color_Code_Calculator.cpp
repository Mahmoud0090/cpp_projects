#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    map<string, int> colorValues = { {"black" , 0},{"brown" , 1},{"red" , 2},{"orange" , 3},{"yellow" , 4},
    {"green" , 5},{"blue" , 6}, {"violet" , 7}, {"grey" , 8}, {"white" , 9} };

    map<string, int> multiplier = { {"black" , 0},{"brown" , 1},{"red" , 2},{"orange" , 3},{"yellow" , 4},
    {"green" , 5},{"blue" , 6}, {"violet" , 7}, {"grey" , 8}, {"white" , 9}, {"gold" , -1},{"silver", -2} };

    map<string, string> tolerance = { {"brown" , "1%"} ,{"red" , "2%"} ,{"green" , "0.5%"} ,
    {"blue" , "0.25%"} , {"violet" , "0.1%"} , {"grey" , "0.05%"} , {"gold" , "5%"} ,
    {"silver" , "10%" } };

    map<string, int> ppm = { {"brown" , 100},{"red" , 50},{"orange" , 15},{"yellow" , 25},
    {"blue" , 10}, {"violet" , 5} };

    cout << "ColorValues List : " << endl;
    for (auto element : colorValues)
    {
        cout << element.first << " , ";
    }
    cout << endl;

    cout << "multiplier List : " << endl;
    for (auto element : multiplier)
    {
        cout << element.first << " , ";
    }
    cout << endl;
    cout << "tolerance List : " << endl;
    for (auto element : tolerance)
    {
        cout << element.first << " , ";
    }
    cout << endl;
    cout << "ppm List : " << endl;
    for (auto element : ppm)
    {
        cout << element.first << " , ";
    }
    cout << endl;

    int numberOfBands;
    string resValue;
    double value = 0;

    std::string input_str;
    bool valid_input = false;

    while (!valid_input) {
        cout << "enter the number of bands : 4 or 5 or 6 : ";
        std::getline(std::cin, input_str);

        try
        {
            numberOfBands = std::stoi(input_str);
            valid_input = true;
        }
        catch (const std::exception& e)
        {
            std::cout << "Invalid input: not an integer." << std::endl;
        }
    }
    if (numberOfBands > 6 || numberOfBands < 4)
    {
        main();
    }

    vector<string> colors;
    int i = 1;

    while (i <= numberOfBands)
    {
        string color;
        if ((numberOfBands == 4 && i < 3) || (numberOfBands == 5 && i < 4) || (numberOfBands == 6 && i < 4))
        {
            cout << "enter the color of band from colorValue list , color " << i << " : ";
            cin >> color;
            auto it = colorValues.find(color);
            if (it == colorValues.end())
            {
                cout << "invalid color , enter again " << endl;
                continue;
            }
        }

        else if ((numberOfBands == 4 && i == 3) || (numberOfBands == 5 && i == 4) || (numberOfBands == 6 && i == 4))
        {
            cout << "enter the color of band from maltiplier list , color " << i << " : ";
            cin >> color;
            auto mul = multiplier.find(color);
            if (mul == multiplier.end())
            {
                cout << "invalid color , enter again " << endl;
                continue;
            }
        }

        else if((numberOfBands == 4 && i == 4) || (numberOfBands == 5 && i == 5) || (numberOfBands == 6 && i == 5))
        {
            cout << "enter the color of band from tolerence list , color " << i << " : ";
            cin >> color;
            auto tol = tolerance.find(color);
            if (tol == tolerance.end())
            {
                cout << "invalid color , enter again " << endl;
                continue;
            }
        }

        if (i == 6)
        {
            cout << "enter the color of band from ppm list , color " << i << " : ";
            cin >> color;
            auto pm = ppm.find(color);
            if (pm == ppm.end())
            {
                cout << "invalid color , enter again " << endl;
                continue;
            }
        }
        colors.push_back(color);
        i++;
    }

    for (int i = 0; i < colors.size() - 1; i++)
    {
        if ((numberOfBands == 4 || numberOfBands == 5) && (i < colors.size() - 2)
            || (numberOfBands == 6) && (i < colors.size() - 3))
        {
            resValue += to_string(colorValues[colors[i]]);
        }
        else if((numberOfBands == 4 || numberOfBands == 5) && (i == colors.size() - 2)
            || (numberOfBands == 6) && (i == colors.size() - 3))
        {
            value = stod(resValue) * (pow(10, multiplier[colors[i]]));
        }
    }

    if (value < 1000)
    {
        if(numberOfBands == 6)
            cout << "the value of the resistor is : " << value << " ohm with " << tolerance[colors[colors.size() - 2]] << " tolerance " << ppm[colors[colors.size() - 1]]<< "ppm";
        else
        cout << "the value of the resistor is : " << value<< " ohm with " << tolerance[colors[colors.size() - 1]] << " tolerance";
    }

    else if (value >= 1000 && value < 1000000)
    {
        if (numberOfBands == 6)
            cout << "the value of the resistor is : " << value / 1000 << " Kohm with " << tolerance[colors[colors.size() - 2]] << " tolerance " << ppm[colors[colors.size() - 1]] << "ppm";
        else
        cout << "the value of the resistor is : " << value / 1000 << " Kohm with " << tolerance[colors[colors.size() - 1]] << " tolerance";
    }

    else if (value >= 1000000 && value < 1000000000)
    {
        if (numberOfBands == 6)
            cout << "the value of the resistor is : " << value / 1000000 << " Mohm with " << tolerance[colors[colors.size() - 2]] << " tolerance " << ppm[colors[colors.size() - 1]] << "ppm";
        else
        cout << "the value of the resistor is : " << value / 1000000 << " Mohm with " << tolerance[colors[colors.size() - 1]] << " tolerance";
    }

    else if (value >= 1000000000)
    {
        if (numberOfBands == 6)
            cout << "the value of the resistor is : " << value / 1000000000 << " Gohm with " << tolerance[colors[colors.size() - 2]] << " tolerance " << ppm[colors[colors.size() - 1]] << "ppm";
        else
        cout << "the value of the resistor is : " << value / 1000000000 << " Gohm with " << tolerance[colors[colors.size() - 1]] << " tolerance";
    }

    cin.ignore();
    cin.get();
};