#include<iostream>
#include"Brass-claim.h"
Brass::Brass(const std::string & Name ,long id , int money ) :name(Name),advance(money),account(id){}
void Brass::show()const
{
    std::cout<<"name:"<<name<<std::endl;
    std::cout<<"account:"<<account<<std::endl;
    std::cout<<"advance:"<<advance<<std::endl;
}
void Brass::withdraw(int money)
{
    if (money<= this->advance)
    {
        advance -=money;
    }
    else
        std::cout<<"anvance less";
    
}
void Brass::depoist(int money)
{
    this->advance +=money;
}
void Brassplus::show()const
{
    std::cout<<"limit:"<<limit<<std::endl;
    std::cout<<"rate:"<<rate<<std::endl;
    std::cout<<"owe:"<<owe<<std::endl;
    Brass::show();
}
void Brassplus::withdraw(int money)
{
    int Advance =get_Advance();
    if(money<=Advance)
    {
        Brass::withdraw(money);
    }
    else if (money<(Advance+limit-owe))
    {
        owe += money-Advance;
        Advance = 0;
    }
    else
        std::cout<<"none"<<std::endl;
}
