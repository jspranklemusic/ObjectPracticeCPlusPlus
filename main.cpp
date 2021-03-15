#include <iostream>
#include <string>

class Account{
  private:
    std::string user;
    int balance;

  public:
  Account(std::string user="BlankUser", int balance=0)
    :balance{balance},user{user}
    {
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
  int getBalance(){
    return balance;
  };
  std::string getName(){
    return user;
  };
};

int main() {
  Account blankuser;
  std::cout << "Hello World!\n";


}