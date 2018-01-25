//
//  XFSortAlgorithm.c
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/24.
//  Copyright © 2018年 许锋. All rights reserved.
//

#include "XFSortAlgorithm.h"

/**
 *冒泡排序 (升序)
 * count (数组包含元素个数)
 */
void bubble_sortAsc(int *array,int count) {
    int temp;
    for(int i = 0;i<count -1;i++){
        for(int j=0;j<count -1 -i;j++){
            if(array[j]>array[j+1]){
                temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
}

/**
 *冒泡排序 (降序)
 * count (数组包含元素个数)
 */
void bubble_sortDesc(int *array,int count) {
    int temp;
    for(int i = 0;i<count -1;i++){
        for(int j=0;j<count -1 -i;j++){
            if(array[j]<array[j+1]){
                temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
}

/**
 *直接插入排序
 * count (数组包含元素个数)
 */
void Insert_sort(int *array,int count) {
    int i,j;
    int temp;
    i = 0;
    j = 0;
    for(;i < count;i++) {
        for(j=i;(j > 0)&&(array[j] < array[j-1]);j--) {
            temp =  array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
        }
    }
}
