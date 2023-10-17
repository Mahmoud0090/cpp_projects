#include <iostream>
#include <vector>
//#include "OrderBookEntry.h"
#include "MerkelMain.h"

int main()
{
    MerkelMain app{};

    app.init();

    return 0;
}
    /* while(true)
    {
        PrintMenu();

        int userOption = getUserOption();

        processUserOption(userOption);
    } */

    /* std::vector<OrderBookEntry> orders;

    OrderBookEntry order1 {12.5 , 85.5 , "14/1/2023" , "BTC/USDT" , orderBookType::ask};
    OrderBookEntry order2 {21.6 , 70.5 , "15/5/2022" , "BTC/USDT" , orderBookType::bid};

    orders.push_back(order1);
    orders.push_back(order2);

    for(OrderBookEntry& order : orders)
    {
        std::cout<<"the timestamp is : "<<order.timestamp<<std::endl;
        std::cout<<"the price is : "<<order.price<<std::endl;
    } */
    