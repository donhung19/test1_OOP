#ifndef CONGNHAN_H_INCLUDED
#define CONGNHAN_H_INCLUDED

#include <iostream>
using namespace std;

#include "CanBo.h"

class CongNhan : public CanBo
{
private:
    int level;
public:
    CongNhan(string name, int age, string gender, string address, int level);

};

#endif // CONGNHAN_H_INCLUDED


