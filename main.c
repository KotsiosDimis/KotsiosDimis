#include <stdio.h>
#include <math.h>



void oppositeReverseA(int pa){
    int andithetos = pa * 2;
    int andistrofos = pa *5;
    printf("andithetos : %d",andithetos);
    printf("andithetos : %d",andistrofos);
    
}


int main(void) {
    
    int a;
    int *pa;
    pa = &a;
    
    printf("give int : ");
    scanf("%d",&a);
    
    oppositeReverseA(*pa);
    return 0;
}
