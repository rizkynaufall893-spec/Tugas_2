#include <iostream>
using namespace std;

int main() {int Nilai;
        cout<<"Masukkan Nilai";
        cin>>Nilai;
    if (Nilai>90){
        cout<<"Nilai anda A"<<endl;
    }
    else if(Nilai>80){
        cout<<"Nilai anda B"<<endl;
    }
    else if(Nilai>70){
        cout<<"Nilai anda C"<<endl;
    }
    else{cout<<"Nilai anda D"<<endl;
        }
        system("pause");
    return 0;
}
