
#include "iostream"
#include "algorithm"
#include "conio.h"

using namespace std;

string add(string a,string b){

    if(a.length() < b.length())
        swap(a,b);
    string result = "";
    int l1 = a.length(), l2 = b.length(), k = 0, i1, i2;

    for(i1 = l1 - 1, i2 = l2 - 1; i1 >= 0 || i2 >= 0; i1--,i2--){
        int x = (a[i1] - 48) + ((i2 >= 0) ? (b[i2] - 48):0) + k;
        result += (x % 10 + 48);
        if(x >= 10){
            k = 1;
        }
        else k = 0;
    }
    if(k > 0){
        result += '1';
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){

    string a,b;

    cin >> a;
    cin >> b;

    cout << add(a,b);
    getch();
    return 0;
}
