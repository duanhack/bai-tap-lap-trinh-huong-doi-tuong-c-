#include<iostream>
#include "PhanSo.h"
using namespace std;
int main(){
    PHANSO ps1(4,10);
    ps1.Reduce();
    cout<<"Phan So 1: ";
    ps1.Print();
    PHANSO ps2(8,14);
    ps2.Reduce();
    cout<<"Phan So 2: ";
    ps2.Print();
    PHANSO sub,add,multi,div;
    sub=sub.Sub(ps1,ps2);
    add=add.Add(ps1,ps2);
    multi=multi.Multi(ps1,ps2);
    div=div.Div(ps1,ps2);
    cout<<"Sub: ";
    sub.Print();
    cout<<"Add: ";
    add.Print();
    cout<<"Multi: ";
    multi.Print();
    cout<<"Div: ";
    div.Print();
    ps1=ps1.MaxOfPS(ps2);
    cout<<"MAX of two PS: ";
    ps1.Print();
    return 0;
}