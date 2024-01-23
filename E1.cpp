#include <stdio.h>
int main() {
    int x,y,n,aa,ab,ac,ad,ba,bb,bc,bd,ca,cb,cc,cd;
    scanf("%d %d", &x,&y);
    scanf("%d", &n);
    scanf("%d %d %d %d",&aa,&ab,&ac,&ad);
    scanf("%d %d %d %d", &ba,&bb,&bc,&bd);
    scanf("%d %d %d %d",&ca,&cb,&cc,&cd);
    int array[2000][2000]={0};
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}