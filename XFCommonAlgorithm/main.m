//
//  main.m
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/24.
//  Copyright © 2018年 许锋. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFSortAlgorithm.h"
#import "XFFindAlgorithm.h"
#import "XFOtherCommomAlgorithm.h"
#import "XFNodeAlgorithm.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        int sortArr[] = {10,8,9,3,2,4,7,6,5,1,0};
        int count = sizeof(sortArr)/sizeof(sortArr[0]);
        
        //#########################
        //1:冒泡排序 (升序)
        bubble_sortAsc(sortArr,count);
        printf("升序排序:");
        for(int i =0;i<count;i++){
            printf("%d,",sortArr[i]);
        }
        printf("\n");
        
        //#########################
        //2:冒泡排序 (降序)
        bubble_sortDesc(sortArr,count);
        printf("降序排序:");
        for(int i =0;i<count;i++){
            printf("%d,",sortArr[i]);
        }
        printf("\n");
        
        
        //#########################
        //3:直接插入排序
        int insertSortArr[] = {10,8,9,3,2,4,7,6,5,1,0};
        int insertSortCount = sizeof(insertSortArr)/sizeof(insertSortArr[0]);
        Insert_sort(insertSortArr,insertSortCount);
        printf("直接插入排序:");
        for(int i =0;i<insertSortCount;i++){
            printf("%d,",insertSortArr[i]);
        }
        printf("\n");
        
        //#########################
        //4:二分查找算法
        int binarySearchArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int binarySearchCount = sizeof(binarySearchArray)/sizeof(binarySearchArray[0]);
        int location;
        int target = 4;
        location = binarySearch(binarySearchArray, binarySearchCount, target);
        printf("二分查找:目标%d的位置%d\n", target,location);
        printf("\n");
        
        //#########################
        //5:斐波那契数列算法 (递归)
        int feiboncIndex = 8;
        printf("斐波那契数列第%d个数为:%d\n",feiboncIndex,feibonc(feiboncIndex));
        printf("\n");
        
        //#########################
        //6:链表 创建 遍历 和 链表排序相关算法
        createNodeList(10);
        traverseNodeList();
        
        //链表冒泡排序
        nodeBubbleSort();
        
        //链表倒叙
        nodeReverseList();
    }
    return 0;
}
