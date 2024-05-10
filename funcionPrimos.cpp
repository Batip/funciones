#include <iostream>
using namespace std;



bool primo(int numero, bool esPrimo){
    esPrimo = true;
    if(numero <= 1){
    esPrimo = false;
}else{
    for(int i = 2; i*i <= numero; i++){
        if(numero%i == 0){
            esPrimo = false;
            break;
        }
    }
}
}
int main(){
    int num = 3;
    bool esPrimo = true;
    bool nroPrimo = primo(num, esPrimo);
    if(nroPrimo){
        cout << "El numero " << num << " es primo";
    }else{
        cout << "El numero " << num << " no es primo";
    }
}



/*
int fibonacci(int numero){
    if (numero <= 1){
        return numero;
    }else{
        return fibonacci(numero -1) + fibonacci(numero -2);
    }
}
*/
