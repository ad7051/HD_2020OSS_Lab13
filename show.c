#include "show.h"

void readProduct(Product p){
    printf("%s %s %d %d",p.name,p.category,p.price,p.quantity);
}
void listProduct(Product *p,int count){
    printf("***********\n");
    printf("=================================\n");
    for(int i=0;i<count;i++){
        if(p[i].price==-1)
            continue;
        printf("%d ",i+1);
        readProduct(p[i]);
    }
    printf("\n");
}
