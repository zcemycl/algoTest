#include "removeVowelsFromStr.h"

string removeVowelsFromStr::naive(string s){
    return regex_replace(s,regex("[aeiou]"),"");
}
