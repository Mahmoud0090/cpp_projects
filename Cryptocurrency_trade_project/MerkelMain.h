#pragma once
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
    public:
        MerkelMain();
        void init();
    private:
        void loadOrderBook();
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void gotoNextTimeFrame();
        void PrintMenu();
        int getUserOption();
        void processUserOption(int userOption);

        std::vector<OrderBookEntry> orders;
};