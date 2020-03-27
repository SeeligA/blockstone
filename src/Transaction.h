#ifndef TRANSACTION_H
#define TRANSACTION_H

using namespace std;

#include <sstream>
#include <cstdint>

class Transaction {
public:
    Transaction(const string &sender, const string &recipient, uint32_t value); 

    friend std::ostream& operator<< (std::ostream &out, const Transaction &trans);

    string toString() const;
private:
    string _sender;
    string _recipient;
    uint32_t _value;   

};

#endif