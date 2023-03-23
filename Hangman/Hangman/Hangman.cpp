#include <iostream>
using namespace std;

int main()
{
    string word;
    string emp = "";
    string notFoundletter;
    int count = 0;
    int trueLettersCount = 0;
    char guess;
    cout << "enter a word : ";

    std::cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        emp += "_ ";
    }
    cout << emp << endl;

    bool gamefinish = false;
    bool letterfound = false;

    while (!gamefinish)
    {
        cout << "\nenter a letter : ";
        cin >> guess;

        for (int i = 0; i < word.size(); i++)
        {
            if (guess == word[i])
            {
                int x = i * 2;
                emp[x] = guess;
                trueLettersCount++;
                letterfound = true;
            }
        }
        cout << emp << endl;

        if (!letterfound)
        {
            notFoundletter += guess;
            notFoundletter += " ";
            count++;
            switch (count) {
            case 1:
                cout << "----------------------" << endl;
                cout << " O " << endl;
                break;
            case 2:
                cout << "----------------------" << endl;
                cout << " O\n" << " |" << endl;
                break;
            case 3:
                cout << "----------------------" << endl;
                cout << " O\n" << " |-" << endl;
                break;
            case 4:
                cout << "----------------------" << endl;
                cout << " O\n" << "-|-" << endl;
                break;
            case 5:
                cout << "----------------------" << endl;
                cout << " O\n" << "-|-\n" << "-|" << endl;
                break;
            case 6:
                cout << "----------------------" << endl;
                cout << " O\n" << "-|-\n" << "-|-" << endl;
                gamefinish = true;
                cout << "you lost" << endl;
                break;
            }
        }

        if (trueLettersCount == word.size())
        {
            cout << "YOU Won!!\n";
            gamefinish = true;
        }

        else
        {
            cout << "----------------------" << endl;
            cout << "\nthe wrong letters are : " << notFoundletter << endl;
            letterfound = false;
        }
    }
}

