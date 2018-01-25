//
//  XFOtherCommomAlgorithm.c
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/25.
//  Copyright © 2018年 许锋. All rights reserved.
//

#include "XFOtherCommomAlgorithm.h"

/**
 *斐波那契数列算法 (递归)
 * 1 1 2 3 5 8 13 21 ...
 */
int feibonc(int n) {
    if(n == 1 || n ==  2){
        return 1;
    }else{
        return feibonc(n-1)+feibonc(n-2);
    }
}
