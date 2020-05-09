#include "show.h"
//include show.h, manage.h

int main(){
Product p[100];
int mn;//menu
int count=0;
int save=0;
int money=0;
	#ifdef DEBUG
		printf("DEBUG[loadData]\n");
	#endif	
	count=loadData(p);
	while(1){
		menu();
		scanf("%d",&mn);
	switch(mn){
		case 1:
	#ifdef DEBUG
		printf("DEBUG[addProduct]\n");
	#endif	
			addProduct(p,count);
			count++;
			break;
		case 2:
	#ifdef DEBUG
		printf("DEBUG[listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[updateProduct]\n");
	#endif	
			updateProduct(p,count);
			break;
		case 3:
	#ifdef DEBUG
		printf("DEBUG[listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[deleteProduct]\n");
	#endif	
			deleteProduct(p,count);
			break;
		case 4:
	#ifdef DEBUG
		printf("DEBUG[listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[updateQuantity]\n");
	#endif	
			updateQuantity(p,count);
			break;
		case 5:
	#ifdef DEBUG
		printf("DEBUG[listProduct]\n");
	#endif	
			listProduct(p,count);
	#ifdef DEBUG
		printf("DEBUG[sellProduct]\n");
	#endif	
			sellProduct(p,count);
			break;
		case 6:
	#ifdef DEBUG
		printf("DEBUG[listProduct]\n");
	#endif	
			listProduct(p,count);
			break;
		case 7:
			//lineProduct
			break;
		case 8:
			//searchProduct
			break;
		case 9:
	#ifdef DEBUG
		printf("DEBUG[saveData]\n");
	#endif	
			saveData(p,count);
			save=1;
			break;
		case 10:
	#ifdef DEBUG
		printf("DEBUG[loadData]\n");
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
		printf("DEBUG[saveData]\n");
	#endif	
			saveData(p,count);
			save=1;
		}
	}
	printf("프로그램을 종료합니다.\n");
}
