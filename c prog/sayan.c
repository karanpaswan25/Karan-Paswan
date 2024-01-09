// int am(int a) {int i, num[100];
//     for (i = 0; i < a - 1; i++)
//     {
//         if (num[i] < num[i + 1])
//             continue;
            
//         else if (num[i] > num[i + 1])
//             num[i + 1] = num[i];
//     }
//     return num[i];
// }
// int bm(int a) {int i,num[100];
//     for (i = 0; i < a - 1; i++)
//     {
//         if (num[i] > num[i + 1])
//             continue;
            
//         else if (num[i] < num[i + 1])
//             num[i + 1] = num[i];
//     }
//     return num[i];
// }

// #include <stdio.h>
// int main()
// {
//     int num[100], j,i, a;
//     printf("number of input ");scanf("%d", &a);
//     for (i = 0; i < a; i++)
//     {
//         printf("enter %d number", i);scanf("%d", &num[i]);
//     }
//     printf("max %d",am(a));
//     printf("max %d",am(a));
//     printf("  min %d",bm(a));
// 	return 0;

// }
#include <stdio.h>
int main() {
    int a=4+5;
    printf("%d",a);
}