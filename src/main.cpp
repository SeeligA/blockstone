#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();
    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(-1, Transaction("send", "receive", 10)));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(1, Transaction("send", "receive", 20)));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(1, Transaction("send", "receive", 30)));    

    return 0;
}