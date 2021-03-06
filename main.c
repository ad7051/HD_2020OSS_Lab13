#include "show.h"
//include show.h, manage.h
int line_menu;
int search_menu;
int main(){
Product p[100];
int mn;//menu
int count=0;
int save=0;
int money=0;
	#ifdef DEBUG
		printf("DEBUG[manage.h:loadData]\n");
	#endif	
	count=loadData(p);
	while(1){
		menu();
		scanf("%d",&mn);
	switch(mn){
		case 1:
	#ifdef DEBUG
		printf("DEBUG[manage.h:addProduct]\n");
	#endif	
			addProduct(p,count);
			count++;
			break;
		case 2:
	#ifdef DEBUG
		printf("DEBUG[manage.hlistProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[manage.h:updateProduct]\n");
	#endif	
			updateProduct(p,count);
			break;
		case 3:
	#ifdef DEBUG
		printf("DEBUG[manage.h:listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[manage.h:deleteProduct]\n");
	#endif	
			deleteProduct(p,count);
			break;
		case 4:
	#ifdef DEBUG
		printf("DEBUG[manage.h:listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[manage.h:updateQuantity]\n");
	#endif	
			updateQuantity(p,count);
			break;
		case 5:
	#ifdef DEBUG
		printf("DEBUG[show.h:listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[manage.h:sellProduct]\n");
	#endif	
			sellProduct(p,count);
			break;
		case 6:
	#ifdef DEBUG
		printf("DEBUG[show.h:listProduct]\n");
	#endif	
			listProduct(p,count);
			break;
		case 7:
	#ifdef DEBUG
		printf("DEBUG[show.h:lineProduct]\n");
	#endif	
			line_menu=lineMenu();
			switch(line_menu){
				case 1:
					lineName(p,count);
					break;
				case 2:
					linePrice(p,count);
					break;
				case 3:
					lineQuantity(p,count);
					break;
				case 4:
					lineCategory(p,count);
					break;
				case 0:
					printf("\n취소됨!\n");
					break;
				default:
					printf("잘못된 숫자를 입력하셨습니다.\n");
					break;
			} 
			break;
		case 8:
	#ifdef DEBUG
		printf("DEBUG[show.h:searchProduct]\n");
	#endif	
			search_menu=searchMenu();
			switch(search_menu){
				case 1:
					searchName(p,count);
					break;
				case 2:
					searchPrice(p,count);
					break;
				case 3:
					searchQuantity(p,count);
					break;
				case 4:
					searchCategory(p,count);
					break;
				case 0:
					printf("\n취소됨!\n");
					break;
				default:
					printf("잘못된 숫자를 입력하셨습니다.\n");
					break;
			} 
			break;
		case 9:
	#ifdef DEBUG
		printf("DEBUG[manage.h:saveData]\n");
	#endif	
			saveData(p,count);
			save=1;
			break;
		case 10:
	#ifdef DEBUG
		printf("DEBUG[manage.h:loadData]\n");
	#endif	
			count=loadData(p);
			break;
		case 0:
			goto EXIT;
			break;
		default:
			printf("잘못된 숫자를 입력하셨습니다.\n 다시 입력해 주세요.\n");
			break;
	}
	}
	EXIT:
	for(;save!=1;){
		 printf("변동 사항이 저장되지 않았습니다.\n 그냥 종료하시겠 습니까?\n(0.저장후 종료한다. 1.저장하지 않고  종료한다.)\n");
		scanf("%d",&save);
		if(save==0){
	#ifdef DEBUG
		printf("DEBUG[manage.h:saveData]\n");
	#endif	
			saveData(p,count);
			save=1;
		}
	}
	printf("프로그램을 종료합니다.\n");
}
