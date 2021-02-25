#ifndef BTPARSE_H
#define BTPARSE_H

#include<string>
#include<list>
#include<functional>



struct BCode_INT{
    long long operator()(std::string&& str);
    long long i;
};

struct BCode_STR{
    typedef std::string::iterator string_itr;
    std::string operator()(string_itr& itr);
    std::string s;
};


template <typename T>
struct BCode_LIST{
    std::list<T> operator()(std::string&& str);
    std::list<T> l;
};

template <typename Key, typename Value>
struct BCode_DIC{
    std::map<Key,value> operator()(std::string&& str);
    std::map<Key,Value> dic;
};






class ParseBt {
public:
    ParseBt(const ParseBt& pb);
    ParseBt(const ParseBt&& pbb);
    ParseBt(const std::string& btName);




private:
        std::ifstream bt;
        std::string text;
        std::vector<BCode_INT> _ints;
        std::vector<BCode_STR> _strings;
        std::vector<BCode_LIST> _list;
        std::vector<BCode_DIC> _dic;

public:
        ParseBt& parsing();



};




#endif // BTPARSE_H
