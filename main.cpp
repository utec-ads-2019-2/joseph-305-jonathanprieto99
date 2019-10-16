#include <iostream>

using namespace std;

int main () {
    int recorredor=0;
    int array[15] = {0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740,
                 93313, 459901, 1358657, 2504881, 13482720};

    while(cin>>recorredor and recorredor != 0){
        cout<<array[recorredor]<<endl;
    }
}

