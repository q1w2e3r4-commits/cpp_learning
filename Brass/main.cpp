#include<iostream>
#include<string>
#include"Brass-claim.h"
#include<stdlib.h>
int main()
{
    std::string name;
    int money;
    long id;
    std::cout<<"name:"<<std::endl;
    while(!(std::cin>>name))
    {
        std::cin.clear();
        while(std::cin.get()!='\n') { }
        std::cout<<"input again"<<std::endl;
    }
    std::cout<<"id:"<<std::endl;
     while(!(std::cin>>id))
    {
        std::cin.clear();
        while(std::cin.get()!='\n'){}
        std::cout<<"input again"<<std::endl;
    }
    std::cout<<"money:"<<std::endl;
    while(!(std::cin>>money))
    {
        std::cin.clear();
        while(std::cin.get()!='\n'){ }
        std::cout<<"input again"<<std::endl;
    }
    Brass client1(name , id , money);
    client1.show();
    
    system("pause");   
    return 0;
}