#include <stdio.h>
#include <string.h>
#include "manage.h"

void readProduct(Product p);
void listProduct(Product *p,int count);
int selectDataNo(Product *p,int count);
int searchMenu();
void searchName(Product *p,int count);
void searchPrice(Product *p,int count);
void searchQuantity(Product *p,int count);
void searchCategory(Product *p,int count);
void lineName(Product *p,int count);
void linePrice(Product *p,int count);
void lineQuantity(Product *p,int count);
void lineCategory(Product *p,int count);
void showSales(int sales);
