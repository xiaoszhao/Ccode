//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<stdio.h>
//int Add(int x,int y) Add代表添加相加，自定义函数
//{
//	int z = x +y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 900;
//		int num2 = 700;
//		int sum = 0;
//		sum = Add(num1, num2);
//		printf("sum=%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS       两个数相加
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);    添加地址，即添加空位，带入上面数据
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//		return 0;
//
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int Add(int a, int b, int c)
//{
//	int e = a + b * c;
//	return e;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 4;
//	int num4 = 40;
//	int num5 = 10;
//	int num6 = 10;
//	int sum=Add(num1, num2, num3);
//	int num =Add(num4,num5,num6);       #num算出来的数不对，但我不知道哪里出错，以后再看
//	printf("sum=%d\n",sum);
//	printf("num=%d\n,num");
//	return 0;
//
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("你好啊!\n");
//		return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };下标0对应的为1      第N个数对应的下标为N-1
//	int i = 0;
//	while (i < 10)      while(**)后不要加任何字母或标点，可能导致出现的不是想要的东西或者导致空白
//	{printf("%d", arr[i]);    整形，arr里从下标0开始对应的元素依此打印出来
//	i++; }
//	return 0;
//
//
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  #无法列举出来1-10的数字，打开指令后是空白
//	for (i=0,i < 10;i++;)
//	
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int input = 0;
//int inset = 0;
//int main()
//{
//	printf("你好啊！我很高兴遇见你！\n");
//	printf("你为什么要来这里？(1）>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("就你，你狠厉害吗？我不是瞧不起你，你能把我怎么样？(1)>:");
//  scanf_s("%d",&inset);            地址必须都有，要不然下一个命令无法执行，正所谓一个空一个答案
//	if (inset == 1)
//		printf("我可以鸡你太美！\n");   
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//条件操作符,三目操作符，a>b是真的，取a 假的，取b
//	if (a > b)
//		printf("%d\n", max);
//	else
//		printf("%d\n", max);
//	return 0;
//}

//#define _CRT_FECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int sum = 10;
//	printf("%d\n", &sum);//打印出sum的地址
//	double a = 3.14;
//	double* b = &a;
//	*b = 5.3;   *解引用操作符/间接访问操作符
//	printf("%lf\n", a);//打印double用lf
// printf("%ld\n",*sum);
//	return 0;
//}

//#include<stdio.h>
//struct People 
//{
//	char name[7];
//	short life;
//	char school[19];
//	char kid[28];//属性
//	char weapon[7];//武器
//	char skill[13];
//};
//int main()
//
//{   
//	int output = 0;
//	int input = 0;
//	int sumput = 0;
//	int gatput = 0;
//	int aput = 0;
//	printf("要开始游戏吗?(1)>:" );
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("正在为您分配人物简介,请输入1完成人物分配。(1)>:%d\n");
//	scanf_s("%d", &output);
//	struct People b1 = { "赌神",99,"赌神塑造学校","持续增加自身幸运值","卡牌","神之一手" }; //必须全是用英文写出来的，要不然可能会运行不出来，标点符号也必须使用英文
//	printf("名字:%s\n",b1.name);
//	printf("生命:%d\n", b1.life);
//	printf("学校:%s\n", b1.school);
//	printf("属性:%s\n", b1.kid);
//	printf("武器:%s\n", b1.weapon);
//	printf("技能:%s\n", b1.skill);
//	printf("你是否开始赌博？输入1开始赌博...（1)>:");
//	scanf_s("%d", &sumput);
//	b1.life = 88;
//	printf("由于赌博身体机能持续下降，生命值变为%d年\n", b1.life);
//	{int a;
//begin: scanf_s("%d", &a);
//	printf("你是否还要继续赌博？输入1继续赌博，并发挥技能...(1/2)>:");
//	scanf_s("%d", &gatput);
//	if (gatput == 1)
//		printf("你失败了，欠了一屁股债，抑郁身亡,输入1重新选择...（1）>:");
//	else
//		printf("克服了赌博，从此走上光明大路并创造了一番事业。%d\n");
//	scanf_s("%d", &aput);//不知道如何从184行返回到179行继续运行
//	if (aput == 1)
//		goto begin; }利用这个进行返回运行，实现再次运行179行代码
//	
//	return 0;
//
//
//}

//#include<string.h>//未识别字符，string.h后不加s,后面使用strcpy必须开头说明源文件，才可以使用
//#include<stdio.h>
//struct People
//{
//	char name[7];
//};
//int main()
//{
//	struct People b1={"C++"};
//	strcpy_s(b1.name, "phthy");//strcpy字符未定义,得使用strcpy_s，数组改名不能像数字符号一样，在结构体中修改得使用strcpy_s
//	printf("%s\n", b1.name);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 6;
//	int i = 0;
//	i = a;
//	a = b;
//	b = i;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

#include<stdio.h>
struct Book
{
	char name[7];
};
int main()
{
	struct Book q1 = { "C++" };
	struct Book* aq = &q1;
	printf("%s\n", (* aq).name);
	printf("%s\n", aq->name);//简易写法
	printf("%s\n", q1.name);
	return 0;

}