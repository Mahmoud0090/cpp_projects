#pragma once
#include<string>

enum class orderBookType {bid , ask , unknown};


class OrderBookEntry
{
    public:
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        orderBookType orderType;


        OrderBookEntry(double _price,
                       double _amount,
                       std::string _timestamp,
                       std::string _product,
                       orderBookType _orderType);

        static bool compareByTimestamp(OrderBookEntry& e1 , OrderBookEntry& e2)
        {
            return e1.timestamp < e2.timestamp;
        }

        static orderBookType stringToOrderBookType(std::string s);
};