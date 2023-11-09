#ifndef QLCB_H_INCLUDED
#define QLCB_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include "CanBo.h"

using namespace std;

class QLCB
{
private:
    vector<CanBo*> listCanBo;
public:
    void addCanBo (CanBo* canBo);

    void searchName(string name);

    void displayListCanBo ();

};

#endif // QLCB_H_INCLUDED


