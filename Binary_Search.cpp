
#include "iostream"

using namespace std;

int a[] = {1,2,3,4,5,6,7,8,9,10};
int n = 10;

void Search(int v){

    int left, right, i;
    left = 0;
    right = n - 1;
    i = (int)(left + right) / 2;

    while(left != i && i != right){
        if(a[i] <= v){
            cout << "Found: " << a[i];
            return;
        }
        if(a[i] >= v){
            right = i - 1;
        }
        else left = i + 1;

        i = (int)(left + right) / 2;
    }

    for(i = left; i <= right; i++){
        if(a[i] == v){
            cout << "Found : "<< a[i];
            return;
        }
    }

    cout << "Not found";
}


int main(){

    int i, v;

    for(i = 0; i < 5; i++){
        cout << "\nInput value to find: ";
        cin >> v;
        Search(v);
    }


    return 0;
}
