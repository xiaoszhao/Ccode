//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<stdio.h>
//int Add(int x,int y) Add���������ӣ��Զ��庯��
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
//#define _CRT_SECURE_NO_WARNINGS       ���������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);    ��ӵ�ַ������ӿ�λ��������������
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
//	int num =Add(num4,num5,num6);       #num������������ԣ����Ҳ�֪����������Ժ��ٿ�
//	printf("sum=%d\n",sum);
//	printf("num=%d\n,num");
//	return 0;
//
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("��ð�!\n");
//		return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };�±�0��Ӧ��Ϊ1      ��N������Ӧ���±�ΪN-1
//	int i = 0;
//	while (i < 10)      while(**)��Ҫ���κ���ĸ���㣬���ܵ��³��ֵĲ�����Ҫ�Ķ������ߵ��¿հ�
//	{printf("%d", arr[i]);    ���Σ�arr����±�0��ʼ��Ӧ��Ԫ�����˴�ӡ����
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  #�޷��оٳ���1-10�����֣���ָ����ǿհ�
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
//	printf("��ð����Һܸ��������㣡\n");
//	printf("��ΪʲôҪ�����(1��>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("���㣬����������Ҳ����Ʋ����㣬���ܰ�����ô����(1)>:");
//  scanf_s("%d",&inset);            ��ַ���붼�У�Ҫ��Ȼ��һ�������޷�ִ�У�����νһ����һ����
//	if (inset == 1)
//		printf("�ҿ��Լ���̫����\n");   
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//����������,��Ŀ��������a>b����ģ�ȡa �ٵģ�ȡb
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
//	printf("%d\n", &sum);//��ӡ��sum�ĵ�ַ
//	double a = 3.14;
//	double* b = &a;
//	*b = 5.3;   *�����ò�����/��ӷ��ʲ�����
//	printf("%lf\n", a);//��ӡdouble��lf
// printf("%ld\n",*sum);
//	return 0;
//}

//#include<stdio.h>
//struct People 
//{
//	char name[7];
//	short life;
//	char school[19];
//	char kid[28];//����
//	char weapon[7];//����
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
//	printf("Ҫ��ʼ��Ϸ��?(1)>:" );
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("����Ϊ������������,������1���������䡣(1)>:%d\n");
//	scanf_s("%d", &output);
//	struct People b1 = { "����",99,"��������ѧУ","����������������ֵ","����","��֮һ��" }; //����ȫ����Ӣ��д�����ģ�Ҫ��Ȼ���ܻ����в�������������Ҳ����ʹ��Ӣ��
//	printf("����:%s\n",b1.name);
//	printf("����:%d\n", b1.life);
//	printf("ѧУ:%s\n", b1.school);
//	printf("����:%s\n", b1.kid);
//	printf("����:%s\n", b1.weapon);
//	printf("����:%s\n", b1.skill);
//	printf("���Ƿ�ʼ�Ĳ�������1��ʼ�Ĳ�...��1)>:");
//	scanf_s("%d", &sumput);
//	b1.life = 88;
//	printf("���ڶĲ�������ܳ����½�������ֵ��Ϊ%d��\n", b1.life);
//	{int a;
//begin: scanf_s("%d", &a);
//	printf("���Ƿ�Ҫ�����Ĳ�������1�����Ĳ��������Ӽ���...(1/2)>:");
//	scanf_s("%d", &gatput);
//	if (gatput == 1)
//		printf("��ʧ���ˣ�Ƿ��һƨ��ծ����������,����1����ѡ��...��1��>:");
//	else
//		printf("�˷��˶Ĳ����Ӵ����Ϲ�����·��������һ����ҵ��%d\n");
//	scanf_s("%d", &aput);//��֪����δ�184�з��ص�179�м�������
//	if (aput == 1)
//		goto begin; }����������з������У�ʵ���ٴ�����179�д���
//	
//	return 0;
//
//
//}

//#include<string.h>//δʶ���ַ���string.h�󲻼�s,����ʹ��strcpy���뿪ͷ˵��Դ�ļ����ſ���ʹ��
//#include<stdio.h>
//struct People
//{
//	char name[7];
//};
//int main()
//{
//	struct People b1={"C++"};
//	strcpy_s(b1.name, "phthy");//strcpy�ַ�δ����,��ʹ��strcpy_s������������������ַ���һ�����ڽṹ�����޸ĵ�ʹ��strcpy_s
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
	printf("%s\n", aq->name);//����д��
	printf("%s\n", q1.name);
	return 0;

}