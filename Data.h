/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Data.h
 * Author: mrichardson
 *
 * Created on March 7, 2017, 1:55 PM
 */

#ifndef DATA_H
#define DATA_H


#include <boost/any.hpp>
#include <boost/date_time.hpp>

class Data {
public:

    Data();
    Data(const Data& orig);
    
    void set_time();
    
    template <class T> 
    T get_data();
    
    virtual ~Data();
private:
    boost::any data;
    boost::posix_time::ptime now;

};

#endif /* DATA_H */

