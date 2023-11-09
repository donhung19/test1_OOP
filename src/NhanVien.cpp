//#include <iostream>
//using namespace std;

#include "NhanVien.h"


    // NhanVien::NhanVien(string name, int age, string gender, string address, string work);


    // {
    //     this->work = work;
    // }

    NhanVien::NhanVien(string name, int age, string gender, string address, string work)
        : CanBo(name, age,gender,address)
    {
        {
        this->work = work;
    }

    }
