#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(double _price,
                       double _amount,
                       std::string _timestamp,
                       std::string _product,
                       orderBookType _orderType)
                       
        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)
        {

        }

orderBookType OrderBookEntry::stringToOrderBookType(std::string s)
{
  if (s == "ask")
  {
    return orderBookType::ask;
  }

  if (s == "bid")
  {
    return orderBookType::bid;
  }
  return orderBookType::unknown;
}
