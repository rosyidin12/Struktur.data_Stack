#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<windows.h>
#define max 20
using namespace std;

struct bola
{
    int top;
    char tmp[20][max];
}
bola;

void push (char psb[20]);
void pop(char psb[20]);
void awal();
int isEmpty();
int isFull();

int main()
{
        int pilih;
        char psb[20];
        string i;
        awal();
        do
        {
                system("cls");
                        cout<<"\n\t--------- Program Stack --------\n";
                        cout<<"\n\t---- Daftar Pemain Sepak Bola ----\n\n";
                        cout<<" 1. PUSH(Simpan)"<<endl;
                        cout<<" 2. POP(Ambil)"<<endl;
                        cout<<" 3. EXIT(Keluar)"<<endl;
                        cout<<"____________________________________________\n\n";

                        if (!isEmpty())
                        {
                                for(int i = bola.top; i>=0; i--)
                                {
                                        cout<<""<<bola.tmp[i]<<""<<endl;
                                }

                        }
                        else
                        {
                                cout<<" daftar pemain sepak bola kosong ";
                        }
                        cout<<"\nMasukan Pilihan : ";
                        cin>>pilih;
                        switch (pilih)
                        {
                                case 1:
                                        cout<<"Nama Pemain : ";
                                        cin>>psb;
                                        push(psb);
                                        break;
                                case 2:
                                        pop (psb);
                                        break;
                                case 3:
                                        cout<<"Tekan enter untuk keluar : ";
                                        break;
                                        default:
                                                cout<<"ERROR!";
                                                break;

                        }
                }
        while (pilih!=3);

}
void push (char psb[20])
{
        if (!isFull())
        {
                bola.top = bola.top+1;
                strcpy(bola.tmp[bola.top],psb);
        }
        else
        cout<<"isi daftar pemain sepak bola penuh";
}
void pop (char psb[20])
{
        if (!isEmpty())
        {
                bola.top--;
                cout<<"nama pemain pada tumpukan ke- "<<bola.top+2<<"sudah diambil";
        }
        else
        cout<<"nama pemain kosong";
}
void awal()
{
        bola.top = -1;
}
int isEmpty()
{
        if (bola.top==-1)
                return 1;
                else
                return 0;
}
int isFull()
{
        if (bola.top == max-1)
                return 1;
                else

                return 0;
}
