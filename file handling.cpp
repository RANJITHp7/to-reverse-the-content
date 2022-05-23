 #include<stdio.h>
#include<stdlib.h>
main(){
	FILE*fp;
	char ch;
    int i=0;
	int c=0;
	fp=fopen("plainfile.txt","r");
	printf("the content to be reversed:\n");
	while(ch!=EOF){
	   ch=getc(fp);
       printf("%c",ch);
	   c=c+1; 
       
	   
	}
	printf("\nThe content after reversing\n");
	fseek(fp,0,SEEK_END);
	while(i<=c){
	
	   i++;
	   fseek(fp,-i,SEEK_END);
	   printf("%c",getc(fp));
    }
	
	
}