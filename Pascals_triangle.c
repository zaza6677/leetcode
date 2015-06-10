/*************************************************************************
	> File Name: Pascals_triangle.c
	> Author: zaza6677 
	> Mail: ynuzhangxin@gmail.com
	> Created Time: 2015年06月10日 星期三 16时45分14秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
void generate(int*** vret,int numRows){
    if(numRows==0){
        return ;
    }
    int i,j;
    int size=0;
    int count=0;
    *vret=(int**)malloc(sizeof(int*)*numRows);
    if(vret==NULL){
        perror("malloc vret rows failed");
        exit(-1);
    }
    for(i=0;i<numRows;i++){
        (*vret)[i]=(int*)malloc(sizeof(int)*(i+1));
        if((*vret)[i]==NULL){
            perror("malloc vret[] error");
            exit(-1);
        }
    }
    for(i=0;i<numRows;i++){
        (*vret)[i][0]=1;
        (*vret)[i][i]=1;
    }
    while(count<numRows){
        for(j=1;j<count;j++){
            (*vret)[count][j]=(*vret)[count-1][j-1]+(*vret)[count-1][j];
        }
        count++;
    }
}
int main(void){
   int **p=NULL;
   int rows=5;
   int i,j;
   generate(&p,rows);
    for(i=0;i<rows;i++){
        for(j=0;j<i+1;j++){
            printf("%d\n",p[i][j]);
        }
    }
   return 0;
}
