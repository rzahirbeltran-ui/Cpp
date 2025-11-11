#include <iostream>
#include <vector>
using namespace std;
int cuenta20(){
    int positivos = 0, negativos = 0, ceros = 0;
    for (int i = 0; i < 20; i++){
        int numero;
        cin >> numero;
        if (numero > 0){
            positivos++;
        } else if (numero < 0){
            negativos++;
        } else {
            ceros++;
        }
    }
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;  
    cout << "Ceros: " << ceros << endl;
    return 0;  
}

int tablaMultiplicar(int numero){
    for (int i = 1; i <= 10; i++){
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}

int menor(vector<int> vec){
    
    int min = vec[0];
    for (int i = 1; i < vec.size(); i++){
        if (vec[i] < min){
            min = vec[i];
        }
    }
    return min;
}

int multiplos3o5(){
    int suma = 0;
    for (int i = 1; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            suma += i;
        }
    }
    return suma;
}

int primos(int limite){
    vector<int> primos;
    for (int num = 2; num <= limite; num++){
        bool esPrimo = true;
        for (int div = 2; div * div <= num; div++){
            if (num % div == 0){
                esPrimo = false;
                break;
            }
        }
        if (esPrimo){
            primos.push_back(num);
        }
    }

    return primos[-1];
}

int rectangulo(int ancho, int alto){
    for (int i = 0; i < alto; i++){
        for (int j = 0; j < ancho; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int rectanguloconespacios(int ancho, int alto){
    for (int i = 0; i < alto; i++){
        for (int j = 0; j < ancho; j++){
            if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

int rectanguloduplicados(int ancho, int alto, int duplicados){
    for (int i = 0; i<duplicados;i++){
        for (int j = 0; j<alto;j++){
            for (int k = 0; k<ancho;k++){
                if (j == 0 || j == alto - 1 || k == 0 || k == ancho - 1){
                    cout << "*";
                } else {
                    cout << " ";
                }
            
        }
        cout << endl;
    }
    cout << endl;
    }
    return 0;
}

int rectangulosjuntos(int ancho, int alto, int duplicados){
    for (int i = 0; i<duplicados;i++){
        int inicio;
        if (i==0) {
            inicio = 0;
        } else {
            inicio = 1; 
        }
            for (int j = inicio; j<alto;j++){
                for (int k = 0; k<ancho;k++){
                    if (j == 0 || j == alto - 1 || k == 0 || k == ancho - 1){
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                
            }
            cout << endl;
        }
        
        }
        return 0;
}
int main(){
    rectangulosjuntos(5, 4,3);
    return 0;
}