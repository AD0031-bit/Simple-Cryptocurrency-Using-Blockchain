#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>
#include<chrono>
#include <iomanip>
#include<sstream>
using namespace std;
class Wallet{
    string name;
    double bal;
    public:
    Wallet(string n, int b)
    {
        name=n;
        bal=b;
    }
    void addCoins(double amount)
    {
        bal+=amount;
    }
    bool deductCoins(double amount)
    {
        if(bal<amount)
        {
            return false;
        }
        bal-=amount;
        return true;
    }
};
string get_time()
{
    auto now=chrono::system_clock::now();
    time_t currentTime=chrono::system_clock::to_time_t(now);
    tm *local=localtime(&currentTime);
    stringstream ss;
    ss<<put_time(local, "%d-%m-%Y %H:%M:%S");
    return ss.str();
}
class Transaction{
    string sender;
    string receiver;
    double amount;
    string timestamp;
    public:
    Transaction(string s, string r, double a,string t)
    {
        sender=s;
        receiver=r;
        amount=a;
        timestamp=get_time();
    }
    
};

class Block{
    public:
    int index;
    vector<Transaction>t;
    string prevHash;
    string Hash;
    Block(){

    }


};
int main()
{
    cout<<get_time();
}