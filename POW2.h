#include <stdint.h>
#ifndef DEF_POW2
#define DEF_POW2
inline bool isPowOf2(uint32_t x){
  return (x<0) ?
    (__builtin_ctz(x)+__builtin_popcount(x))==sizeof(uint64_t)<<3&&(~x) :
    (__builtin_popcount(x)==1)&&(x!=1);
}
inline bool isPowOf2(uint64_t x){
  return (x<0) ?
    (__builtin_ctzll(x)+__builtin_popcountll(x))==sizeof(uint64_t)<<3&&(~x) :
    (__builtin_popcountll(x)==1)&&(x!=1);
}
inline bool isPowOf2Positive(uint32_t x){
  return (__builtin_popcount(x)==1)&&(x!=1);
}
inline bool isPowOf2Positive(uint64_t x){
  return (__builtin_popcountll(x)==1)&&(x!=1);
}
inline int perfectLog2(uint32_t x){
  return __builtin_ctz(x);
}
inline int perfectLog2(uint64_t x){
  return __builtin_ctzll(x);
}
#endif

