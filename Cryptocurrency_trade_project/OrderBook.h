#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"

class OrderBook
{
    public:
        /**construct , reading a csv file*/
        OrderBook(std::string filename);

        /**return vector of all known products in the dataset*/
        std::vector<std::string> getKnownProducts();

        /**return vector of orders according to sent filters */
        std::vector<OrderBookEntry> getOrders(orderBookType type, 
                                             std::string product,
                                             std::string timeStamp);


        static double getHighPrice(std::vector<OrderBookEntry>& orders);
        static double getLowPrice(std::vector<OrderBookEntry>& orders);

    private:
        std::vector<OrderBookEntry> orders;
};