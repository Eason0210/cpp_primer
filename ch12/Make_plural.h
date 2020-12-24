#ifndef MAKE_PLURAL_H
#define MAKE_PLURAL_H
#include <string>

inline std::string make_plural(size_t ctr, const std::string &word, const std::string ending){
    return (ctr == 1) ? word: word + ending;
}

#endif
