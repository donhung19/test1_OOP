#include <iostream>
using namespace std;

#include "Kysu.h"


    KySu::KySu(string name, int age, string gender, string address, string major)
        : CanBo(name, age, gender, address)

    {
        this->major = major;
    }

