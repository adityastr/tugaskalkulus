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
   cout<<"4. Volume dan Luas permukaan tabung"<<endl;
   cout<<"masukkan pilihan anda: ";
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
   cout<<"Masukkan nilai koefisien a: ";
   cin>>a;
   cout<<"Masukkan nilai koefisien b: ";
   cin>>b;
   cout<<"Masukkan nilai koefisien C: ";
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
   break;

   case 3:
   int nilaiPangkat3v1,nilaiPangkat3v2;
   char varPertama3,varKedua3,hasil3;

   cout<<"perkalian antar variabel"<<endl;
   cout<<"masukan variabel pertama: ";
   cin>>varPertama3;
   cout<<"masukan nilai pangkat variabel pertama: ";
   cin>>nilaiPangkat3v1;
   cout<<"masukan variabel kedua: ";
   cin>>varKedua3;
   cout<<"masukan nilai pangkat variabel kedua: ";
   cin>>nilaiPangkat3v2;
   if (varPertama3==varKedua3)
   {
      cout<<varPertama3;cout<<"^";cout<<nilaiPangkat3v1+nilaiPangkat3v2;
   }
   else
   {
      cout<<varPertama3;cout<<"^";cout<<nilaiPangkat3v1;cout<<"+";cout<<varKedua3;cout<<"^";cout<<nilaiPangkat3v2;
   }
   break;

   case 4:
   float r4,t4,hasil4;
   int pilihan4,y4;
   cout<<"==================================================================="<<endl;
   cout<<"============== MENGHITUNG VOLUME DAN LUAS PERMUKAAN ==============="<<endl;
   cout<<"========================= SEBUAH TABUNG ==========================="<<endl;
   cout<<"==================================================================="<<endl;
   cout<<"1. Volume tabung"<<endl;
   cout<<"2. Luas permukaan tabung"<<endl;
   cout<<"Masukan pilihan anda: ";
   cin>>pilihan4;
   if (pilihan4==1){
      cout<<"==================================================================="<<endl;
      cout<<"===================== MENGHITUNG VOLUME TABUNG ===================="<<endl;
      cout<<"==================================================================="<<endl;
      cout<<"masukkan jari jari tabung: ";
      cin>>r4;
      cout<<"masukkan tinggi tabung: ";
      cin>>t4;
      hasil4=22/7*r4*r4*t4;
      cout<<"volume tabung = ";cout<<hasil4;
   }
   else
   {
      cout<<"==================================================================="<<endl;
      cout<<"================= MENGHITUNG LUAS PERMUKAAN TABUNG ================"<<endl;
      cout<<"==================================================================="<<endl;
      cout<<"masukkan jari jari tabung: ";
      cin>>r4;
      cout<<"masukkan tinggi tabung: ";
      cin>>t4;
      hasil4=2*22/7*r4*(r4+t4);
      cout<<"luas permukaan tabung = ";cout<<hasil4;
   }
   break;

   case 5:
   int pilihIntegral,konstanta5,n5,hasilIntegralTaktentu;
   cout<<"==================================================================="<<endl;
   cout<<"=============== MENGHITUNG INTEGRL TAK TENTU DAN TENTU ============"<<endl;
   cout<<"==================================================================="<<endl;
   cout<<"\n1. Tak tentu";
   cout<<"\n2. Tentu";
   cin>>pilihIntegral;

   //INTEGRAL TAK TENTU
   if (pilihIntegral==1)
   {
   cout<<"==================================================================="<<endl;
   cout<<"====================== INTEGRAL TAK TENTU ========================="<<endl;
   cout<<"==================================================================="<<endl;
   //a/(n+1)*x^n+1
   cout<<"Masukan nilai Konstanta : ";
   cin>>konstanta5;
   cout<<"\nMasukan nilai pangkat dari variabel : ";
   cin>>n5;

   hasilIntegralTaktentu=n5+1;

   cout<<"HASIL : \n";
   cout<<konstanta5<<endl;
   cout<<"-"<<" "<<"X"<<"^"<<hasilIntegralTaktentu<<" "<<"+"<<" "<<"C"<<endl;
   cout<<hasilIntegralTaktentu<<endl;
   }

   //INTEGRAL TENTU
   else{
   cout<<"==================================================================="<<endl;
   cout<<"======================== INTEGRAL TENTU ==========================="<<endl;
   cout<<"==================================================================="<<endl;
   //a/(n+1)*x^n+1
   }
   

   break;

   default:cout<<"pilihan yang anda maukkan salah";
   }
   
   return 0;
}
