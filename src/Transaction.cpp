#include "Transaction.h"

Transaction::Transaction(const string &sender, const string &recipient, uint32_t value) : _sender(sender), _recipient(recipient), _value(value) {} 


std::ostream& operator<< (std::ostream &out, const Transaction &trans) {
    out << "Sender: " << trans._sender << endl << "Recipient: " << trans._recipient << endl << "Value: " << trans._value;
    return out;
};

string Transaction::toString() const {
    ostringstream ss;
    ss << *this;    
    return ss.str();
}