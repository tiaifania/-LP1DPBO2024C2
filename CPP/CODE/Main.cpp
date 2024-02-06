/*
Saya Tia ifania nugrahaningtyas mengerjakan LP1 [BDSG223] dalam mata kuliah
DPBO untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <bits/stdc++.h>
#include <algorithm>
#include "DPR.cpp"

using namespace std;
int main()
{

    int i, n = 0;
    //deklarasi variabel untuk nampung masukan
    string name;
    string id;
    string bidang;
    string partai;

    list<DPR> llist;    //membuat list
    cin >> n;   //meminta masukan untuk umlah awal anggota yang akan dimasukkan di awal
    for ( i = 0; i < n; i++)
    {
        DPR temp;   //membuat temp

        cin >> id >> name >> bidang >> partai;  //meminta masukan

        temp.set_id(id);    //men assign temp dengan value yang sudah diberikan
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);


        llist.push_back(temp);  //memasukkan ke dalam list
    }

    cout << "anggota dpr : " << '\n';
    i = 0;
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)       //perulangan untuk ngeprint isi list
    {
        cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }
    
    int a = 0;
    do
    {
        cout << "pilihan proses : " << '\n';    //khusus pemilihan proses yang ingin dipilih
        cout << "1. Tambah" << '\n' << "2. Hapus" << '\n' << "3. Sunting" << '\n' << "4. Selesai" << '\n';
        cin >> a;
        if (a == 1) //kalau ternyata milih tambah anggota baru
        {
            DPR temp;
            cout << "Masukkan id, nama, bidang, dan partai baru" << '\n';
            cin >> id >> name >> bidang >> partai;      //memasukkan nama anggota yang baru

            temp.set_id(id);    //set value
            temp.set_name(name);
            temp.set_bidang(bidang);
            temp.set_partai(partai);


            llist.push_back(temp);  //memasukkan ke list

            //menampilkan isi list kembali
            i = 0;
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
                i++;
            }
        }else if (a == 2)   //khusus pemilihan proses HAPUS
        {
            DPR temp;
            string idTujuan;
            cout << "masukkan id anggota dpr yang ingin di hapus : ";
            cin >> idTujuan;    //meminta masukan id tuuan yang ingin di hapus
            temp.set_id(idTujuan); //men assign value

            auto it = llist.begin();    //menset utnuk diawal list
            while (it != llist.end()) { //selama belum mencapai akhir list
                if (it->get_id() == idTujuan) { //jika ada id yang dituju
                    it = llist.erase(it);   //maka akan mengahpus elemen pada list tsb
                } else {
                    ++it;   //jalua tidak iterasi
                }
            }
            
            i = 0;
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
                i++;
            }
        }else if (a == 3)   //khusus pilihan SUNTING
        {
            DPR temp;
            string idTujuan;
            cout << "masukkan id anggota dpr yang ingin di sunting : "; //memasukkanid yang ingin di sunting
            cin >> idTujuan;

            auto it = llist.begin();
            while (it != llist.end()) { //akan berulang sampai akhir list
                if (it->get_id() == idTujuan) { //kalau ada id yang sama
                    string newName, newBidang, newPartai;   //membuat atribut temp
                    cout << "Masukkan data baru untuk anggota dengan ID yang dituju : " << idTujuan << endl;    //memasukkan data anggota yang baru
                    cout << "Nama: ";
                    cin >> newName;
                    cout << "Bidang: ";
                    cin >> newBidang;
                    cout << "Partai: ";
                    cin >> newPartai;
                    it->set_name(newName);  //assign value
                    it->set_bidang(newBidang);
                    it->set_partai(newPartai);
                    break;
                } else {
                    ++it;
                }
            }

            i = 0;
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
                i++;
            }
        }
        //selama a tidak sama dengan 4
    } while (a != 4);
    
    return 0;
    
}