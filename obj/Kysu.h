#ifndef KYSU_H_INCLUDED
#define KYSU_H_INCLUDED

#include "CanBo.h"
#include <iostream>
using namespace std;


class KySu : public CanBo
{
private:
    string major;
public:
    KySu(string name, int age, string gender, string address, string major);

};

#endif // KYSU_H_INCLUDED

#include <iostream>
using namespace std;


