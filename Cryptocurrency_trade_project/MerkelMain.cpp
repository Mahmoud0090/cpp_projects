#include <iostream>
#include "MerkelMain.h"

MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
    int userInput;
    currentTime = orderBook.getEarliestTime();
    while (true)
    {
        PrintMenu();
        userInput = getUserOption();
        processUserOption(userInput);
    }
}

void MerkelMain::printHelp()
{
    std::cout<<"Your aim is to make money , analyze the market and make bids and offers "<<std::endl;
}

void MerkelMain::printMarketStats()
{

    for(std::string const& p : orderBook.getKnownProducts())
    {
        std::cout<<"product : "<<p<< std::endl;

        std::vector<OrderBookEntry> entries = orderBook.getOrders(orderBookType::ask,
                                                                  p,currentTime);

        std::cout<<"Asks seen : "<<entries.size()<<std::endl;
        std::cout<<"Max asks : "<<OrderBook::getHighPrice(entries)<<std::endl;
        std::cout<<"Min asks : "<<OrderBook::getLowPrice(entries)<<std::endl;
    }
    /* std::cout<<"you have "<<orders.size() <<" entries "<<std::endl;
    unsigned int asks = 0;
    unsigned int bids = 0;

    for(OrderBookEntry& ord : orders)
    {
        if(ord.orderType == orderBookType::ask)
        {
            asks++;
        }
        if(ord.orderType == orderBookType::bid)
        {
            bids++;
        }
    }
    std::cout<< " number of asks is : "<<asks<<" and bids is "<<bids<<std::endl; */
}

void MerkelMain::enterAsk()
{
    std::cout<<"Make an Ask , enter the amount : product,price,amount eg ETH/BTC,200,0.5 "<<std::endl;
    std::string input;

    std::getline(std::cin , input);

    std::vector<std::string> tokens = CSVReader::tokenize(input , ',');

    if(tokens.size() != 3)
    {
        std::cout<<"bad input "<<input<<std::endl;
    }

    else
    {
        try{
        OrderBookEntry obe = CSVReader::stringtoOBE(tokens[1],
                                                    tokens[2],
                                                    currentTime,
                                                    tokens[0],
                                                    orderBookType::ask);
        orderBook.insertOrder(obe); 
        }
        catch(const std::exception& e){

            std::cout<<"MerkelMain enterAsk bad input"<<std::endl;
        }
    }

    std::cout<<"You typed : "<<input<<std::endl;
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
    currentTime = orderBook.getNextTime(currentTime);
}
void MerkelMain::PrintMenu()
{
    //1-print help
    std::cout<<"1: Print help "<<std::endl;

    //2-print exchange stats
    std::cout<<"2: Print exchange stats "<<std::endl;

    //3-make an offer
    std::cout<<"3: Make an Ask "<<std::endl;
    
    //4-make a bid
    std::cout<<"4: Make a bid "<<std::endl;

    //5-print wallet
    std::cout<<"5: Print wallet "<<std::endl;

    //6-continue
    std::cout<<"6: Continue "<<std::endl;

    std::cout<<"========================"<<std::endl;

    std::cout<<"current time is : "<<currentTime<<std::endl;
}
int MerkelMain::getUserOption()
{
    int userOption = 0;
    std::string line;
    std::cout<<"Type in 1-6 "<<std::endl;

    std::getline(std::cin , line);

    try{
        userOption = std::stoi(line);
    }catch(const std::exception& e)
    {
        //
    }
    
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
        enterAsk();
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
