#ifndef DEF_POW2
#define DEF_POW2
inline bool isPowOf2(int x){
  return (x<0) ?
    (__builtin_ctz(x)+__builtin_popcount(x))==32&&(x!=-1) :
    (__builtin_popcount(x)==1)&&(x!=1);
}
inline bool isPowOf2(long long int x){
  return (x<0) ?
    (__builtin_ctzll(x)+__builtin_popcountll(x))==32&&(x!=-1) :
    (__builtin_popcountll(x)==1)&&(x!=1);
}
inline int perfectLog2(int x){
  return __builtin_ctz(x);
}
inline int perfectLog2(long long int x){
  return __builtin_ctzll(x);
}
#endif
