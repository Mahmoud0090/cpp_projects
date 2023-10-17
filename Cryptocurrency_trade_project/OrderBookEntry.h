//#pragma once
#include<string>

enum class orderBookType {bid , ask};


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
};