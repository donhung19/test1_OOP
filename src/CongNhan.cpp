#include <iostream>
using namespace std;

#include "CongNhan.h"


    CongNhan::CongNhan(string name, int age, string gender, string address, int level)
        : CanBo(name, age, gender, address)

    {
        this->level = level;
    }

