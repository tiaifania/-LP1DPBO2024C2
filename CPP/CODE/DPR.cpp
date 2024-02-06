//import library 
#include <iostream>
#include <string>

//using standard namespace
using namespace std;

class DPR
{
    private:    //mengisi atribut untuk menampung masukan user
        string id;
        string name;
        string bidang;
        string partai;

    public:
        DPR()
        {   //diset kosong
            this->id = "";
            this->name = "";
            this->bidang = "";
            this->partai = "";
        }

        DPR(string id, string name, string bidang, string partai)
        {
            this->name = name;  //kusus masukan yang ada parameternya
            this->id = id;
            this->bidang = bidang;
            this->partai = partai;
        }
        string get_id()
        {
            //mengambil isi value dari id
            return this->id;
        }

        void set_id(string id)  //untuk maasukin value ke atribut id
        {
            this->id = id;
        }

        string get_name()   //sama seperti yang diatas
        {
            return this->name;
        }

        void set_name(string name)
        {
            this->name = name;
        }


        string get_bidang()
        {
            return this->bidang;
        }

        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }

        string get_partai()
        {
            return this->partai;
        }

        void set_partai(string partai)
        {
            this->partai = partai;
        }


        ~DPR()  //free memory
        {

        }
};