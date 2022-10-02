#include <iostream>

using namespace std;

int main()
{
    float hasil, tinggi;
    
    cout<<"Program Penghitung Berat Badan Ideal"<<endl;
    cout<<""<<endl;
    cout<<"Masukkan tinggi badan (dalam cm) : ";
    cin>>tinggi;
    
    hasil = (tinggi-100)-(0.1*(tinggi-100));
    
    cout<<"Berat Badan Ideal : "<<hasil<<" kg";
    

    return 0;
}