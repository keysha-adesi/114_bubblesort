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
          for (int j = 0; j <=n -1 -pass; j++) { // step 2
            if(arr[j] > arr[j]) { // step 3
                int temp; 
                temp = arr [j];
                arr [j] = arr [j + 1];
                arr [ j + 1];
            }
          }
          pass = pass + 1; // step 4 

          cout << "\nPass " << pass - 1 << ": "; // number of pass 
          for ( int k =0; k < n; k++) {
            cout << arr[k] << " ";         // menampilkan data pada number pass 
            
          }
          cout << endl;

     } while (pass <= n-1);  // step 5
}


 void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for ( int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array 
        if (j< n - 1) {
            cout << " --> ";
        }
    }
cout << endl;
cout << endl;
cout <<" jumlah pass = " <<n - 1 << endl; //menampilkan jumlah  dari pass 
cout << endl;
cout << endl;
 }