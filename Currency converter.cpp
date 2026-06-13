#include <iostream>
#include <iomanip>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
     double amount;
     string sourcecurrency, targetcurrency;

     
    set<string> validlist = {"USD", "EUR", "XAF", "GBP", "NGN", "CAD", "JPY", "CHF", "AUD", "AED"};


     std::cout <<"***Currency Converter***\n";
     std::cout << "USD= US Dollar\n";
     std::cout << "EUR= Euro\n";
     std::cout << "XAF= Central African CFA Franc\n";
     std::cout << "GBP= British Pounds\n";
     std::cout << "NGN= naira\n";
     std::cout << "CAD= Canadian Dollar\n";
     std::cout << "JPY= Japanese Yen\n";
     std::cout << "CHF= Swiss Franc\n";
     std::cout << "AUD= Australian Dollars\n";
     std::cout << "AED= Arab Emirates Dirham\n";
     
     std::cout << "What currency would you like to convert from?\n";
     std::cin >> sourcecurrency;

     while (validlist.find(sourcecurrency) == validlist.end())
     {

          
             std::cout << "Please enter the recommended currencies above!\n";
             std::cin >> sourcecurrency;
      
     
     }
     std::cout <<"What currency are you converting to?\n";
     std::cin >>targetcurrency;

     while(validlist.find(targetcurrency) == validlist.end())
     
     {

     
            std::cout << "please enter the recommended currencies above!\n";
            std::cin >> targetcurrency; 
      
      
     }

     std::cout <<"Enter the amount\n";
     std::cin >> amount;

     while(amount <=0){
      std::cout << "Invalid amount! Please enter a valid amount!\n";
      std::cin >> amount;
     }

     if (targetcurrency == "USD"){
      if (sourcecurrency== "EUR"){
           amount = amount * 1.10;
          }
          else if (sourcecurrency== "XAF"){
               amount = amount / 560.04;
          }
          else if (sourcecurrency== "GBP"){
               amount = amount * 1.25;
          }
          else if (sourcecurrency== "NGN"){
               amount = amount / 1375.99;
          }
          else if (sourcecurrency== "CAD"){
               amount = amount / 1.3604;
          }
          else if (sourcecurrency== "JPY"){
               amount = amount / 157.13;
          }
          else if (sourcecurrency == "CHF"){
               amount = amount * 1.275;
          }
          else if (sourcecurrency == "AUD"){
               amount = amount / 1.53;
          }
          else if (sourcecurrency == "AED"){
               amount = amount / 3.67;
          }
          std::cout << std::fixed << std::setprecision(2) << amount << " USD" << std::endl;
     }
     else if (targetcurrency == "EUR"){
             if (sourcecurrency == "USD"){
               amount = amount / 1.10;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount / 655.957;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 1.16;
             }
             else if (sourcecurrency == "NGN"){
                   amount = amount / 1612.0;
             }
             else if (sourcecurrency == "CAD"){
                    amount = amount * 0.63;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 183.89;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount * 1.090;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount / 1.63;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount / 3.99;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " EUR" << std::endl;
             
             
     }
     else if (targetcurrency == "XAF"){
             
             if (sourcecurrency == "USD"){
               amount = amount * 560.04;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 655.957;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 757.52;
             }
             else if (sourcecurrency == "NGN"){
                   amount = amount / 2.46;
             }
             else if (sourcecurrency == "CAD"){
                    amount = amount * 411.68;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount * 3.58;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount * 712.34;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount * 403.20;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount * 152.48;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " XAF" << std::endl;
             
     } 
     else if (targetcurrency == "GBP"){
             
             if (sourcecurrency == "USD"){
               amount = amount / 1.25;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount /1.16;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount / 757.52;
             }
             else if (sourcecurrency == "NGN"){
                   amount = amount / 1865.18;
             }
             else if (sourcecurrency == "CAD"){
                    amount = amount / 1.8431;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 212.81;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount / 1.176;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount / 1.88;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount / 4.60;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " GBP" << std::endl;
             
     }   
     else if (targetcurrency == "NGN"){
          
             if (sourcecurrency == "USD"){
               amount = amount * 1375.99;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 1611.42;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount * 2.46;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 1865.18;
             }
             else if (sourcecurrency == "CAD"){
                    amount = amount * 1011.54;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount * 8.76;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount * 1756.76;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount * 989.23;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount * 374.67;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " NGN" << std::endl;
             
     }
     else if (targetcurrency == "CAD"){
          
             if (sourcecurrency == "USD"){
               amount = amount * 1.3604;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 1.5929;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount / 411.68;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 1.8431;
             }
             else if (sourcecurrency == "NGN"){
                    amount = amount / 1011.54;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 115.47;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount * 1.74;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount / 1.02;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount / 2.50;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " CAD" << std::endl;
             
     }else if (targetcurrency == "JPY"){

             if (sourcecurrency == "USD"){
               amount = amount * 157.13;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 183.89;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount /3.58;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 212.81;
             }
             else if (sourcecurrency == "NGN"){
                    amount = amount /8.76;
             }
             else if (sourcecurrency == "CAD"){
                   amount = amount * 115.47;
             }
             else if (sourcecurrency == "CHF"){
                   amount = amount * 200.55;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount * 112.92;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount * 42.78;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " JPY" << std::endl;
             

     }else if(targetcurrency == "CHF"){

             if (sourcecurrency == "USD"){
               amount = amount / 1.275;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount / 1.090;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount / 712.34;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 1.176;
             }
             else if (sourcecurrency == "NGN"){
                    amount = amount /1756.76;
             }
             else if (sourcecurrency == "CAD"){
                   amount = amount / 1.74;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 200.55;
             }
             else if (sourcecurrency =="AUD"){
                   amount = amount / 1.77;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount / 4.34;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " CHF" << std::endl;
             

     }else if (targetcurrency == "AUD"){
      
             if (sourcecurrency == "USD"){
               amount = amount * 1.53;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 1.63;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount / 403.20;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 1.88;
             }
             else if (sourcecurrency == "NGN"){
                    amount = amount / 989.23;
             }
             else if (sourcecurrency == "CAD"){
                   amount = amount * 1.02;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 112.92;
             }
             else if (sourcecurrency =="CHF"){
                   amount = amount * 1.77;
             }
             else if (sourcecurrency == "AED"){
                   amount = amount / 2.45;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " AUD" << std::endl;
     }
     else if (targetcurrency == "AED"){
      
             if (sourcecurrency == "USD"){
               amount = amount * 3.67;
             }
             else if (sourcecurrency == "EUR"){
                   amount = amount * 3.99;
             }
             else if (sourcecurrency == "XAF"){
                   amount = amount /152.48;
             }
             else if (sourcecurrency == "GBP"){
                   amount = amount * 4.60;
             }
             else if (sourcecurrency == "NGN"){
                    amount = amount / 374.67;
             }
             else if (sourcecurrency == "CAD"){
                   amount = amount * 2.50;
             }
             else if (sourcecurrency == "JPY"){
                   amount = amount / 42.78;
             }
             else if (sourcecurrency =="CHF"){
                   amount = amount * 4.34;
             }
             else if (sourcecurrency == "AUD"){
                   amount = amount * 2.45;
             }
          std::cout << std::fixed << std::setprecision(2) << amount << " AED" << std::endl;
      }
     
            
  return 0;
}
