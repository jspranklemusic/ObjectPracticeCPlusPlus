#include <iostream>
#include <string>

class Account{
  public:
  std::string user{""};
  int balance{0};
  Account(){};
  Account(std::string user, int balance){
    user = user;
    balance = balance;
    std::cout<<"Your name is "<<user<<" and your balance is "<<balance<<"."<<std::endl;
  };

  void withdraw(int num){
    balance -= num;
    std::cout<<"Your balance is:"<<balance<<std::endl;
  };
   void deposit(int num){
    balance += num;
    std::cout<<"Your balance is:"<<balance<<std::endl;
  };
};

int main() {
  Account jonathan(std::string{"Jonathan"},1000);
  std::cout << "Hello World!\n";

  
}