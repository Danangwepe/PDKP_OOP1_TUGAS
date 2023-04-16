#include <iostream>
#include "pendefinisi.cpp"
using namespace std;

int main(){
    string email, sandi;

    cout<<"Masukan email anda : ";
    cin>>email;

    cout<<"Masukan sandi : ";
    cin>>sandi;

    dataDiri arr(email, sandi);
    arr.masuk();
}