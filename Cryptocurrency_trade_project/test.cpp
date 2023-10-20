#include <string>
#include <vector>
#include <iostream>
#include <fstream>


std::vector<std::string> tokenize(std::string csvLine , char seperator)
{
    std::vector<std::string> tokens;
    std::string token;

    signed int start , end;

    start = csvLine.find_first_not_of(seperator , 0);
    do
    {
        end = csvLine.find_first_of(seperator , start);
        if(start == csvLine.length() || start == end) break;

        if(end >= 0) token = csvLine.substr(start , end - start);

        else token = csvLine.substr(start , csvLine.length() - start);

        tokens.push_back(token);

        start = end + 1;

    } while (end > 0);
    return tokens;
}

int main()
{

    /* std::string str = "2020/03/17 17:01:24.884492,ETH/BTC,bid,0.02185561,9.14455526";

    std::vector<std::string> toks = tokenize(str , ',');

    for(std::string& s : toks)
    {
        std::cout<<s<<std::endl;
    } */

    std::ifstream csvFile{"20200317.csv"};
    std::string line;

    std::vector<std::string> tokens;

    if(csvFile.is_open())
    {
        std::cout<<"file is open"<<std::endl;

        while(std::getline(csvFile , line))
        {
            std::cout<<"Read line : "<<line<<std::endl;
            tokens = tokenize(line , ',');

            if(tokens.size() != 5)
            {
                std::cout<<"Bad Line "<<std::endl;
                continue;
            }

            try
            {
                double price = std::stod(tokens[3]);
                double amount = std::stod(tokens[4]);
                std::cout<<price << " : "<<amount<<std::endl;
            }
            catch(std::exception& e)
            {
                std::cout<<"bad float "<<std::endl;
                std::cout<<tokens[3]<<" : "<<tokens[4]<<std::endl;
                break;
            }
        }
        csvFile.close();
    }

    else
    {
        std::cout<<"file is not open"<<std::endl;
    }

    return 0;
}