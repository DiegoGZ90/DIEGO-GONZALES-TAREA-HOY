/*#include <iostream>
#include<conio.h>

using namespace std;

int main(){

   int numero []= {1,2,3,4,5,6,7,8,9,10};
            int suma = 0;


    for (int i=0; i<10;i++){
        suma += numero[i];
    }
      cout<<" La Suma de los elementos es : "<<suma<<endl;




     getch();
     return 0;
}*/

/*#include <iostream>
#include<conio.h>

using namespace std;

int main (){
    int Numeros[100],n, mayor=0;
    cout<<"Digite el numero del arreglo : ";
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<i+1<<".Ponga un Numero: ";
        cin>>Numeros[i];

        if (Numeros[i]>mayor){
            mayor = Numeros[i];
        }
    }
      cout<<"\n El Mayor numero es :" <<mayor<<endl;



    getch();
    return 0;
}*/

/*#include <iostream>

using namespace std;
#include<conio.h>

int main (){
    int Numero []= {1,2,3,4,5,6,7 };
    int a,j, aux;

    for (a=0;a<6;a++){
        for (j=0;j<6;j++){
            if (Numero[j] > Numero [j+1]){
                aux = Numero[j];
                Numero[j] = Numero[j+1];
                Numero[j+1] = aux;

            }
        }
    }

     cout<<" Orden de numeros :";
     for(a=0;a<6;a++){
       cout<<Numero[a]<<" ";
    }
    cout<<"Orden de numeros aleatorios :";
    for(a=6;a>0;a--) {
        cout << Numero[a];

    }


     getch();
    return 0;
}/*
/*#include <iostream>
#include<conio.h>

using namespace std;

int main(){

   int numero []= {45,2,31,12,1,78,9,9,65,10};
            int suma = 0;


    for (int i=0; i<10;i++){
        suma += numero[i];
    }
      cout<<" La Suma de los elementos es : "<<suma<<endl;




     getch();
     return 0;
}*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa",};

    map<string, int> cfrutas;


    for (int i = 0; i < 9; i++) {
        cfrutas[frutas[i]]++;
    }


    for (auto const& [fruta, contador] : cfrutas) {
        cout << "estas frutas de "<<fruta<<"apareceran solo "<<contador<<" veces."<< endl;
    }

    return 0;
}

