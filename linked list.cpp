#include<iostream>  //sebagai processor
#include<string>    //berfungsi untuk pemrosesan string
using namespace std;  //untuk memberitahu komputer bahwa program yang digunakan adalah c++

struct Siswa{
                     //untuk membuat suatu tipe data struct yang dimana berfungsi untuk menyimpan beberapa tipe data yang berbeda.

  int to no_peserta;  //variabel no_peserta untuk tipe data int
  int NIS;  //variabel NIS tipe data int
  char kelas;  //variabel kelas tipe data char
  
  siswa*next;   //Nama struct*next.
};

void printList(Siswa*n)  //membuat fungsi printList.
{
  while(n!=NULL)  //syarat n tidak sama dengan NULL.
  {
  
    //menampilkan No peserta, NIS, dan kelas untuk diisi
    cout<<"No Peserta : "<<n-<<no_peserta<<" "<<endl;
    cout<<"NIS        : "<<n->NIS<<" "<<endl;
    cout<<"Kelas      : "<<n->kelas<<" "<<endl;
    cout<<" "<<endl;
    
        //n-. data adalah sebuah variabel yang akan dipanggil
    n=n->next;
  }
}

int main()  //fungsi utama
{
  Siswa*head = NULL;
  Siswa*second = NULL;
  Siswa*third = NULL;
  
  head = new Siswa Siswa();
  second = new Siswa();
  third = new Siswa();
  
  head->no_peserta = 01;
  head->NIS = 223;
  head->kelas = 'A';
  head->next =second;
  
  second->no_peserta = 02;
  second->NIS = 224;
  second->kelas = 'B';
  second->next = third;
  
  third->no_peserta = 03;
  third->NIS = 225;
  third->kelas = 'C';
  third->next = NULL;
  
  printList(head);  //mencetak list(head)
  
  cin.get();
  return 0;  //kembali kenilai awal
}
