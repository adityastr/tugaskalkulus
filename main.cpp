#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   //memfaktorkan persamaan kuadrat
   //bentuk umum persamaan kuadrat ax^2+bx+c
   int pilih;
   cout<<"==================================================================="<<endl;
   cout<<"=========== PROGRAM KALKULATOR PENYELESAIAN KALKULUS =============="<<endl;
   cout<<"==================================================================="<<endl;
   cout<<"1. Memfaktorkan persamaan kuadrat"<<endl;
   cout<<"2. Menentukan turunan"<<endl;
   cout<<"3. perkalian variabel sederhana (maksimum 2 variabel)"<<endl;
   cout<<"masukkan pilihan anda:"<<endl;
   cin>>pilih;

   
   switch (pilih){

   //PROGRAM PEMFAKTORAN PERSAMAAN KUADRAT
   case 1:
   cout<<"===================================================================="<<endl;
   cout<<"======== PEMFAKTORAN PERSAMAAN DAN PERTIDAKSAMAAN KUADRAT  ========="<<endl;
   cout<<"===== dengan syarat diubah terlbih dahulu kedalam bentuk umum. ====="<<endl;
   cout<<"============ Bentuk umum persamaan kuadarat ax^2+bx+c =============="<<endl;
   cout<<"===================================================================="<<endl;
   float a,b,c,diskriminan,x1,x2;
   cout<<"Masukkan nilai koefisien a:"<<endl;
   cin>>a;
   cout<<"Masukkan nilai koefisien b:"<<endl;
   cin>>b;
   cout<<"Masukkan nilai koefisien C:"<<endl;
   cin>>c;
   diskriminan=(b*b-4*a*c);
   if (diskriminan>=0){

   //kondisi jika diskriminan lebih dari 0
   x1=(-b+sqrt(diskriminan))/2*a;
   x2=(-b-sqrt(diskriminan))/2*a;
   cout<<"x1= ";cout<<x1<<endl;
   cout<<"x2= ";cout<<x2<<endl; 
   }

   else{
   //kondisi jika diskriminan lebih dari 0
   cout<<"bilangan imaginer !!!";
   }
   break;

   //PROGRAM TURUNAN
   case 2:
   int pangkat;
   float a2,n2,hasil2;
   cout<<"==================================================================="<<endl;
   cout<<"======================== MENGHITUNG TURUNAN ======================="<<endl;
   cout<<"================ bentuk umum TURUNAN: f'(x)=n.ax^n-1 =============="<<endl;
   cout<<"==================================================================="<<endl;
   cout<<"masukkan koefisien nilai a:"<<endl;
   cin>>a2;
   cout<<"masukkan nilai pangkat a:"<<endl;
   cin>>n2;
   pangkat=n2-1;
   hasil2=n2*a2;
   cout<<"f'(x)=";cout<<hasil2;cout<<"x";cout<<"^";cout<<pangkat;

   case 3:
   int nilaiPangkat3v1,nilaiPangkat3v2;
   char varPertama3,varKedua3,hasil3;

   cout<<"perkalian antar variabel"<<endl;
   cout<<"masukan variabel pertama:"<<endl;
   cin>>varPertama3;
   cout<<"masukan nilai pangkat variabel pertama:"<<endl;
   cin>>nilaiPangkat3v1;
   cout<<"masukan variabel kedua:"<<endl;
   cin>>varKedua3;
   cout<<"masukan nilai pangkat variabel kedua:"<<endl;
   cin>>nilaiPangkat3v2;
   if (varPertama3==varKedua3){
      cout<<varPertama3;cout<<"^";cout<<nilaiPangkat3v1+nilaiPangkat3v2;
   }
   else
   {
      cout<<varPertama3;cout<<"^";cout<<nilaiPangkat3v1;cout<<"+";cout<<varKedua3;cout<<"^";cout<<nilaiPangkat3v2;
   }

   break;
   default:cout<<"pilihan yang anda maukkan salah";
   }
   
   return 0;
}