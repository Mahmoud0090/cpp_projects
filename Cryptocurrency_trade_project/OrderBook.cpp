#include "OrderBook.h"
#include "CSVReader.h"
#include<map>


OrderBook::OrderBook(std::string filename)
{
    orders = CSVReader::readCSV(filename);
}

        
std::vector<std::string> OrderBook:: getKnownProducts()
{
    std::vector<std::string> products;
    std::map<std::string , bool> prodMap;

    for(OrderBookEntry &e : orders)
    {
        prodMap[e.product] = true;
    }

    for(auto const& e : prodMap)
    {
        products.push_back(e.first);
    }

    return products;
}
        
        
std::vector<OrderBookEntry> OrderBook::getOrders(orderBookType type, 
                                        std::string product,
                                        std::string timeStamp)
{
    std::vector<OrderBookEntry> orders_sub;

    for(OrderBookEntry &e : orders)
    {
        if(e.orderType == type &&
           e.product == product &&
           e.timestamp == timeStamp)
        {
            orders_sub.push_back(e);
        }
    }
    return orders_sub;
}