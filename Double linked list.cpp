#include<iostream>  //processing
#include<conio.h>
#include<stdio.h>
#include<windows.h> //mendukung format system "CLS" sebagai pengganti clrscr.
using namespace.std;

int pilih; void pilihan();  //membuat fungsi pilihan
void insert_data();  //membuat fungsi insert data
void hapus_data();  //membuat fungsi hapus data
void cetak_data();  //membuat fungsi cetak data
struct node  //tipe data struct untuk menyimpan beberapa tipe data berbeda
{
  int NIM;  //variabel NIM tipe data int
  char nama [30];  //variabel nama tipe data char
  char gender[20];  //variabel gender tipe data char
  float nilai;  //variabel nilai
  node *prev, *next;  //nama struct node*prev dan node*next
};
node *baru, *head=NULL, *tail=NULL, *help, *del;
main()  //program utama
{
do
{
  system("cls");
  cout<<"\tLIN. DOUBLE LINKED LIST"<<endl;  //menampilkan DOUBLE LINKED LIST
  cout<<"\t==========================================<<endl;  //Menampilkan ============================
  cout<<"\t1. INSERT DATA"<<endl;  //menampilkan INSERT DATA
  cout<<"\t2. HAPUS DATA"<<endl;  //menampilkan HAPUS DATA
  cout<<"\t3. CETAK DATA"<<endl;  //menampilkan CETAK DATA
  cout<<"\t4. EXIT"<<endl;   //menampilkan EXIT
  cout<<"\tPilihan(1-4) : ";
  cin>>pilih;  //menyimpan dan mengimput data di variabel pilih
  cout<<endl<<endl;
  pilihan();
  cout<<"===========================================<<endl;
}
while(pilih!=4)
}
void pilihan() //fumgsi "pilihan untuk pemrosesan
{
  if(pilih==1)
  insert data();
  else if(pilih==2)
  hapus_data();
  else if(pilih==3)
  cetak_data();
  else
  {
    cout<<"EXIT";
    cout<<"\nSampai Jumpa Lagi"<<endl;
    }
  }
  void buat_baru()  //fungsi buat data baru
  {
    baru= new(node);
    cout<<"Masukkan NIM : ";cin>>baru->NIM;
    cout<<Masukkan Nama :";cin>>baru->nama;
    cout<<"masukkan Gender :"cin>>baru->gender;
    cout<<Masukkan Nilai :"cin>>baru->nilai;
    cout<<"\n\t---Data telah dimasukkan---";
    cout<<"\n\nPRESS ENTER TO CONTINUE...";
    getch();
    baru->prev=NULL;
    baru->next=NULL;
 }
 void insert_data()  //membuat fungsi insert_data
 {
  buat_baru();
  if(head==NULL)
  {
   head=baru;
   tail=baru;
  }
  else
  {
   baru->next=head;
   head->prev=baru;
   head=baru;
  }
  cout<<endl<<endl;
 }
 void hapus_data()  //fungsi penghapusan data
 {
  int hapus,NIM;
  if(head==NULL)
  {
    cout<<"\nLinked list kosong, \npenghapusan tidak dapat dilakukan"<<endl;  //data yang habis tampilannya
    }
    else
    {
      hapus=head->NIM;
      cout<<"\nData yang dihapus adalah";
      cin>>NIM;
      del = head;
      head = head->next;
      delete del;
     }
   }
   void cetak_data()    //membuat fungsi cetak_data
   {
    if(head==NULL)
    cout<<"\nData tidak dapat ditemukan!"<<endl;  //data yang kosong
    else
    {
      help=head;
      while(help!=NULL)
      {
        cout<<" NIM : "<<help->NIM;  //data akan mundul dengan tampilan
        cout<<"Nama : "<<help->nama;
        cout<<"Gender :"<<help->gender;
        cout<<"Nilai :"<<help->nilai<<endl;
        help=help->next;
       }
      }
  getch();
  }
      
      
  
  {
    
