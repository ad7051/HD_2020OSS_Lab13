#include "show.h"
//include show.h, manage.h

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
			addProduct(p,count);
			count++;
		}
		else if(mn==2){
			listProduct(p,count);
			updateProduct(p);
		}
		else if(mn==3){
			listProduct(p,count);
			deleteProduct(p);
		}
		else if(mn==4){
			//selectMenu
		}
		else if(mn==5){
			//sellProduct
		}
		else if(mn==6){
			listProduct(p,count);
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
			printf("잘못된 숫자를 입력하셨습니다.\n 다시 입력해 주세요.\n");
		}

	}
	for(;save!=1;){
		 printf("변동 사항이 저장되지 않았습니다.\n 그냥 종료하시겠 습니까?\n(0.저장후 종료한다. 1.저장하지 않고  종료한다.)\n");
		scanf("%d",&save);
		if(save==0){
//			saveData(p,count);
			save=1;
		}
	}
	printf("프로그램을 종료합니다.\n");
}	
