#include <iostream>
#include <string>
using namespace std;

class Payment
{
public:
    virtual void processPayment() = 0;
};
class CreditCardPayment : public Payment
{
private:
    string cardNo;
    int cvv;
    double payment;
    string cardType;

public:
    CreditCardPayment(string cNo, int c, int p, string cT) : cardNo(cNo), cvv(c), payment(p), cardType(cT) {}
    void processPayment() override
    {
        cout << "The payment of " << payment << " is made with card no: " << cardNo << " " << cardType << endl;
    }
};
class PaypalPayment : public Payment
{
    string expDate;
    string cardType;
    int securityKey;
    double payment;

public:
    PaypalPayment(string eD, string cT, int sK, double p) : expDate(eD), cardType(cT), securityKey(sK), payment(p) {}
    void processPayment() override
    {
        cout << "The payment of " << payment << " is made with " << cardType << " using Paypal payment" << endl;
    }
};

int main()
{
    CreditCardPayment c("1221-23333-2222", 322, 100000, "Debit Card");
    PaypalPayment p("12/24", "Credit Card", 2333, 200000);
    c.processPayment();
    p.processPayment();
    return 0;
}
