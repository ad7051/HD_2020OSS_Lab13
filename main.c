#include "show.h"
//include show.h, manage.h
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


int main(){
Product p[100];
int mn;//menu
int count=0;
int save=0;
int money=0;
count=loadData(p);
	while(1){
		menu();
		scanf("%d",&mn);
		if(mn==1){
			//addProduct
		}
		else if(mn==2){
			//updateProduct
		}
		else if(mn==3){
			//deleteProduct
		}
		else if(mn==4){
			//selectMenu
		}
		else if(mn==5){
			//sellProduct
		}
		else if(mn==6){
			//listProduct
		}
		else if(mn==7){
			//lineProduct
		}
		else if(mn==8){
			//searchProduct
		}
		else if(mn==9){
			//saveProduct
			save=1;
		}
		else if(mn==10){
			//loadProduct
		}
		else if(mn==0){
			break;
		}
		else{
			printf("잘못된 숫자를 입력하셨습니다. 다시 입력해 주세요.\n");
		}

	}
	for(;save!=1;){
		 printf("변동 사항이 저장되지 않았습니다. 그냥 종료하시겠 습니까?(0.저장후 종료한다. 1.저장하지 않고  종료한다.)\n");
		scanf("%d",&save);
		if(save==0){
			saveData(p,count);
			save=1;
		}
	}
	printf("프로그램을 종료합니다.");
}	
