#include <iostream>
#include <time.h>



using namespace std;


int BruteForcearama(int dizi[],int x){

    int enbuyuk=dizi[0];

    for (int i=0;i<x;i++) {
        for (int j=i+1;j<x;j++) {
            if (enbuyuk<dizi[j])
                enbuyuk=dizi[j];
        }
    }

   return enbuyuk;
}

int LineerArama(int dizi[],int x){

    int enbuyuk=dizi[0];

    for (int i=1;i<x;i++){

        if (enbuyuk<dizi[i])
            enbuyuk = dizi[i];
    }

    return enbuyuk;


}





int main()
{

    int Boyut = 10000;
    int sayilar[Boyut];
    for (int i=0;i<Boyut;i++)
    sayilar[i]=rand()%9999+1;

    clock_t baslangicadresi=clock();

    int LineerOlarakEnbuyuk=LineerArama(sayilar,Boyut);
    clock_t bitisadresi=clock();

    float LineerCalismaSuresi=float(bitisadresi-baslangicadresi)/CLOCKS_PER_SEC;

    baslangicadresi=clock();

    int BruteForceOlarakEnBuyuk=BruteForcearama(sayilar,Boyut);

    bitisadresi=clock();

    double BruteCalismaSuresi=double(bitisadresi-baslangicadresi)/CLOCKS_PER_SEC;

    cout<<"Lineer Olarak En Buyuk Sayi "<<LineerOlarakEnbuyuk<<endl;
    cout<<endl;
    cout<<"Lineer Olarak Calisma Suresi "<<LineerCalismaSuresi<<" sn"<<endl;
    cout<<endl;
    cout<<"Brute Force Olarak En Buyuk Sayi "<<BruteForceOlarakEnBuyuk<< endl;
    cout<<endl;
    cout<<"Brute Force Olarak Calisma Suresi "<<BruteCalismaSuresi<<" sn"<<endl;

    return 0;
}
