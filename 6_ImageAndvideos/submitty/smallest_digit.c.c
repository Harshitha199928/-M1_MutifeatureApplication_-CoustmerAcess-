#include<stdio.h>
#include "smallest_digit.h"
int FindSmallest(int InputNumber){
	int res=10;
    while(InputNumber>0)
    {
        int temp;
        temp=InputNumber%10;
        InputNumber=InputNumber/10;
        if(res>temp)
            res=temp;
    }
    return res;
}