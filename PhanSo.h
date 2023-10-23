class PHANSO{
    private:
        int TuSo;
        int MauSo;
    public:
        PHANSO();
        PHANSO(int a,int b);
        void Reduce();
        PHANSO Add(PHANSO a,PHANSO b);
        PHANSO Sub(PHANSO a,PHANSO b);
        PHANSO Multi(PHANSO a,PHANSO b);
        PHANSO Div(PHANSO a,PHANSO b);
        void Print();
        PHANSO MaxOfPS(PHANSO a);
        ~PHANSO();
};