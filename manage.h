#include<stdio.h>

typedef struct{
    char name[50];
    int price;
    int quantity;
    char[3] category;
} Product;

Product plist[100];
int curcount, count, menu, sales;
void addProduct(Product *p);
void updateProduct(Product *p);
void deleteProduct(Product *p);
int selectMenu();
int loadData(Product p[]);
void saveData(Product *p, int count);
int sale(Product *p);
