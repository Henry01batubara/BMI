#include<iostream>
using namespace std;
 
int main()
{
 
float bmi,B,T; //B=Berat , T=Tinggi 
cout<<"Masukkan berat dalam Kg : ";
    cin>>B;
cout<<"Masukkan tinggi dalam m : ";
    cin>>T;
bmi=(B)/(T*T);
cout<<"BMI kamu adalah : "<<bmi<<endl;
 
if(bmi>29.9)
    cout<<"Obesitas ( olahragalah setiap hari dan lakukan kegiatan outdoor)";
else if(bmi<=29.9 && bmi>=25)
    cout<<"Kelebihan berat badan ( Rajinlah olahraga dan mulaileh kegiatanyang berhubungan dengan diet)";
else if (bmi<25 && bmi>=18.5)
    cout<<"Berat badan anda normal ( Pertahankan dan lakukan kegiatan yoga )";
else if (bmi<18.5 && bmi>=17)
    cout<<"Kekurangan berat badan tingkat ringan ( Makanlah secara teratur  )";
else 
    cout<<"Sangat kurang akan berat badan ( Makanlah yang banyak dan hindari kegiatan yang membuat stress )";
    
return 0;
}