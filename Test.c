#include <stdio.h>
//# define _CRT_SECURE_NO_WARNINGS

//1.��ӡ100-200֮�������
//����1
//int main() {
//	int i = 0;
//	int count = 0;
//	// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
//	for (i = 100; i < 201; i++)
//	{
//		int j = 0;
//		//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
//		for(j=2;j<i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
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
//��������ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2, i/2]�������Ƿ���Ԫ�ؿ��Ա�2i�������ɣ�����˵��i��������
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
//2.д�����������ǴӴ�С�������
//int main()
//{
//	int x, y, z;
//	printf("����������������");
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
//3.дһ�������ӡ1-100֮������3�ı���������
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
//	printf("����������Ҫ��ѯ������:");
//	scanf("%d", &a);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int found = 0; // ��־���������ڸ����Ƿ��ҵ�ƥ�������
//	for (i = 0; i < sz; i++) {
//		if (a == arr[i]) {
//			printf("����Ҫ��ѯ�����ֵ��±���:%d", i);
//			found = 1; // �ҵ�ƥ������֣�����־��������Ϊ1
//			break;
//		}
//	}
//
//	if (!found) {
//		printf("û�в�ѯ��������");
//	}
//
//	return 0;
//}
//4.��������Ϸ
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
//	//������
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("����\n");
//		}
//		else
//		{
//			printf("С��\n");
//		}
//	}
//}
//int main()
//{
//	//���������
//	int input = 0;
//	//������Ҫ�õ�srand����,srand������C���Ա�׼���е�һ��������������������������������ӡ�
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//5.��ӡ���0-100�����ж��ٸ�9
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
//6.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	//˼·����ļ��������������ȡ����ż������ȡ����Ȼ������������
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



////7.��10����������ֵ
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	printf("������10������\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("��%d������:\n", i + 1);
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
//9.����Ļ������9*9�˷���
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

////10.ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮���������
//int isPrimeNumber(int num);
//int main()
//{
//	printf("100��200֮���������:\n");
//	for (int i = 100; i < 201; i++)
//	{
//		if (isPrimeNumber(i))
//		{
//			printf("%d ", i);//��ӡ����
//		}
//	}
//	return 0;
//}
//
//int isPrimeNumber(int num) {
//
//	if (num < 2)
//	{
//		return 0;//С��2������������
//	}
//	for (int i = 2; i <=num / 2; i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;//�ܱ�������������
//		}
//	}
//	return 1;//������
//}

////11.ʵ�ֺ����ж�year�ǲ������ꡣ
//int isYear(int year);//����������������ݲ���
//
//int main()
//{
//	int year;
//	printf("����������Ҫ�жϵ����:");
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

//12.ʵ��һ�������������������������ݡ�(ע��һ��Ҫʹ��ָ����е�ַ�������ݣ���Ȼ�����޷��ı�)
//void Swap(int *a,int *b);// ����ԭ������������ָ�����
//int main()
//{
//	int a;
//	int b;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	Swap(&a,&b);
//	printf("����֮���ֵ��%d %d", a, b);
//	return 0;
//}
//
//void Swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;// ʹ��ָ������û�ȡ������ֵ
//	*a = *b;
//	*b = temp;
//
//}

//13.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//void PrintMulTable(int N);
//int main()
//{
//	int N;
//	printf("����������Ҫ�ĳ˷���������:");
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


////14.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ  ˼·�����ǶԸ�λ��ʮλ����λ.....ȡ�࣬Ȼ���ӡ
//void printDigits(int i);
//int main()
//{
//	int num;
//	printf("������һ������:");
//	scanf("%d", &num);
//	printf("ÿһλ������Ϊ��");
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
//	printDigits(i / 10);  // �ݹ���ã���ӡ�����һλ�������λ
//	printf("%d	", i % 10);  // ��ӡ���һλ
//}

//15.��ӡ������
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

//16.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
// ����汾������
//int main()
//{
//	int n;
//	int i;
//	int result = 1;
//	printf("������һ��������");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result *=i ;
//	}
//	return result;
//
//	printf("%d�Ľ׳���%d", n, result);
//}
// 
//����1-��ʹ�õݹ�
//unsigned long long factorialIterative(int n) {
//    if (n < 0) {
//        return 0; // ����һ���ض��Ĵ���ֵ��ʾ����������
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
//    printf("����������Ҫ�������");
//    scanf("%d", &num);
//    unsigned long long result = factorialIterative(num);
//    if (result != 0 || num == 0) {
//        printf("%d�Ľ׳���%llu\n", num, result);
//    }
//    else {
//        printf("������������⣬����������\n");
//    }
//    return 0;
//}

//����������>ʹ�õݹ���ʵ��
//unsigned long long factorialIterative(int n);
//int main()
//{
//	int num;
//	printf("������һ������:");
//	scanf("%d", &num);
//	unsigned long long result = factorialIterative(num);
//	printf("%d�Ľ׳���%llu\n", num, result);
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

//17.ʵ��strlen����ѭ��ʵ�֣�1. ��һ������������ͳ����Ч�ַ��ĸ���,2. �����ַ�����ֻҪû������\0, ����һ���ַ���������1��ֱ������\0
//#include <stdlib.h>
//unsigned int iterativeStrlen(const char* str);
//int main()
//{
//	char *str = (char*) malloc (100* sizeof(char));//��̬����洢�����ַ������ڴ�ռ�
//	printf("������һ���ַ�����");
//	scanf("%s", str);
//	unsigned int len = iterativeStrlen(str);
//	printf("���������Ч�ַ�һ����%u��\n", len);
//	free(str);//�ͷŶ�̬������ڴ�ռ�
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

////��������ʹ�õݹ���ʵ��
//#include<stdlib.h>
//unsigned int iterativeStrlen(const char* str);
//int main()
//{
//	//char str [100];ͨ��������������ȡ�ڴ�ռ�
//	char *str = (char*) malloc (100 * sizeof(char));
//	printf("������һ������:");
//	scanf("%s", str);
//	unsigned int len = iterativeStrlen(str);
//	printf("���������Ч�ַ�һ����%u��\n", len);
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

//18.��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//#include <stdlib.h>
//void reverse_string(char* str);
//int main()
//{
//	//char* str = (char*)malloc(100 * sizeof(char));
//	char *str = (char*)malloc(100 * sizeof(char));
//	printf("������һ���ַ���");
//	scanf("%s", str);
//	reverse_string(str);
//	printf("�������к���ַ�����%s\n", str);
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
 /*˼·��
	 �����ַ�����ѭ���ķ�ʽʵ�ַǳ���
	 1. ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
	 2. ��������ָ��λ���ϵ��ַ�
	 3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���*/
//#include<stdlib.h>
// void reverse_string(char* str);
// int main()
// {
//	 char* str = (char*)malloc(100 * sizeof(char));
//	 printf("������һ���ַ�:");
//	 scanf("%s", str);
//	 reverse_string(str);
//	 printf("�������к���ַ���:%s\n", str);
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
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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
//    printf("������һ���Ǹ�����: ");
//    scanf("%d", &num);
//
//    int result = DigitSum(num);
//    printf("����֮��Ϊ: %d\n", result);
//
//    return 0;
//}
//	

//�ݹ�ʵ��n��k�η�
//int pow(int n, int k);
//int main()
//{
//	int n, k;
//	printf("����������������ļ��η�");
//	scanf("%d %d", n, k);
//	int result = pow(n, k);
//	printf("%d��%d�η���:%d", n, k,result);
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
//    printf("����������������ļ��η���");
//    scanf("%d %d", &n, &k);
//    int result = pow(n, k);
//    printf("%d��%d�η��ǣ�%d\n", n, k, result);
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


//20.һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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
//			printf("����Ҫ����������:%d\n", a);
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

////21.쳲���������
//int isFeibo(int num);
//int main()
//{
//	int result=0;
//	int n;
//	printf("����������֪����쳲���������:");
//	scanf("%d", &n);
//	result = isFeibo(n);
//	printf("%d��쳲���������%d",n, result);
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

//22.ʵ��һ�������������ð������
//#include <stdlib.h>
//void BubbleSort(int *array, int len);
//int main()
//{
//	int* array = (int*)malloc(100 * sizeof(int));//��̬�����ڴ�ռ�
//	int num;
//	int size;
//	int i;
//	printf("���������һЩ���������ǽ�����ð������");
//	//ѭ����ȡ��������������洢������֮��
//	for (size = 0; size < 100; size++)
//	{
//		scanf("%d", &num);
//		if (num == 0) // ���� 0��ʾ��������
//			break;
//		array[size] = num;
//	}
//	BubbleSort( array, size);
//	printf("���������飺\n");
//	for (i = 0; i < size; i++) {
//		printf("%d ", array[i]);
//	}
//	free(array);//�ͷŶ�̬������ڴ�
//	return 0;
//}
//
//void BubbleSort(int *array, int size)
//{
//	// ���ѭ������ð�����������
//	// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
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

//23.����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
//#include <stdlib.h>
//
//void init(int* array, int size);
//
//int main()
//{
//    int* array = (int*)malloc(100 * sizeof(int)); // ��̬�����ڴ�ռ�
//    int num;
//    int size;
//    int i;
//
//    printf("���������һЩ������");
//
//    // ѭ����ȡ��������������洢��������
//    for (size = 0; size < 100; size++)
//    {
//        scanf("%d", &num);
//        if (num == 0)
//            break; // ���� 0 ��ʾֹͣ����
//        array[size] = num;
//    }
//
//    init(array, size);
//
//    printf("�ı������飺\n");
//    for (i = 0; i < size; i++)
//    {
//        printf("%d ", array[i]);
//    }
//
//    free(array); // �ͷŶ�̬������ڴ�
//    return 0;
//}
//
//void init(int* array, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        array[i] = 0; // ������Ԫ�س�ʼ��Ϊ 0
//    }
//}

//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
 
//дһ����ά���飬����20��words,���������̵�Ӣ�ĵ����Լ����ĳ��ȡ�
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
//    printf("������ %d �����ʣ�\n", WORD_COUNT);
//    inputWords(words, WORD_COUNT);
//
//    findShortestWord(words, WORD_COUNT, shortestWord, &shortestLength);
//
//    printf("��̵��ʣ�%s\n", shortestWord);
//    printf("��̵��ʳ��ȣ�%d\n", shortestLength);
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
//    *shortestLength = strlen(array[0]);  // �����һ������Ϊ��̵��ʵĳ���
//    strcpy(shortestWord, array[0]);      // �����һ������Ϊ��̵���
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
//    int shot = WORD_LENGTH;  // ��ʼ��Ϊ��󳤶�
//
//    printf("������ %d ������:\n", WORD_COUNT);
//    for (i = 0; i < WORD_COUNT; i++)
//    {
//        fgets(S[i], sizeof(S[i]), stdin);
//        S[i][strcspn(S[i], "\n")] = '\0'; 
//        /*����ʹ�� fgets ����ʱ�������԰�ȫ�شӱ�׼���루stdin����ȡһ���ַ�����������洢��ָ�����ַ������С����嵽���Ĵ����У�����������ش���Ľ��ͣ�
//
//            fgets(S[i], sizeof(S[i]), stdin);
//
//        fgets �������ڴӱ�׼���루stdin����ȡһ���ַ�����������洢�� S[i] �ַ������С�
//            S[i] ��ʾҪ�洢������ַ����飬i �������������
//            sizeof(S[i]) ��ʾҪ��ȡ���ַ�����Ĵ�С�����������ʹ�� sizeof ���������ȡ S[i] ����Ĵ�С����ȷ����ȡ���ַ���������������������Ա��⻺���������
//            S[i][strcspn(S[i], "\n")] = '\0';
//
//        strcspn(S[i], "\n") �������ڲ����ַ��� S[i] �е�һ�����з���'\n'����λ�á�
//            strcspn �������ص�һ��ƥ���ַ������������δ�ҵ�ƥ���ַ����򷵻��ַ����ĳ��ȡ�
//            S[i][strcspn(S[i], "\n")] ��ʾ���ַ��� S[i] ���ҵ��ĵ�һ�����з���λ�á�
//            ����λ�õ��ַ���ֵΪ���ַ���'\0'�����Խ����з��滻Ϊ�ַ����Ľ��������Ӷ�ȥ�����з���*/
//
//        if (strlen(S[i]) < shot)
//        {
//            shot = strlen(S[i]);
//        }
//    }
//
//    printf("���Ӣ�ĵ����� ");
//    for (i = 0; i < WORD_COUNT; i++)
//    {
//        if (strlen(S[i]) == shot)
//        {
//            printf("%s ", S[i]);
//        }
//    }
//    printf("�������� %d\n", shot);
//
//    return 0;
//}


//24.������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//    printf("������3�����֣�>");
//    for (i = 0; i < sz; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    printf("������3������:>");
//    for (i = 0; i < sz; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    printf("����ǰ��arr1���飺");
//    printArray(arr1, sz);
//    printf("����ǰ��arr2���飺");
//    printArray(arr2, sz);
//
//    for (i = 0; i < sz; i++) {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//
//    printf("�������arr1���飺");
//    printArray(arr1, sz);
//    printf("�������arr2���飺");
//    printArray(arr2, sz);
//
//    return 0;
//}
//ָ��ⷨ

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
//	printf("������3������:>");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", arr1 + 1);
//	}
//	printf("������10������:>");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", arr2 + i);
//	}
//	printf("����ǰ��arr1���飺");
//	printArray(arr1, 10);
//	printf("����ǰ��arr2���飺");
//	printArray(arr2, 10);
//
//	for (i = 0; i < 10; i++) {
//		int tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = tmp;
//	}
//
//	printf("�������arr1���飺");
//	printArray(arr1, 10);
//	printf("�������arr2���飺");
//	printArray(arr2, 10);
//
//	return 0;
//}
//

//27.��������������������������ʱ����
#include <stdio.h>
void swp(int *a, int *b);
int main()
{
	int a, b;
	printf("����������������");
	scanf("%d %d", &a, &b);
	printf("����ǰ����λ�����ǣ�%d %d",a,b);
	swp(&a, &b);
	printf("���������λ�����ǣ�%d %d",a,b);
	return 0;
}

void swp(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}