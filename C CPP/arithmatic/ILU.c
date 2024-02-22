#include<stdio.h>
int main() {
    int i,j,a,b,o,p;
    for(a=0; a<5; a++) {
        for(b=0; b<4; b++) {
            if(a<1 && b<4 ||b==3 && a<5 || a>3 && b<4)
                printf(" *");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0; i<6; i++) {
        printf("\t");
        for(j=0; j<7; j++) {

            if(i==1 && j%3==0 || i==0 && j%3!=0 || i-j== 2 || i+j == 8)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    } printf("\n");
    for(o=0; o<6; o++) {
         printf("\t\t");
        for(p=0; p<5; p++) {
            if(p<1 && o<6 || p<5 && o>4 || p>3  && o<6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}