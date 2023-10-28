#pragma once
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include "OrderBook.h"
#include <limits>

class MerkelMain
{
    public:
        MerkelMain();
        void init();
    private:
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeFrame();
        void PrintMenu();
        int getUserOption();
        void processUserOption(int userOption);

        std::string currentTime;

        OrderBook orderBook{"20200317.csv"};
};