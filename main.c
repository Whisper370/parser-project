#include <stdio.h>
#include "parser.h"
int main() {
    int res = add(2,3);
    printf("2+3=%d
", res);
    // 行统计功能
    printf("当前文件行数：%d
", __LINE__);
    return 0;
}
