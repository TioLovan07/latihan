#include <iostream>
#define max 5
using namespace std;

int nomer [max];
int head=-1;
int tail=-1;

bool isEmpty(){
    if(tail==-1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(tail==max-1){
        return true;
    }
    else{
        return false;
    }
}

void AntrianMasuk(int no){
    if(isEmpty()){
        head=tail=0;
    }
    else{
        tail++;
    }
    nomer[tail]=no;
}

void AntrianKeluar(){
    if(isEmpty()){
        cout<<"Antrian sudah kosong"<<endl;
    }
    else{
        for(int a=head; a<tail; a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail==-1){
            head=-1;
        }
    }
}

void clear(){
    head=tail=-1;
}

void view(){
    if(isEmpty()){
        cout<<"Antrian kosong"<<endl;
    }
    else{
        for(int a=head; a<=tail; a++){
            cout<<"==========="<<endl;
            cout<<"No Antri : "<<nomer[a]<<endl;
            cout<<"==========="<<endl;
        }
    }
}

int main(){
    
    int choose, p=1, urut;
    do{
        
        cout<<"====program antrian===="<<endl;
        cout<<"======================="<<endl;
        cout<<"1. tambah antrian"<<endl;
        cout<<"2. panggil antrian"<<endl;
        cout<<"3. lihat daftar antrian"<<endl;
        cout<<"4. format"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"======================="<<endl;
        cout<<"choose : ";
        cin>>choose;
        system("clear");
        if(choose==1){
            if(isFull()){
                cout<<"Antrian Sudah Penuh"<<endl;
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout<<"======================="<<endl;
                cout<<"No Antrian"<<endl;
                cout<<p<<endl;
                cout<<"Silahkan Menunggu Untuk Dipanggil"<<endl;
                cout<<"======================="<<endl;
                p++;
            }
        }
        else if(choose==2){
            cout<<"====================="<<endl;
            cout<<"No Antri : "<<nomer[head]<<endl;
            cout<<"====================="<<endl;
            AntrianKeluar();
            cout<<"Silahkan Dipanggil"<<endl;
        }
        else if(choose==3){
            view();
        }
        else if(choose==4){
            clear();
            cout<<"Antrian Dikosongkan"<<endl;
        }
        else if(choose==5){
            cout<<"Anda sudah keluar."<<endl;
            cout<<"Terima Kasih.";
        }
        else{
            cout<<"Masukan Anda Salah"<<endl;
            cout<<"Silahkan Pilih-Pilihan Yang Tersedia"<<endl;
        }
    }
    while(choose!=5);
}
