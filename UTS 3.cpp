#include<iostream>
using namespace std;

int penjumlahan(int,int);
int penjumlahan(int,int,int);
double penjumlahan(double,double);

int main()
{
    cout<<"Hasil penjumlahan:"<< penjumlahan(2,4)<<endl;
    cout<<"Hasil penjumlahan:"<< penjumlahan(2,4,6)<<endl;
    cout<<"Hasil penjumlahan:"<< penjumlahan(5.5,2.4)<<endl;
    return 0;
}

int penjumlahan(int bil1,int bil2)
{
    return (bil1 + bil2);
}
int penjumlahan(int bil1,int bil2,int bil3)
{
    return (bil1 + bil2 +bil3);
}
double penjumlahan(double bil1, double bil2)
{
    return (bil1+ bil2);
}
