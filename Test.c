#include <stdio.h>
//# define _CRT_SECURE_NO_WARNINGS

//1.打印100-200之间的素数
//方法1
//int main() {
//	int i = 0;
//	int count = 0;
//	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
//	for (i = 100; i < 201; i++)
//	{
//		int j = 0;
//		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
//		for(j=2;j<i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
//int main() {
//	int i = 0;
//	int count=0;
//	for (i = 101; i < 201; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=i / 2; j++)
//		{
//			if (i % j == 0)
//			{ 
//				break; 
//			}
//				
//		}
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	
//	printf("\n count= %d\n", count);
//	return 0;
//}
// 
//2.写三个数让他们从大到小依次输出
//int main()
//{
//	int x, y, z;
//	printf("请输入三个整数：");
//	scanf("%d %d %d", &x, &y, &z);
//	if (x > y) 
//	{
//		if (y > z)
//		{
//			printf("%d %d %d", x, y, z);
//		}
//		else
//		{
//			printf("%d %d %d", x, z, y);
//		}
//	}
//	else
//	{
//		if (y < z)
//		{
//			printf("%d %d %d", z, y, x);
//		}
//		else
//		{
//			if (z > x)
//			{
//				printf("%d %d %d", y, z, x);
//			}
//			else
//			{
//				printf("%d %d %d", y, x, z);
//			}
//		}
//	}
//	
//
//	return 0;
//}
//3.写一个代码打印1-100之间所有3的倍数的数字
//int main() {
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		while (i % 3 == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main() {
//	int i;
//	int a;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	printf("请输入你想要查询的数字:");
//	scanf("%d", &a);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int found = 0; // 标志变量，用于跟踪是否找到匹配的数字
//	for (i = 0; i < sz; i++) {
//		if (a == arr[i]) {
//			printf("你想要查询的数字的下标是:%d", i);
//			found = 1; // 找到匹配的数字，将标志变量设置为1
//			break;
//		}
//	}
//
//	if (!found) {
//		printf("没有查询到该数字");
//	}
//
//	return 0;
//}
//4.猜数字游戏
//#include<stdlib.h>
//#include <time.h>
//
//
//void menu() 
//{
//	printf("************************************\n");
//	printf("*******        1.play    ***********\n");
//	printf("*******        0.exit    ***********\n");
//	printf("************************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("大了\n");
//		}
//		else
//		{
//			printf("小了\n");
//		}
//	}
//}
//int main()
//{
//	//生成随机数
//	int input = 0;
//	//这里需要用到srand函数,srand函数是C语言标准库中的一个函数，用于设置随机数生成器的种子。
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//5.打印输出0-100里面有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//6.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	//思路这里的计算就是奇数项是取正，偶数项是取负，然后进行求和运算
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



////7.求10个数中最大的值
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	printf("请输入10个整数\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("第%d个整数:\n", i + 1);
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	
//	printf("max = %d\n", max);
//	return 0;
//}
//9.在屏幕上输入9*9乘法表
//int main()
//{
//	int i=0;
//	for (i = 1; i <=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d	",j,i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////10.实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数。
//int isPrimeNumber(int num);
//int main()
//{
//	printf("100到200之间的素数有:\n");
//	for (int i = 100; i < 201; i++)
//	{
//		if (isPrimeNumber(i))
//		{
//			printf("%d ", i);//打印素数
//		}
//	}
//	return 0;
//}
//
//int isPrimeNumber(int num) {
//
//	if (num < 2)
//	{
//		return 0;//小于2的数不是素数
//	}
//	for (int i = 2; i <=num / 2; i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;//能被整除不是素数
//		}
//	}
//	return 1;//是素数
//}

////11.实现函数判断year是不是润年。
//int isYear(int year);//函数声明，接受年份参数
//
//int main()
//{
//	int year;
//	printf("请输入你想要判断的年份:");
//	scanf("%d", &year);
//	if (isYear(year))
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//
//int isYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//
//}

//12.实现一个函数来交换两个整数的内容。(注意一定要使用指针进行地址拷贝传递，不然变量无法改变)
//void Swap(int *a,int *b);// 函数原型声明，接收指针参数
//int main()
//{
//	int a;
//	int b;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	Swap(&a,&b);
//	printf("交换之后的值：%d %d", a, b);
//	return 0;
//}
//
//void Swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;// 使用指针解引用获取变量的值
//	*a = *b;
//	*b = temp;
//
//}

//13.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void PrintMulTable(int N);
//int main()
//{
//	int N;
//	printf("请输入你想要的乘法表行列数:");
//	scanf("%d", &N);
//	PrintMulTable(N);
//	return 0;
//}
//
//void PrintMulTable(int N)
//{
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d\t", j, i, j*i);
//		}
//		printf("\n");
//	}
//}


////14.递归方式实现打印一个整数的每一位  思路：就是对个位、十位、百位.....取余，然后打印
//void printDigits(int i);
//int main()
//{
//	int num;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	printf("每一位的数字为：");
//	printDigits(num);
//	
//}
//void printDigits(int i)
//{
//	if (i < 10)
//	{
//		printf("%d	", i);
//		return;
//	}
//	printDigits(i / 10);  // 递归调用，打印除最后一位外的其他位
//	printf("%d	", i % 10);  // 打印最后一位
//}

//15.打印金字塔
//void main()
//{
//	int j, i, k;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//16.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
// 最初版本（错误）
//int main()
//{
//	int n;
//	int i;
//	int result = 1;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result *=i ;
//	}
//	return result;
//
//	printf("%d的阶乘是%d", n, result);
//}
// 
//方法1-不使用递归
//unsigned long long factorialIterative(int n) {
//    if (n < 0) {
//        return 0; // 返回一个特定的错误值表示输入有问题
//    }
//
//    unsigned long long result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int num;
//    printf("请输入你想要求的数：");
//    scanf("%d", &num);
//    unsigned long long result = factorialIterative(num);
//    if (result != 0 || num == 0) {
//        printf("%d的阶乘是%llu\n", num, result);
//    }
//    else {
//        printf("你的输入有问题，请重新输入\n");
//    }
//    return 0;
//}

//方法二——>使用递归来实现
//unsigned long long factorialIterative(int n);
//int main()
//{
//	int num;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	unsigned long long result = factorialIterative(num);
//	printf("%d的阶乘是%llu\n", num, result);
//	return 0;
//}
//unsigned long long factorialIterative(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorialIterative(n - 1);
//	}
//}

//17.实现strlen函数循环实现：1. 给一个计数，用来统计有效字符的个数,2. 遍历字符串，只要没有遇到\0, 遇到一个字符给计数加1，直到遇到\0
//#include <stdlib.h>
//unsigned int iterativeStrlen(const char* str);
//int main()
//{
//	char *str = (char*) malloc (100* sizeof(char));//动态分配存储输入字符串的内存空间
//	printf("请输入一串字符串：");
//	scanf("%s", str);
//	unsigned int len = iterativeStrlen(str);
//	printf("你输入的有效字符一共有%u个\n", len);
//	free(str);//释放动态分配的内存空间
//	return 0;
//}
//
//unsigned int iterativeStrlen(const char* str)
//{
//	unsigned int len = 0;
//	while ( *str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}

////方法二，使用递归来实现
//#include<stdlib.h>
//unsigned int iterativeStrlen(const char* str);
//int main()
//{
//	//char str [100];通过定义数组来获取内存空间
//	char *str = (char*) malloc (100 * sizeof(char));
//	printf("请输入一个单词:");
//	scanf("%s", str);
//	unsigned int len = iterativeStrlen(str);
//	printf("你输入的有效字符一共有%u个\n", len);
//	free(str);
//	return 0;
//}
//
//unsigned int iterativeStrlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + iterativeStrlen(str + 1);
//	}
//}

//18.编写一个函数 reverse_string(char * string)（递归实现）
//#include <stdlib.h>
//void reverse_string(char* str);
//int main()
//{
//	//char* str = (char*)malloc(100 * sizeof(char));
//	char *str = (char*)malloc(100 * sizeof(char));
//	printf("请输入一串字符：");
//	scanf("%s", str);
//	reverse_string(str);
//	printf("反向排列后的字符串：%s\n", str);
//	free(str);
//	return 0;
//}
//
// void reverse_string(char* str)
//{
//	int i;
//	int len = strlen(str);
//	if (len < 2)
//	{
//		printf("%s", str);
//		return;
//	}
//	char temp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	reverse_string(str + 1);
//	str[len - 1] = temp;
//
//}
 /*思路：
	 逆置字符串，循环的方式实现非常简单
	 1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
	 2. 交换两个指针位置上的字符
	 3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束*/
//#include<stdlib.h>
// void reverse_string(char* str);
// int main()
// {
//	 char* str = (char*)malloc(100 * sizeof(char));
//	 printf("请输入一串字符:");
//	 scanf("%s", str);
//	 reverse_string(str);
//	 printf("反向排列后的字符串:%s\n", str);
//	 free(str);
//	 return 0;
// }
//
// void reverse_string(char* str)
// {
//	 char* left = str[0];
//	 char* right = str + strlen(str) - 1;
//	 while (left < right)
//	 {
//		 char temp = *left;
//		 *left = *right;
//		 *right = temp;
//		 left++;
//		 right--;
//	 }
// }
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//int DigitSum(int n) {
//    if (n < 10) {
//        return n;
//    }
//    else {
//        return n % 10 + DigitSum(n / 10);
//    }
//}
//
//int main() {
//    int num;
//    printf("请输入一个非负整数: ");
//    scanf("%d", &num);
//
//    int result = DigitSum(num);
//    printf("数字之和为: %d\n", result);
//
//    return 0;
//}
//	

//递归实现n的k次方
//int pow(int n, int k);
//int main()
//{
//	int n, k;
//	printf("请输入你想求的数的几次方");
//	scanf("%d %d", n, k);
//	int result = pow(n, k);
//	printf("%d的%d次方是:%d", n, k,result);
//	return 0;
//}
//
//int pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * pow(n, k - 1);
//	}
//	else
//	{
//		return 1 / pow(n, -k);
//	}
//}
//int pow(int n, int k);
//
//int main()
//{
//    int n, k;
//    printf("请输入你想求的数的几次方：");
//    scanf("%d %d", &n, &k);
//    int result = pow(n, k);
//    printf("%d的%d次方是：%d\n", n, k, result);
//    return 0;
//}
//
//int pow(int n, int k)
//{
//    int result = 1;
//    int i;
//
//    if (k >= 0)
//    {
//        for (i = 1; i <= k; i++)
//        {
//            result *= n;
//        }
//    }
//    else
//    {
//        for (i = 1; i <= -k; i++)
//        {
//            result /= n;
//        }
//    }
//
//    return result;
//}


//20.一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//#include <math.h>
//int isPerfectSquare(int num);
//int main()
//{
//	int a;
//	for (a = 0;; a++)
//	{
//		int b = a + 100;
//		int c = a + 268;
//		if (isPerfectSquare(b) && isPerfectSquare(c))
//		{
//			printf("你所要求的这个数是:%d\n", a);
//			break;
//		}
//	}
//	
//
//	return 0;
//}
//
//int isPerfectSquare(int num)
//{
//	int root = sqrt(num);
//	return (root * root == num);
//}

////21.斐波拉契数列
//int isFeibo(int num);
//int main()
//{
//	int result=0;
//	int n;
//	printf("请输入你想知道的斐波拉契数列:");
//	scanf("%d", &n);
//	result = isFeibo(n);
//	printf("%d的斐波拉契数是%d",n, result);
//	return 0;
//}
//
//int isFeibo(int num)
//{
//	if (num == 1 || num == 0)
//	{
//		return num;
//	}
//	else
//	{
//		return isFeibo(num - 1) + isFeibo(num - 2);
//	}
//	
//}

//22.实现一个对整形数组的冒泡排序
//#include <stdlib.h>
//void BubbleSort(int *array, int len);
//int main()
//{
//	int* array = (int*)malloc(100 * sizeof(int));//动态分配内存空间
//	int num;
//	int size;
//	int i;
//	printf("请随机输入一些整数，我们将进行冒泡排序：");
//	//循环读取输入的整数，并存储到数据之中
//	for (size = 0; size < 100; size++)
//	{
//		scanf("%d", &num);
//		if (num == 0) // 输入 0表示结束输入
//			break;
//		array[size] = num;
//	}
//	BubbleSort( array, size);
//	printf("排序后的数组：\n");
//	for (i = 0; i < size; i++) {
//		printf("%d ", array[i]);
//	}
//	free(array);//释放动态分配的内存
//	return 0;
//}
//
//void BubbleSort(int *array, int size)
//{
//	// 外层循环控制冒泡排序的趟数
//	// size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
//		for (int j = 1; j < size - i; ++j)
//		{
//			if (array[j - 1] > array[j])
//			{
//				int temp = array[j - 1];
//				array[j - 1] = array[j];
//				array[j] = temp;
//			}
//		}
//	}
//}

//23.创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
//#include <stdlib.h>
//
//void init(int* array, int size);
//
//int main()
//{
//    int* array = (int*)malloc(100 * sizeof(int)); // 动态分配内存空间
//    int num;
//    int size;
//    int i;
//
//    printf("请随机输入一些整数：");
//
//    // 循环读取输入的整数，并存储到数组中
//    for (size = 0; size < 100; size++)
//    {
//        scanf("%d", &num);
//        if (num == 0)
//            break; // 输入 0 表示停止输入
//        array[size] = num;
//    }
//
//    init(array, size);
//
//    printf("改变后的数组：\n");
//    for (i = 0; i < size; i++)
//    {
//        printf("%d ", array[i]);
//    }
//
//    free(array); // 释放动态分配的内存
//    return 0;
//}
//
//void init(int* array, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        array[i] = 0; // 将数组元素初始化为 0
//    }
//}

//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
 
//写一个二维数组，输入20个words,输出其中最短的英文单词以及它的长度。
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LENGTH 50
//#define WORD_COUNT 20
//
//void inputWords(char array[][MAX_LENGTH], int size);
//void findShortestWord(char array[][MAX_LENGTH], int size, char* shortestWord, int* shortestLength);
//
//int main()
//{
//    char words[WORD_COUNT][MAX_LENGTH];
//    char shortestWord[MAX_LENGTH];
//    int shortestLength;
//
//    printf("请输入 %d 个单词：\n", WORD_COUNT);
//    inputWords(words, WORD_COUNT);
//
//    findShortestWord(words, WORD_COUNT, shortestWord, &shortestLength);
//
//    printf("最短单词：%s\n", shortestWord);
//    printf("最短单词长度：%d\n", shortestLength);
//
//    return 0;
//}
//
//void inputWords(char array[][MAX_LENGTH], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//    {
//        scanf("%s", array[i]);
//    }
//}
//
//void findShortestWord(char array[][MAX_LENGTH], int size, char* shortestWord, int* shortestLength)
//{
//    int i;
//    *shortestLength = strlen(array[0]);  // 假设第一个单词为最短单词的长度
//    strcpy(shortestWord, array[0]);      // 假设第一个单词为最短单词
//
//    for (i = 1; i < size; i++)
//    {
//        int currentLength = strlen(array[i]);
//        if (currentLength < *shortestLength)
//        {
//            *shortestLength = currentLength;
//            strcpy(shortestWord, array[i]);
//        }
//    }
//}
//#include <stdio.h>
//#include <string.h>
//
//#define WORD_COUNT 5
//#define WORD_LENGTH 20
//
//int main()
//{
//    char S[WORD_COUNT][WORD_LENGTH];
//    int i, j;
//    int shot = WORD_LENGTH;  // 初始化为最大长度
//
//    printf("请输入 %d 个单词:\n", WORD_COUNT);
//    for (i = 0; i < WORD_COUNT; i++)
//    {
//        fgets(S[i], sizeof(S[i]), stdin);
//        S[i][strcspn(S[i], "\n")] = '\0'; 
//        /*当您使用 fgets 函数时，它可以安全地从标准输入（stdin）读取一行字符串，并将其存储在指定的字符数组中。具体到您的代码中，这是两行相关代码的解释：
//
//            fgets(S[i], sizeof(S[i]), stdin);
//
//        fgets 函数用于从标准输入（stdin）读取一行字符串，并将其存储在 S[i] 字符数组中。
//            S[i] 表示要存储输入的字符数组，i 是数组的索引。
//            sizeof(S[i]) 表示要读取的字符数组的大小。在这里，我们使用 sizeof 运算符来获取 S[i] 数组的大小，以确保读取的字符数不超过数组的容量，以避免缓冲区溢出。
//            S[i][strcspn(S[i], "\n")] = '\0';
//
//        strcspn(S[i], "\n") 函数用于查找字符串 S[i] 中第一个换行符（'\n'）的位置。
//            strcspn 函数返回第一个匹配字符的索引，如果未找到匹配字符，则返回字符串的长度。
//            S[i][strcspn(S[i], "\n")] 表示在字符串 S[i] 中找到的第一个换行符的位置。
//            将该位置的字符赋值为空字符（'\0'），以将换行符替换为字符串的结束符，从而去除换行符。*/
//
//        if (strlen(S[i]) < shot)
//        {
//            shot = strlen(S[i]);
//        }
//    }
//
//    printf("最短英文单词是 ");
//    for (i = 0; i < WORD_COUNT; i++)
//    {
//        if (strlen(S[i]) == shot)
//        {
//            printf("%s ", S[i]);
//        }
//    }
//    printf("，长度是 %d\n", shot);
//
//    return 0;
//}


//24.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include <stdio.h>
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int sz = 3;
//    int arr1[3] = { 0 };
//    int arr2[3] = { 0 };
//    int i = 0;
//    printf("请输入3个数字：>");
//    for (i = 0; i < sz; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    printf("请输入3个数字:>");
//    for (i = 0; i < sz; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    printf("交换前的arr1数组：");
//    printArray(arr1, sz);
//    printf("交换前的arr2数组：");
//    printArray(arr2, sz);
//
//    for (i = 0; i < sz; i++) {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//
//    printf("交换后的arr1数组：");
//    printArray(arr1, sz);
//    printf("交换后的arr2数组：");
//    printArray(arr2, sz);
//
//    return 0;
//}
//指针解法

//#include <stdio.h>
//void printArray(int* arr, int size);
//
//int main()
//{
//	return 0;
//}
//
//void printArray(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", *(arr + 1));
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr1[3] = { 0 };
//	int arr2[3] = { 0 };
//	int i = 0;
//	printf("请输入3个数字:>");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", arr1 + 1);
//	}
//	printf("请输入10个数字:>");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", arr2 + i);
//	}
//	printf("交换前的arr1数组：");
//	printArray(arr1, 10);
//	printf("交换前的arr2数组：");
//	printArray(arr2, 10);
//
//	for (i = 0; i < 10; i++) {
//		int tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = tmp;
//	}
//
//	printf("交换后的arr1数组：");
//	printArray(arr1, 10);
//	printf("交换后的arr2数组：");
//	printArray(arr2, 10);
//
//	return 0;
//}
//

//27.交换两个变量，不允许设置临时变量
#include <stdio.h>
void swp(int *a, int *b);
int main()
{
	int a, b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("交换前的两位数字是：%d %d",a,b);
	swp(&a, &b);
	printf("交换后的两位数字是：%d %d",a,b);
	return 0;
}

void swp(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}