#include <iostream>
#include "MerkelMain.h"

MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
    loadOrderBook();
    int userInput;
    while (true)
    {
        PrintMenu();
        userInput = getUserOption();
        processUserOption(userInput);
    }
}

void MerkelMain::loadOrderBook()
{
    OrderBookEntry order1 {12.5 , 85.5 , "14/1/2023" , "BTC/USDT" , orderBookType::ask};
    OrderBookEntry order2 {21.6 , 70.5 , "15/5/2022" , "BTC/USDT" , orderBookType::bid};

    orders.push_back(order1);
    orders.push_back(order2);
}

void MerkelMain::printHelp()
{
    std::cout<<"Your aim is to make money , analyze the market and make bids and offers "<<std::endl;
}
void MerkelMain::printMarketStats()
{
    std::cout<<"you have "<<orders.size() <<" entries "<<std::endl;
}
void MerkelMain::enterOffer()
{
    std::cout<<"Make an offer , enter the amount "<<std::endl;
}
void MerkelMain::enterBid()
{
    std::cout<<"Make a bid , enter the amount "<<std::endl;
}
void MerkelMain::printWallet()
{
    std::cout<<"Your wallet is empty."<<std::endl;
}
void MerkelMain::gotoNextTimeFrame()
{
    std::cout<<"Going to the next time frame "<<std::endl;
}
void MerkelMain::PrintMenu()
{
    //1-print help
    std::cout<<"1: Print help "<<std::endl;

    //2-print exchange stats
    std::cout<<"2: Print exchange stats "<<std::endl;

    //3-make an offer
    std::cout<<"3: Make an offer "<<std::endl;
    
    //4-make a bid
    std::cout<<"4: Make a bid "<<std::endl;

    //5-print wallet
    std::cout<<"5: Print wallet "<<std::endl;

    //6-continue
    std::cout<<"6: Continue "<<std::endl;

    std::cout<<"========================"<<std::endl;
}
int MerkelMain::getUserOption()
{
    int userOption;
    std::cout<<"Type in 1-6 "<<std::endl;
    std::cin >> userOption;
    std::cout<<"You chose "<<userOption<<std::endl;
    return userOption;
}
void MerkelMain::processUserOption(int userOption)
{
    if(userOption == 0) // invalid input
    {
        std::cout<<"Wrong choise , please chose 1-6 "<<std::endl;
    } 

    if(userOption == 1)
    {
        printHelp();
    } 

    if(userOption == 2)
    {
        printMarketStats();
    } 

    if(userOption == 3)
    {
        enterOffer();
    } 

    if(userOption == 4)
    {
        enterBid();
    } 

    if(userOption == 5)
    {
        printWallet();
    }

    if(userOption == 6)
    {
        gotoNextTimeFrame();
    } 
}
