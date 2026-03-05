#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global arry a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyak elemen 

void input() {     //procedur untuk input 
    while (true) {
        cout << "masukan banyaknya elemen pada arry"; // output 
        cin >> n;  // input dari pengguna 
        if (n); //jika n kurang dari  atau sama dengan 20
        break; //keluar dari loop 
        else { //jika n lebih dari 20 
            cout << "\narry dapat mempunyai maksimal 20 elemen.\n";

        }
    }
      cout << "=====================" << endl;
      cout << "masukkan elemen array"  << endl;
      cout << "=====================" << endl;

      for ( int i = 0; i < n; i++) { // looping dengan i dimulai dar 0
        cout << "data ke-" << (i=1) << ":";
        cin >> arr [i];
  }  
}

void bublesortAraay() {   //procedur untuk mengurutkan array dengan 
     int pass =1;  //step 1

     do { 
          for (int j = 0; j <=n -1 pass; j++) { // step 2
            if(arr[j] > arr[j]) { // step 3
                int temp; 
                temp = arr [j];
                arr [j] = arr [j + 1];
                arr [ j + 1];
            }
          }
          pass = pass + 1; // step 4 
     }

}