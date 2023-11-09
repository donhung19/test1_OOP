#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED

#include <iostream>
using namespace std;

#include "CanBo.h"

class NhanVien : public CanBo
{
private:
    string work;
public:
    NhanVien(string name, int age, string gender, string address, string work);

};

#endif // NHANVIEN_H_INCLUDED


