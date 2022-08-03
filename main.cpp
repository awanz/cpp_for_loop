#include <iostream>

using namespace std;

int main()
{
    // FOR
    for(int i = 0; i < 5; i++){
        cout << i;
    }
    cout << endl;

    // WHILE
    int j = 0;
    while(j < 9){
        cout << j;
        j++;
    }
    cout << endl;

    // DO - WHILE
    int k = 0;
    do{
        cout << k;
        k++;
    }while(k < 7);
    return 0;
}
