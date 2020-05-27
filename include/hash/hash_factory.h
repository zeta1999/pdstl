#ifndef INCLUDE_HASH_HASH_FACTORY_H_
#define INCLUDE_HASH_HASH_FACTORY_H_

#include <memory>
#include <vector>

#include "hash.h"

template <
    // Input type of hash function
    typename T,
    // Output type of hash function (default: uint32_t)
    typename S>
class HashFactory {
   public:
    virtual std::unique_ptr<Hash<T, S>> createHash(S seed) = 0;
    virtual std::vector<std::unique_ptr<Hash<T, S>>> createHashVector(std::size_t num) = 0;
    virtual ~HashFactory() {}
};

#endif   //INCLUDE_HASH_HASH_FACTORY_H_
