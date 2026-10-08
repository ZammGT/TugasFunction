#include <iostream>
using namespace std;
string nama;
string kelas;
void sapa(){
    cout<<"Masukkan Nama Mu : " ;
    cin>>nama;
}
void sekolah(){
    cout<<"Masukkan Kelasmu : ";
    cin>>kelas;
}
void tampilan(){
    cout<<"Namamu Adalah ";
    cout<<nama <<endl;
}
void tampilan1(){
    cout<<"Kelasmu Adalah ";
    cout<<kelas <<endl;
}
int main() {
    sapa();
    sekolah();
    tampilan();
    tampilan1();
    return 0;
}
