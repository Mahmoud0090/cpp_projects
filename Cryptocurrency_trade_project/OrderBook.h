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

        /**return the earlist time in the orderbook*/
        std::string getEarliestTime();

        /**return the next time after the sent 
         * time in the orderbook
         * if there is no next timestamp , wrapt around to the start*/
        std::string getNextTime(std::string timestamp);


        static double getHighPrice(std::vector<OrderBookEntry>& orders);
        static double getLowPrice(std::vector<OrderBookEntry>& orders);

    private:
        std::vector<OrderBookEntry> orders;
};