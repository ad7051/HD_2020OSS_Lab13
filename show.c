#include "show.h"

void readProduct(Product p){
	printf("\t%s\t%s\t%d\t%d\n",p.name,p.category,p.price,p.quantity);
}
void listProduct(Product *p,int count){
	printf("\nNo\tname\tcategory\tprice\tquantity");
		for(int i=0;i<count;i++){
			if(p[i].price==-1)
				continue;
			printf("%2d",i+1);
			readProduct(p[i]);
	}
	printf("\n");
}
void searchName(Product *p,int count){
	int scount=0;
	char search[20];

	printf("검색할 이름? ");
	getchar();
	fgets(search,sizeof(search),stdin);

	printf("\nNo\tname\tcategory\tprice\tquantity");
	for(int i=0;i<count;i++){
		if(p[i].price !=-1){
			if(strstr(p[i].name,search)){
				printf("%2d",i+1);
				readProduct(p[i]);
				scount++;
			}
		}
	}

	if(scount==0)
		printf("=> 검색된 데이터 없음!");
}

void searchPrice(Product *p,int count){
	int price=0,scount=0;
	printf("검색할 가격?(이하로 검색)");
	scanf("%d",&price);
	printf("\nNo\tname\tcategory\tprice\tquantity");
	for(int i=0;i<count;i++){
		if(p[i].price !=-1){
			if(price>=p[i].price){
			printf("%2d",i+1);
			readProduct(p[i]);
			scount++;
			}
		}
	}

	if(scount==0)
		printf("=> 검색된 데이터 없음!");
}
void searchCategory(Product *p,int count){
	int scount=0;
	char category[3];
	printf("검색할 카테고리는?");
	scanf("%s",category);
	printf("\nNo\tname\tcategory\tprice\tquantity");
	for(int i=0;i<count;i++){
		if(p[i].price !=-1){
			if(category[0]==p[i].category[0]){
			printf("%2d",i+1);
			readProduct(p[i]);
			scount++;
			}
		}
	}

	if(scount==0)
		printf("=> 검색된 데이터 없음!");
}
void searchQuantity(Product *p,int count){
	int quantity=0,scount=0;
	printf("검색할 갯수는?(이상으로 검색)");
	scanf("%d",&quantity);
	printf("\nNo\tname\tcategory\tprice\tquantity");
	for(int i=0;i<count;i++){
		if(p[i].price !=-1){
			if(quantity<=p[i].quantity){
			printf("%2d",i+1);
			readProduct(p[i]);
			scount++;
			}
		}
	}

	if(scount==0)
		printf("=> 검색된 데이터 없음!");
}

void showSales(int sales){
	printf("\n총 매출은 %d원입니다\n",sales);
}
void swapList(Product *p1,Product *p2){
	Product temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void lineName(Product *p,int count){
	
}
void linePrice(Product *p,int count){
}
void lineQuantity(Product *p,int count){
}
void lineCategory(Product *p,int count){
}
