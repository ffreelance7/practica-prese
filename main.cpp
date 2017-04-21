#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string>

using namespace std;

int exponent(int,int);
void swap_refen(int&,int&);
void swap_pointer(int*,int*);
void reversa(int[],int);
void reversa_punte(int[],int);
int sumamatriz(int[],int);
bool palindrome(char[]);
int lengcadena(char[]);
int multarra(int[3][3],int[3][3],int [3][3]);
void insertion_sort(int [],int);
void merge_sort(int[],int,int);
void merge_(int[],int,int,int);

int main(){

/*-------------------------------------------------------- EJercicio 1*/
   /* float milla=1.61;
    float aux_milla;
    float kilometros=0;

    cout<<"Ingrese millas para la conversio en kilometros"<<endl;
    cin>>aux_milla;

    kilometros=milla*aux_milla;
    cout<<aux_milla<<" Millas en Kilometros es :"<<kilometros<<"Km"<<endl;*/

/*----------------------------------------------------------Ejercicio 2 */
    /*float celcius;
    float faren;
    for(int faren=0;faren<=300;faren+=20){
       // cout<<x<<endl;
        celcius=(5.0/9.0)*(faren-32.0);
        cout<<"Fahrenheit "<<faren<<"-"<<"Celsius "<<celcius<<endl;
    }*/
/*------------------------------------------------------------ejercicio 3*/
    /*int x;
    while(x!=-1){
        cout<<"Ingrese  un numero por teclado"<<endl;
        cin>>x;
        if(x==-1){
            continue;
        }
        else if(x%2==0){
            cout<<"El numero "<<x<<" es Par"<<endl;
        }else{
            cout<<"El numero "<<x<<" es Impar"<<endl;
        }

    }*/
/*-------------------------------------------------------------EJercicio 4*/
    //cout<<exponent(2,5)<<endl;
/*-------------------------------------------------------------EJericico 5*/
   /* int  x;
    while(x!=-1){
        cout<<"Ingrese  un numero por teclado"<<endl;
        cin>>x;
        if(x==-1){
            continue;
        }
        switch(x){
            case 0:
                cout<<"cero"<<endl;
                break;
            case 1:
                cout<<"uno"<<endl;
                break;
            case 2:
                cout<<"dos"<<endl;
                break;
            case 3:
                cout<<"tres"<<endl;
                break;
            case 4:
                cout<<"cuatro"<<endl;
                break;
            case 5:
                cout<<"cinco"<<endl;
                break;
            case 6:
                cout<<"seis"<<endl;
                break;
            case 7:
                cout<<"siete"<<endl;
                break;
            case 8:
                cout<<"ocho"<<endl;
                break;
            case 9:
                cout<<"nuevo"<<endl;
                break;
            default:
                cout<<"Numero no permitido"<<endl;
                break;
        }
    }*/
/*-----------------------------------------------------------Ejercicio 6*/
/*-----------------------------------------------------------Ejercicio 7*/
    /*int x=3;
    int y=10;
    swap_refen(x,y);
    cout<<"Es x : "<<x<<endl;
    cout<<"Es y: "<<y<<endl;*/
/*-----------------------------------------------------------Ejercicio 8*/
   /* int x=3;
    int y=10;
    swap_pointer(&x,&y);
    cout<<"Es x : "<<x<<endl;
    cout<<"Es y: "<<y<<endl;*/

/*------------------------------------------------------------Ejercicio 9*/
   /* int len=10;
    int ma[]={50,45,5,7,5,8,9,3,2,7};
    insertion_sort(ma,len);
    for(int i=0;i<10;i++){
        cout<<ma[i]<<endl;
    }*/
/*------------------------------------------------------------EJercicio 10*/
   /* int len=10;
    int ma[]={50,45,5,7,5,8,9,3,2,7};
    merge_sort(ma,0,10);
    for(int i=0;i<10;i++){
        cout<<ma[i]<<endl;
    }*/
/*------------------------------------------------------------EJercicio 11*/
       /* int P1[3][3]={{4,6,4},
                  {8,1,6},
                  {9,10,6}
        };
        int P2[3][3]={{8,9,1},
                  {1,19,2},
                  {1,19,2}

        };
        int resul[3][3];
        multarra(P1,P2,resul);
        for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                cout<<resul[i][j]<<"||";
            }
                cout<<endl;
        }*/
/*------------------------------------------------------------EJercicio 12*/
    /*int len=10;
    int ma[]={50,45,5,7,5,8,9,3,2,7};
    reversa(ma,10);
    for(int i=0;i<10;i++){
        cout<<ma[i]<<endl;
    }*/
/*-------------------------------------------------------------Ejercico 13*/
    /*int len=10;
    int ma[]={50,45,5,7,5,8,9,3,2,7};
    reversa_punte(ma,10);
    for(int i=0;i<10;i++){
        cout<<ma[i]<<endl;
    }*/

/*-------------------------------------------------------------Ejericico 14*/
    /*int ma[]={0,0,2,0,50};
    cout<<sumamatriz(ma,5)<<endl;*/
/*--------------------------------------------------------------Ejercicio 15*/
   /* char maa[]="a la manuela dale una mala";
    cout<<palindrome(maa);*/
    return 0;
}
int exponent(int base ,int exponent){

    int result=1;
    for(int x=1;x<=exponent;x++){
        result=result*base;
    }
    return result;


}
void swap_refen(int &x, int &y){
    int aux;
    aux=x;
    x=y;
    y=aux;

}
void swap_pointer(int *x ,int *y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;

}
void reversa(int matr[],int leng){
    int aux;
    for(int i=0,j=leng-1;i<=j;i++,j--){
        aux=matr[i];
        matr[i]=matr[j];
        matr[j]=aux;
    }


}
void reversa_punte(int matr[],int leng){
    int aux;
    int *i,*j;
    i=matr;
    j=&matr[leng-1];
    for(;i<=j;i++,j--){
        aux=*i;
        *i=*j;
        *j=aux;
    }


}

int sumamatriz(int matriz[],int leng){

    if(leng==1){
        return matriz[leng-1];
    }else{
            return matriz[leng-1] + sumamatriz(matriz,leng-1);

    }
}
bool palindrome(char cadena[]){
    int len=0;
    len=lengcadena(cadena);
    //cout<<len<<endl;
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(cadena[i]== ' '){
            i+=1;
        }
        if(cadena[j]== ' '){
            j-=1;
        }
        //cout<<cadena[i]<<"-"<<cadena[j]<<endl;
        if(cadena[i]!=cadena[j]){
            return false;
        }
    }
     return true;
}
int lengcadena(char cadena[]){
    int cont=0;
    for(int i=0;cadena[i]!='\0';i++){
        cont++;
    }
    return cont;
}
int multarra(int p1[3][3], int p2[3][3],int resul[3][3]){
    int sum=0;
    for(int t=0;t<3;t++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum=sum+(p1[t][j]*p2[j][i]);
            }
            resul[t][i]=sum;
            sum=0;
        }
    }

}
void insertion_sort(int arra[],int len){
    int key;
    int i;
    for(int j=1;j<len;j++){
        key=arra[j];
        i=j-1;
        while(i>=0 && arra[i]>key){
            arra[i+1]=arra[i];
            i=i-1;
        }
        arra[i+1]=key;
    }
}
void merge_(int A[],int p,int q,int r){
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=0;i<=n1;i++){
        L[i]=A[p+i-1];
    }
    for(int j=0;j<=n2;j++){
        R[j]=A[q+j];
    }
    L[n1+1]=567567;
    R[n2+1]=568999;
    int i=1;
    int j=1;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;

        }else if(A[k]=R[j]){
            j=j+1;
        }
    }
}
void merge_sort(int A[],int p,int r){
    int q=0;
    if(p<r){
        q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge_(A,p,q,r);
    }
}
