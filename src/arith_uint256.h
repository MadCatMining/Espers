
// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef DIMINUTIVEVAULT_ARITH_UINT256_H
#define DIMINUTIVEVAULT_ARITH_UINT256_H

// Temporary for migration to opaque uint160/256
#include "uint256.h"

class arith_uint256 : public uint256 {
public:
    arith_uint256() {}
    arith_uint256(const base_uint<256>& b) : uint256(b) {}
    arith_uint256(uint64_t b) : uint256(b) {}
    explicit arith_uint256(const std::string& str) : uint256(str) {}
    explicit arith_uint256(const std::vector<unsigned char>& vch) : uint256(vch) {}
};

#define ArithToUint256(x) (x)
#define UintToArith256(x) (x)

#endif // DIMINUTIVEVAULT_UINT256_H
