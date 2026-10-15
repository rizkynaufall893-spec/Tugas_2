#include <iostream>
using namespace std;

int main() {int Nilai;
        cout<<"Masukkan Nilai";
        cin>>Nilai;
    if (Nilai>90){
        cout<<"Nilai anda A";
    }
    else if(Nilai>80){
        cout<<"Nilai anda B";
    }
    else if(Nilai>70){
        cout<<"Nilai anda C";
    }
    else{cout<<"Nilai anda D";
        }
    return 0;
}
