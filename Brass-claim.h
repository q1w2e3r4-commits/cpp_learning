#ifndef Brass_h
#define Brass_h
#include<string>
#include<iostream>
using std::string;
class Brass
{
private:
    long account;
    int advance;
    std::string name;
public:
    Brass(const string & name = "none", const long id = -1 , int money = 0 );
    int get_Advance(){return advance;}
    virtual ~Brass(){}
    void depoist(int momey);
    virtual void withdraw(int money);
    virtual void show()const;
};
class Brassplus : public Brass
{
    private:
        int limit;
        double rate;
        double owe;
    public:
        Brassplus(const string & Name = "none", const long id = -1 , int money = 0 ,int l_limit = 500 ,double l_rate =0.012)
        : Brass::Brass(Name,id,money),limit(l_limit),rate(l_rate),owe(0){}
        virtual void withdraw(int money);
        virtual void show() const;
};
#endif