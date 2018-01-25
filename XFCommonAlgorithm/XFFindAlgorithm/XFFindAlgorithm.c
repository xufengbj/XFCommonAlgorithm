//
//  XFFindAlgorithm.c
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/25.
//  Copyright © 2018年 许锋. All rights reserved.
//

#include "XFFindAlgorithm.h"

/**
 *二分查找算法
 *sortedSeq (已排好序的数组)
 *seqLength (数组长度)
 *keyData (查找值)
 */
int binarySearch(int *sortedSeq,int seqLength,int keyData) {
    int low = 0,mid,high = seqLength -1;
    while (low<=high) {
        mid = (low + high) /2;
        if(keyData < sortedSeq[mid]){
            high = mid -1;
        }else if(keyData > sortedSeq[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return -1;
}
