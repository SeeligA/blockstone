#ifndef BLOCK_H
#define BLOCK_H

#include <cstdint>
#include <iostream>
#include "./lib/hash-library/sha256.h"
#include "Transaction.h"

using namespace std;

class Block {
public:
    string sPrevHash;

    Block(uint32_t nIndexIn, const Transaction &sDataIn);

    string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    Transaction _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;
};

#endif