#include<iostream>
#include "PhanSo.h"
#include<math.h>
using namespace std;
PHANSO::PHANSO(){
    TuSo=0;
    MauSo=1;
}
PHANSO::PHANSO(int a,int b){
    TuSo=a;
    MauSo=b;
}
void PHANSO::Reduce(){
    int ucln;
    int a=abs(TuSo);
    int b=abs(MauSo);
    if(TuSo==0&&MauSo==0){
        ucln=TuSo+MauSo;
    }
    else{
        while(a!=b){
            if(a>b){
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        ucln=a;
    }
    TuSo/=ucln;
    MauSo/=ucln;
}
PHANSO PHANSO::Add(PHANSO a,PHANSO b){
    PHANSO res;
    res.TuSo=a.TuSo*b.MauSo+b.TuSo*a.MauSo;
    res.MauSo=a.MauSo*b.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::Sub(PHANSO a,PHANSO b){
    PHANSO res;
    res.TuSo=a.TuSo*b.MauSo-b.TuSo*a.MauSo;
    res.MauSo=a.MauSo*b.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::Multi(PHANSO a,PHANSO b){
    PHANSO res;
    res.TuSo=a.TuSo*b.TuSo;
    res.MauSo=a.MauSo*b.MauSo;
    res.Reduce();
    return res;
}
PHANSO PHANSO::Div(PHANSO a,PHANSO b){
    PHANSO res;
    res.TuSo=a.TuSo*b.MauSo;
    res.MauSo=a.MauSo*b.TuSo;
    res.Reduce();
    return res;
}
void PHANSO::Print(){
    cout<<TuSo<<"/"<<MauSo<<" "<<endl;
}
PHANSO::~PHANSO(){
}
PHANSO PHANSO::MaxOfPS(PHANSO a){
    return (TuSo/MauSo > a.TuSo/a.MauSo)? *this : a;
}