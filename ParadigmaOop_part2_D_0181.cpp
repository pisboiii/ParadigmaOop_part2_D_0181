#include <iostream>
using namespace std;

class seseorang
{
public:
    virtual void pesan() = 0;
    /*virtual pesan()0
    {
        cout << "Pesan dari seseorang" << endl;
    }*/
};

class joko : public seseorang
{
public:
    //deklarasi
    void pesan()
    {
         //implementasi
        cout << "pesan dari joko" << endl;
    }
};

class lia : public seseorang
{
public:
    void pesan()
    { 
        cout << "pesan dari lia" << endl;
    } 
};


int main()
{
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    //akses method pesan() dari class seseorang
    //a.seseorang::pesan();

    return 0;
}

