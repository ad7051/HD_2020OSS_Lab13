#include "show.h"

void readProduct(Product p){
	printf("\t%s\t%s\t%d\t%d\n",p.name,p.category,p.price,p.quantity);
}
void listProduct(Product *p,int count){
	printf("\nNo\tname\tcategory\tprice\tquantity\n");
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
	printf("\n검색할 이름?(한글은 검색되지 않습니다.) ");
	getchar();
	fgets(search,sizeof(search),stdin);
	search[strlen(search)-1]='\0';
	printf("\nNo\tname\tcategory\tprice\tquantity\n");
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
		printf("=> 검색된 데이터 없음!\n");
}

void searchPrice(Product *p,int count){
	int price=0,scount=0;
	printf("\n검색할 가격?(이하로 검색)");
	scanf("%d",&price);
	printf("\nNo\tname\tcategory\tprice\tquantity\n");
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
		printf("=> 검색된 데이터 없음!\n");
}
void searchCategory(Product *p,int count){
	int scount=0;
	char category[3];
	printf("\n검색할 카테고리는?");
	scanf("%s",category);
	printf("\nNo\tname\tcategory\tprice\tquantity\n");
	for(int i=0;i<count;i++){
		if(p[i].price !=-1){
			if(strstr(p[i].category,category)){
			printf("%2d",i+1);
			readProduct(p[i]);
			scount++;
			}
		}
	}

	if(scount==0)
		printf("=> 검색된 데이터 없음!\n");
}
void searchQuantity(Product *p,int count){
	int quantity=0,scount=0;
	printf("\n검색할 갯수는?(이상으로 검색)");
	scanf("%d",&quantity);
	printf("\nNo\tname\tcategory\tprice\tquantity\n");
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
		printf("=> 검색된 데이터 없음!\n");
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
	for(int i=1;i<count;i++){
		for(int j=0;j<count-i;j++){
			if(strcmp(p[j].name,p[j+1].name)>0)
				swapList(&p[j],&p[j+1]);
		}
	}
}
void linePrice(Product *p,int count){
	for(int i=1;i<count;i++){
		for(int j=0;j<count-i;j++){
			if(p[j].price>p[j+1].price)
				swapList(&p[j],&p[j+1]);
		}
	}
}
void lineQuantity(Product *p,int count){
	for(int i=1;i<count;i++){
		for(int j=0;j<count-i;j++){
			if(p[j].quantity>p[j+1].quantity)
				swapList(&p[j],&p[j+1]);
		}
	}
}
void lineCategory(Product *p,int count){
	for(int i=1;i<count;i++){
		for(int j=0;j<count-i;j++){
			if(strcmp(p[j].category,p[j+1].category)>0)
				swapList(&p[j],&p[j+1]);
		}
	}
}
int lineMenu(){
	printf("\n1. 이름 순으로 정렬\n");
	printf("2. 가격 순으로 정렬\n");
	printf("3. 갯수 순으로 정렬\n");
	printf("4. 카테고리 순으로 정렬\n");
	printf("0. 취소\n");
	printf("메뉴를 선택하세요: ");
	int menu=0;
	scanf("%d",&menu);
	return menu;
}
int searchMenu(){
	printf("\n1. 이름 순으로 검색\n");
	printf("2. 가격 순으로 검색\n");
	printf("3. 갯수 순으로 검색\n");
	printf("4. 카테고리 순으로 검색\n");
	printf("0. 취소\n");
	printf("메뉴를 선택하세요: ");
	int menu=0;
	scanf("%d",&menu);
	return menu;
}
