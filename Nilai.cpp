#include <iostream>
using namespace std;

int main() {int Nilai;
        cout<<"Masukkan Nilai";
        cin>>Nilai;
    if (Nilai>90){
        cout<<"Nilai A";
    }
    else if(Nilai>80){
        cout<<"Nilai B";
    }
    else if(Nilai>70){
        cout<<"Nilai C";
    }
    else{cout<<"Nilai D";
        }
    return 0;
}
