#include <iostream>
using namespace std;

/*double dan int adalah tipe data
phi adalah konstanta*/
const double phi = 3.14;
int r,t;

int main (){
  cout<<"Menghitung volume kerucut dengan inputan\n"<<endl;
  cout<<"Masukkan Jari-jari kerucut : ";
  cin>>r;
  cout<<"Masukkan Tinggi Kerucut : ";
  cin>>t;
  
  //Variable Lokal
  double volume = (phi*r*r*t)/3;
  cout<<"Volume Kerucut : "<<volume<<endl;
  
  return 0;
}
