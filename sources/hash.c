#include "hashtable.h"

/*
 *  tg:@poincare
 *  mail: mirza.bhuseynov@gmail.com
 *
 *  Function: FNV-1a hash function
 *  Is a non-cryptographic hash function
 *  This type works for 64-bit machines
 *  FNV variables set as wiki says: https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function#FNV-1a_hash
 *
 * */
uint64_t fnv1a_hash(const char* key) {
  uint64_t hash = FNV_offset_basis;
  for (const char* p = key; *p; p++) {
    hash ^= (uint64_t)(unsigned char)(*p);
    hash *= FNV_prime;
  }
  return hash;
}


