/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Data.cpp
 * Author: mrichardson
 * 
 * Created on March 7, 2017, 1:55 PM
 */

#include "Data.h"

Data::Data() {
}

Data::Data(const Data& orig) {
}

void Data::set_time() {
    now = boost::posix_time::second_clock::local_time();
}

template <class T>
T Data::get_data() {
    return boost::any_cast<T>(data);
}

Data::~Data() {
}