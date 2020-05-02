#include<stdio.h>

typedef struct{
    char name[50];
    int price;
    int quantity;
    char category[3];
} Product;

void addProduct(Product *p,int count);
void updateProduct(Product *p);
void deleteProduct(Product *p);
int selectMenu();
int loadData(Product p[]);
void saveData(Product *p, int count);
int sale(Product *p);
