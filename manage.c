/*2020/05/02 HwangSuHwan
Make
addProduct(manage.h changed)
deleteProduct
updateProduct
*/

#include "manage.h"

void addProduct(Product *p,int count){
	getchar();
	printf("상품의 이름을 입력해 주세요.");
	scanf("%[^\n]",p[count].name);
	getchar();
	printf("상품의 종류를 입력해 주세요.");
	scanf("%[^\n]",p[count].category);
	printf("상품의 가격을 입력해 주세요.");
	scanf("%d",&p[count].price);
	printf("상품의 수량을 입력해 주세요.");
	scanf("%d",&p[count].quantity);
	
}

void updateProduct(Product *p){
	int select;
	printf("수정을 원하는 제품의 번호를 입력해 주세요.");
	scanf("%d",&select);
	addProduct(p,select-1);
	printf("수정이 완료되었습니다.\n");
}
void deleteProduct(Product *p){
	int select;
	int check=0;
	printf("삭제를 원하는 제품의 번호를 입력해 주세요.");
	scanf("%d",&select);
	printf("정말 삭제를 하시겠습니까?(0.아니요 1.예 삭제하겠습니다)");
	scanf("%d",&check);
	if(check==1){
		p[select-1].price=-1;
		printf("삭제됨\n");
	}else{
		printf("취소됨\n");
	}
}
int loadData(Product p[]);
void saveData(Product *p, int count);
int sale(Product *p);
