#include<stdio.h>

int main(){
	FILE *f1, *f2, *des;
	char ch;
	f1 = fopen("C:\\Users\\MY PC\\Desktop\\bai1.txt", "r");
	if(f1 == NULL){
		return 1;
	}
	f2 = fopen("C:\\Users\\MY PC\\Desktop\\bai3.txt", "r");
	if(f2 == NULL){
		return 1;
	}
	des = fopen("C:\\Users\\MY PC\\Desktop\\bai5.txt", "w");
	if(des == NULL){
		fclose(f1);
		fclose(f2);
		return 1;
	}
	while((ch = fgetc(f1), ch) != EOF){
		fputc(ch, des);
	}
	while((ch = fgetc(f2), ch) != EOF){
		fputc(ch, des);
	}
	fclose(f1);
	fclose(f2);
	fclose(des);
	printf("Da sao chep nd bt1 va nd bt3 sang nd bt5\n");
	return 0;
}