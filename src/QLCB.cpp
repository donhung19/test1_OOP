#include <iostream>
#include <vector>
#include <string>
using namespace std;


#include "QLCB.h"



    void QLCB::addCanBo (CanBo* canBo)
    {
        listCanBo.push_back(canBo);
    }

    void QLCB::searchName(string name)
    {
        cout<<"Ket qua tim kiem theo ho va ten la: " <<endl;
        for (CanBo* canBo : listCanBo)
        {
            if (canBo -> name == name)
            {
                cout << canBo -> name << endl
                     << canBo -> age << endl
                     << canBo -> gender << endl
                     << canBo -> address << endl
                     << endl;
            }
        }
    }

    //void QLCB.::cpp
    //#include "QLCB.h"
    //#include <iostream>


    void QLCB::displayListCanBo ()
    {
        cout << "Danh sach can bo la: " << endl;
        for (CanBo* canBo : listCanBo)
        {
            cout << canBo -> name << endl
                     << canBo -> age << endl
                     << canBo -> gender << endl
                     << canBo -> address << endl
                     << endl;
        }
    }
