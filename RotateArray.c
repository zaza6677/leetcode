#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(int* nums,int start,int end){
    while(end>=start){
        int tmp=0;
        tmp=*(nums+start);
        *(nums+start)=*(nums+end);
        *(nums+end)=tmp;
        start++;
        end--;
     }
    
    
}
void rotate(int* nums, int numsSize, int k) {
    
    int count=k%numsSize;
        swap(nums,0,numsSize-1);
        swap(nums,0,count-1);
        swap(nums,count,numsSize-1);
    
}
