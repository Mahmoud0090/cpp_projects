#include <iostream>
#include "CSVReader.h"

CSVReader::CSVReader()
{

}

std::vector<OrderBookEntry> CSVReader::readCSV(std::string csvFile)
{
    std::vector<OrderBookEntry> orders;
    return orders;
}


std::vector<std::string> CSVReader::tokenize(std::string csvLine , char seperator)
{
    std::vector<std::string> vec;
    return vec;
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
        std::cout<<price << " : "<<amount<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<"bad float "<<std::endl;
        std::cout<<tokens[3]<<" : "<<tokens[4]<<std::endl;
        throw;
    }

    OrderBookEntry ord(1,2,"dfgfd","gfdfhgf" , orderBookType::ask);
    return ord;

}