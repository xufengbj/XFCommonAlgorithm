//
//  XFSortAlgorithm.h
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/24.
//  Copyright © 2018年 许锋. All rights reserved.
//

#ifndef XFSortAlgorithm_h
#define XFSortAlgorithm_h

#include <stdio.h>

/**
 *冒泡排序 (升序)
 * count (数组包含元素个数)
 */
 void bubble_sortAsc(int *array,int count);

/**
 *冒泡排序 (降序)
 * count (数组包含元素个数)
 */
 void bubble_sortDesc(int *array,int count);

/**
 *直接插入排序
 * count (数组包含元素个数)
 */
void Insert_sort(int *array,int count);


#endif /* XFSortAlgorithm_h */
