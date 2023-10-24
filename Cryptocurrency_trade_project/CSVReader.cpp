#include <iostream>
#include "CSVReader.h"

CSVReader::CSVReader()
{

}

std::vector<OrderBookEntry> CSVReader::readCSV(std::string csvFileName)
{
    std::vector<OrderBookEntry> entries;

    std::ifstream csvFile{csvFileName};
    std::string line;

    if(csvFile.is_open())
    {
        while(std::getline(csvFile , line))
        {
            try
            {
                OrderBookEntry ode = stringtoOBE(tokenize(line , ','));
                entries.push_back(ode);
            }
            catch(const std::exception& e)
            {
                std::cout<<"CSVreader::readCSV bad data "<<std::endl;
            }
        }
    }

    std::cout<<"CSVreader::readCSV entries size "<< entries.size()<<" "<<std::endl;

    return entries;
}


std::vector<std::string> CSVReader::tokenize(std::string csvLine , char seperator)
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


OrderBookEntry CSVReader::stringtoOBE(std::vector<std::string> tokens)
{
    double price , amount;
    if(tokens.size() != 5)
    {
        std::cout<<"Bad Line "<<std::endl;
        throw std::exception{};
    }

    try
    {
        price = std::stod(tokens[3]);
        amount = std::stod(tokens[4]);
    }
    catch(const std::exception& e)
    {
        std::cout<<"bad float "<<std::endl;
        std::cout<<tokens[3]<<" : "<<tokens[4]<<std::endl;
        throw;
    }

    OrderBookEntry ord(price,amount,tokens[0],tokens[1] , 
                      OrderBookEntry::stringToOrderBookType(tokens[2]));
    return ord;
}