#include <iostream>
#include <string>
using namespace std;

class dataDiri {
    private: 
        string arr[4][2] = {
            {"siswasatu@school.id", "0000"},
            {"siswadua@school.id", "1111"},
            {"siswatiga@school.id", "2222"},
            {"siswaempat@school.id", "3333"}
        }; 
        string email, sandi;
        
        string dt[4][3]={
            {"Andika", "Semarang", "12/01/2006"},
            {"Bella", "Ungaran", "04/04/2006"},
            {"Cintia", "Kendal", "27/03/2006"},
            {"Deco", "Demak", "05/02/2006"}
        };

    public:
        dataDiri(string Email, string Sandi){
            email = Email;
            sandi = Sandi;
        }

    void masuk(){
        bool check = rillcuy();
        if(check == true){
            cout<<"Selamat Datang"<<endl;
            cout<<"Data diri dari "<<email<<endl;
            cout<<"Nama : "<<dt[0][0]<<endl;
            cout<<"Tempat Lahir : "<<dt[0][1]<<endl;
            cout<<"Tanggal Lahir : "<<dt[0][2]<<endl;
        } else{
            cout<<"Maaf Email atau Sandi Salah"<<endl;
        }
    }

    bool rillcuy(){
        int rows = sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i<rows;i++){
            if (arr[i][0] == email && arr[i][1] == sandi){
                dt[0][0] = dt[i][0];
                dt[0][1] = dt[i][1];
                dt[0][2] = dt[i][2];
                return true;
            }
        }
        return false;
    }
};