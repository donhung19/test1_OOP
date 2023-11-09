#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "CanBo.h"
#include "CongNhan.h"
#include "Kysu.h"
#include "NhanVien.h"
#include "QLCB.h"

int main()
{
    QLCB qlcb;

    CanBo* canBo1 = new CongNhan("tom", 30, "male", "Hanoi",3);
    CanBo* canBo2 = new KySu("mon", 26, "male", "bacgiang", "mechanical");
    CanBo* canBo3 = new NhanVien("mon", 26, "female", "bacgiang", "work3");

    qlcb.addCanBo(canBo1);
    qlcb.addCanBo(canBo2);
    qlcb.addCanBo(canBo3);

    qlcb.displayListCanBo();

    cout<<"Nhap ten can bo can tim kiem: ";
    string name;
    cin >> name;

    qlcb.searchName(name);

    delete canBo2;

    return 0;
}
