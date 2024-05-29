#include<stdio.h>
#include "lr.h"
int main(){
    int choise,p;
    printf("Vvedite nomer labu\n");
    scanf("%d", &choise);
    switch(choise){
    case(1):printf("1 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab1();break;}else{lab11(); break;}
    case(2): printf("2 laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab2();break;}else{lab21(); break;}
    case(3): lab3();break;
    case(4): lab4();break;
    case(5): lab5();break;
    case(6): lab6();break;
    case(7): lab7();break;
        }
        printf("\n");
        system("pause");
return 0;
}
