#include"btparse.h"


#include<algorithm>
//#include<functional>

/**
 * @brief BCodeINT::operator()
 * @return long long
 */
long long BCode_INT::operator()(std::string::iterator& itr) {
    auto head_itr = itr;
    while(*itr != 'e') {
        itr++;
    }

    std::string number {head_itr, itr};
    long long res = std::stoll(number);
    return res;

}

std::string BCode_STR::operator()(string_itr& itr) {
    const auto begin_itr = itr;
    //auto tmp_itr = itr;
    while( *itr != ':') {
        itr++
    }

    std::string num {begin_itr, itr};

    int str_num = std::stoi(num);

    std::string result{itr,itr+str_num};
    itr+=str_num;
    return result;
}

template< typename T>
std::list<T> BCode_LIST<T>::operator()(string_itr& itr) {

    while( *itr != 'e'){

    }
}




class ParseSheduel {
    bool
};




ParseBt& ParseBt::parsing() {

    for( auto i = text.begin(); i != text.end();) {
        if(*i = 'i'){
            long long
        }
    }
}
