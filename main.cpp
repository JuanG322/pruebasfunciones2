#include <iostream>

using namespace std;

//Ejercicio 1
template <class TIPOD>
void despliegue(TIPOD dato);

//Ejercicio 2
int maximo(int, int, int);

//Ejercicio 3
void valNuevo(int&, int&);

//Ejercicio 4
void calcular(int, int, int&, int&);

//Ejercicio 5
void intercambiar(int&, int&);

//Ejercicio 6
void cambio(int, int&, int&, int&, int&, int&, int&);


//Ejercicio 7
void tiempo(int, int&, int&, int&);

//Ejercicio 8
void calc_anos(int, int&, int&, int&);

//Ejercicio 9
void cuadrado(int vec[], int);

//Ejercicio 10
int padirDatos(int, int[]);

//Ejercico 11
void invertirsigno(int, int[]);

//Ejercicio 12
void impares(int, int[]);

//Ejercicio 13
void mostrarMatriz(int [][3], int,int);

int main()
{
    cout << "Hello World!" << endl;
    int opcion = 1;
    while(opcion != 0){
        cout<<"Escoje una opcion "<<endl;
        cout<<"1. Mostrar en pantalla cualquier tipo de dato con un a template"<<endl;
        cout<<"2. Numero mayor con funciones"<<endl;
        cout<<"3. Paso de parametros por referencia"<<endl;
        cout<<"4. Devolver valores multiples"<<endl;
        cout<<"5. Intercambiar el calor de 2 variables con parametros por referencia"<<endl;
        cout<<"6. Billetes con valores por referencia"<<endl;
        cout<<"7. Minutos a horas:min:seg "<<endl;
        cout<<"8. Calcular la fecha"<<endl;
        cout<<"9. El cuadrado de un numero con paso de parametros con vectores"<<endl;
        cout<<"10. Sumar todos los elementos de un vector"<<endl;
        cout<<"11. Cambiar el signo de un numero"<<endl;
        cout<<"12. Mostrar los elementos impares de un arreglo"<<endl;
        cout<<"13. El cuadrado de todos los elementos de una matriz"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Escoje: ";cin>>opcion;

        switch (opcion) {
        case 1:{
            int a = 1;
            double b = 2.145;
            char c[] = "Hola";

            despliegue(a);
            despliegue(b);
            despliegue(c);
            break;
        }

        case 2:{
            int num1 = 0, num2 = 0, num3 = 0;
            cout<<"Ingrese los 3 numeros: ";cin>>num1>>num2>>num3;
            int max = maximo(num1, num2, num3);
            cout<<"El numero maximo es: "<<max<<endl<<endl;
            break;
        }

        case 3:{
            int num1 = 0 , num2 = 0;

            cout<<"Ingrese el numero 1: ";cin>>num1;
            cout<<"Ingrese el numero 2: ";cin>>num2;

            valNuevo(num1, num2);

            cout<<"Valores modificados: "<<num1<<endl;
            cout<<"Valores modificados: "<<num2<<endl;

            break;
        }

        case 4:{
            int num1 = 0, num2 = 0, suma = 0, producto = 0;
            cout<<"Numero 1: ";cin>>num1;
            cout<<"Numero 2: ";cin>>num2;

            calcular(num1, num2, suma, producto);
            cout<<"Suma: "<<suma<<endl;
            cout<<"Producto: "<<producto<<endl;

            break;
        }

        case 5:{
            int a = 0, b = 0;
            cout<<"Ingrese valor 1: ";cin>>a;
            cout<<"Ingrese valor 2: ";cin>>b;

            intercambiar(a, b);

            cout<<"Valor 1: "<<a<<endl;
            cout<<"Valor 2: "<<b<<endl;

            break;
        }

        case 6:{
            int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
            cout << "Ingresa un valor: " << endl;
            cin >> valor;

            cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

            cout<<"100 Dolares: "<<cien<<endl;
            cout<<"50 Dolares: "<<cincuenta<<endl;
            cout<<"20 Dolares: "<<veinte<<endl;
            cout<<"10 Dolares: "<<diez<<endl;
            cout<<"5 Dolares: "<<cinco<<endl;
            cout<<"1 Dolares: "<<uno<<endl<<endl;
            break;
        }

        case 7:{
            int totalseg = 0, seg = 0, min = 0, hora = 0;

            cout<<"Ingrese la cantidad de segundos: ";cin>>totalseg;
            tiempo(totalseg, seg, min, hora);
            cout<<"Horas: "<<hora<<endl;
            cout<<"Minutos: "<<min<<endl;
            cout<<"Segundos: "<<seg<<endl<<endl;
            break;
        }

        case 8:{
            int total_dias = 0, ano = 0, mes = 0, dia = 0;

            cout<<"Ingrese la cantidad de dias desde la fecha 1/1/2000: ";cin>>total_dias;
            calc_anos(total_dias, ano, mes, dia);

            cout<<"Fecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<ano+2000<<endl;
            break;
        }

        case 9:{
            const int TAM = 5;
            int vec[TAM] = {1,2,3,4,5};

            cuadrado(vec, TAM);
            cout<<endl;
            break;
        }

        case 10:{
            int TAM = 0, vec[100];
            int resultado = padirDatos(TAM, vec);
            cout<<"El vector sumado es igual a: "<<resultado<<endl<<endl;
            break;
        }

        case 11:{
            int TAM = 0;
            cout<<"Ingrese el tamano del vector: ";cin>>TAM;
            int vec[TAM];
            invertirsigno(TAM, vec);
            break;
        }

        case 12:{
            /*Ejercicio 14: Realiza una función que tome como parámetros un vector de enteros y
             * su tamaño e imprima un vector con los elementos impares del vector recibido.
             */
            int TAM = 0;
            cout<<"Ingrese el tamano del vector: ";cin>>TAM;
            int vec[TAM];
            impares(TAM, vec);
            break;
        }

        case 13:{
            const int Nfilas = 2, Ncolumnas = 3;
            int m[Nfilas][Ncolumnas] = {{1,2,3},{4,5,6}};
            mostrarMatriz(m, Nfilas, Ncolumnas);
            break;
        }
        case 0:{
            opcion = 0;
            break;
        }
        }
    }
    return 0;
}

//Ejercicio 1
template <class TIPOD>
void despliegue(TIPOD dato){
    cout<<"El dato es: "<<dato<<endl;
}

//Ejercicio 2
int maximo(int num1, int num2, int num3){
    int max = 0;
    if((num1 > num2) && (num1 > num3)) max = num1;
    else if(num2 > num3) max = num2;
    else max = num3;
    return max;
}

//Ejercicio 3
void valNuevo(int& num1, int& num2){//El & apunta a la direccion de memoria
    cout<<"Valor original: "<<num1<<endl;
    cout<<"Valor original: "<<num2<<endl;

    num1 = 85; num2 = 36;
}

//Ejercico 4
void calcular(int num1, int num2, int& suma, int& producto){
    suma = num1+num2;
    producto = num1*num2;
}

//Ejercico 5
void intercambiar(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}

//Ejercicio 6
void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor %= 100;

    cincuenta = valor/50;
    valor %= 50;

    veinte = valor/20;
    valor %= 20;

    diez = valor/10;
    valor %= 10;

    cinco = valor/5;
    valor %= 5;

    uno = valor;

    cout<<endl;
}

//Ejercicio 7
void tiempo(int totalseg, int& seg, int& min, int& hora){
    hora = totalseg/3600;
    totalseg %= 3600;

    min = totalseg/60;
    totalseg %= 60;

    seg = totalseg;
}

//Ejercicio 8
void calc_anos(int total_dias, int& ano, int& mes, int& dia){
    ano = total_dias/360;
    total_dias %= 360;

    mes = total_dias/30;
    total_dias %= 30;

    dia = total_dias;
}

//Ejercicio 9
void cuadrado(int vec[], int tam){
    int num = 0;
    for(int i = 0; i<tam; i++){
        num = vec[i];
        vec[i] *= vec[i];
        cout<<"El Cuadraro de "<<num<<" es "<<vec[i]<<endl;
    }
}

//Ejercico 10
int padirDatos(int TAM, int vec[]){
    int suma = 0;
    cout<<"Digite el numero de elementos del vector: ";cin>>TAM;
    for(int i = 0; i<TAM; i++){
        cout<<"Digite un numero para la posicion "<<i+1 <<endl;
        cin>>vec[i];
    }
    for(int i = 0; i<TAM; i++){
        suma += vec[i];
    }

   return suma;
}

//Ejercicio 11
void invertirsigno(int TAM, int vec[]){
    for(int i = 0; i<TAM; i++){
        cout<<"Digite un numero para la posicion "<<i+1<<": ";
        cin>>vec[i];
        vec[i] *= -1;
    }
    for(int i = 0;i<TAM; i++){
        cout<<"Posicon "<<i<<" -> "<<vec[i]<<endl;
    }
}

//Ejercicio 12
void impares(int TAM, int vec[]){
    for(int i = 0; i<TAM; i++){
        cout<<"Digite un numero para la posicion "<<i+1<<": ";
        cin>>vec[i];
    }
    for(int i = 0; i<TAM; i++){
       if((vec[i] % 2 != 0) && (vec[i] != 1)){
           cout<<"Posicon "<<i<<" -> "<<vec[i]<<endl;
       }
    }
}

//Ejercicio 13
void mostrarMatriz(int m[][3], int nfilas,int ncolumnas){
    cout<<"Original"<<endl;
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j < ncolumnas; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Modificada"<<endl;
    for(int i = 0; i<nfilas; i++){
        for(int j = 0; j < ncolumnas; j++){
            m[i][j] *= m[i][j];
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
