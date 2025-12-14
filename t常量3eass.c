#include <stdio.h>

#define FANQIE  3.7
#define JIELAN  7
#define XIQIN   1.3
#define KONGXINCAI      8
#define YANGCONG        2.4
#define YOUCAI  9
#define HUANGGUA        6.3
#define BAILUOBO        0.5

int main()
{
        float price;

        price = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5; // 1斤 == 0.5公斤
        printf("小明需要支付%.2f元\n", price);

        price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
        printf("小红需要支付%.2f元\n", price);

        price = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;
        printf("小甲鱼需要支付%.2f元\n", price);

        return 0;
}

