#pragma once
#include "OrderBookEntry.h"
#include <vector>
#include <fstream>


class CSVReader
{
    public:
        CSVReader();

        static std::vector<OrderBookEntry> readCSV(std::string csvFile);
        static std::vector<std::string> tokenize(std::string csvLine , char seperator);
        static OrderBookEntry stringtoOBE(std::string price,
                                          std::string amount,
                                          std::string timestamp,
                                          std::string product,
                                          orderBookType orderType);

    private:
        static OrderBookEntry stringtoOBE(std::vector<std::string> strings);


};