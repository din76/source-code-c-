
#include "iostream"
#include "fstream"

using namespace std;

int main(){
    fstream f;
    string x = "Anh Yeu Tram";
    string y;
    f.open("number.inp",ios::out|ios::binary);
    f.write((char*)&x,sizeof(x));
    f.close();

    f.open("number.inp",ios::in);
    f.read((char*)&y,sizeof(y));

    cout << y;

    return 0;
}
