#include <sstream>
#include "Block.h"

Block::Block(uint32_t nIndexIn, const Transaction &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);
}

string Block::GetHash() {
    return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty) {
    
    char *cstr = new char[nDifficulty +1];
    //char cstr[nDifficulty +1];

    for (uint32_t i=0; i < nDifficulty; i++) {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';

    string str(cstr);

    do {
        _nNonce++;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, nDifficulty) != str);

    cout << "Block mined: " << _sHash << endl;
    cout << "Proof of Work (PoW): " << _nNonce << endl;

    delete[] cstr;
}


inline string Block::_CalculateHash() const {
    SHA256 sha256;
    
    stringstream ss;

    ss << _nIndex << _tTime << _sData.toString() << _nNonce << sPrevHash;

    // Create one-way hash object
    return sha256(ss.str());
}