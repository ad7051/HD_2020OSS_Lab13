/*2020/05/02 HwangSuHwan
Make
addProduct(manage.h changed)
deleteProduct
updateProduct
*/

#include "manage.h"

void menu(){
	printf("*****재고 관리 프로그램*****\n");
	printf("1. 상품 추가\n");
	printf("2. 상품 정보 수정\n");
	printf("3. 상품 정보 삭제\n");
	printf("4. 제품의 재고 관리\n");
	printf("5. 상품 판매\n");
	printf("6. 상품 정보 출력\n");
	printf("7. 상품 정보 정렬\n");
	printf("8. 상품 정보 검색\n");
	printf("9. 상품 정보 저장\n");
	printf("10. 상품 정보 다시 불러오기\n");
	printf("0. 종료하기\n");
	printf("메뉴를 골라주세요!\n");
}

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
int loadData(Product p[]){
	int count=0;
	FILE*fp=fopen("list.txt","rt");
	if(fp==NULL){
		printf("저장된 파일이 없음.\n");
		fclose(fp);
		return 0;
	}
	for(;;count++){
		if(feof(fp))break;
		fscanf(fp,"%d %d %s %[^\n]",&p[count].price,&p[count].quantity,p[count].category,p[count].name);
		fgetc(fp);
		
	}
	count--;
	printf("%d 개의 항목이 로딩되었습니다.\n",count);
	return count;
}
void saveData(Product *p, int count){
	FILE *fp=fopen("list.txt","wt");
	for(int i=0;i<count;i++){
	fprintf(fp,"%d %d %s %s\n",p[i].price,p[i].quantity,p[i].category,p[i].name);	
	}
	printf("저장됨\n");
	fclose(fp);
}
int sellProduct(Product *p){
	int money;
	int product;
	int qty; //quantity
	printf("판매된 물건의 번호를 입력해 주세요.");
	scanf("%d",&product);
	product--;
	printf("해당 물건의 판매된 수량을 입력해 주세요.");
	scanf("%d",&qty);
	if(qty>p[product].quantity){
		printf("판매 수량이 재고를 초과하였습니다.\n");
		return 0;
	}
	p[product].quantity-=qty;
	money=p[product].price*qty;
	printf("%s의 수량이 %d 만큼 감소하고, %d만큼의 수입이 생겼습니다.\n",p[product].name,qty,money);
	return money;	
}
