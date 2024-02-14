#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void PrintN(int N)
//{
//	int i = 1;
//	while (i <= N)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	PrintN(N);
//	return 0;
//}


//#include <stdio.h>
//
//#define MAXN 10
//
//double f(int n, double a[], double x);
//
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//
//    scanf("%d %lf", &n, &x);
//    for (i = 0; i <= n; i++)
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}
//
//
//double f(int n, double a[], double x)
//{
//    double ret = 0;
//    int i = 0;
//    int j = 0;
//    double sum = 0;
//    double x_i = 1;
//    for (i = 0; i <= n; i++)
//    {
//        for (; j < i; j++)
//        {
//            x_i *= x;
//        }
//        ret = x_i * a[i];
//        sum += ret;
//        ret = 0;
//    }
//    return sum;
//}


//#include <stdio.h>
//
//#define MAXN 10
//
//int Sum(int List[], int N);
//
//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%d", &List[i]);
//    printf("%d\n", Sum(List, N));
//
//    return 0;
//}
//
//
//int Sum(int List[], int N)
//{
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < N ;i++)
//    {
//        sum += List[i];
//    }
//    return sum;
//}



//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Average(ElementType S[], int N);
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Average(S, N));
//
//    return 0;
//}
//
//ElementType Average(ElementType S[], int N)
//{
//    ElementType sum = 0.0;
//    ElementType ret = 0.0;
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        sum += S[i];
//    }
//    ret = sum / N;
//    return ret;
//}



//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Max(ElementType S[], int N);
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Max(S, N));
//
//    return 0;
//}
//
//
//ElementType Max(ElementType S[], int N)
//{
//    ElementType max = S[0];
//    int i = 0;
//    for (i = 1; i < N; i++)
//    {
//        if (S[i] > max)
//        {
//            max = S[i];
//        }
//    }
//    return max;
//}



//#include <stdio.h>
//#include <math.h>
//
//int IsTheNumber(const int N);
//
//int main()
//{
//    int n1, n2, i, cnt;
//
//    scanf("%d %d", &n1, &n2);
//    cnt = 0;
//    for (i = n1; i <= n2; i++) {
//        if (IsTheNumber(i))
//            cnt++;
//    }
//    printf("cnt = %d\n", cnt);
//
//    return 0;
//}
//
//
//int IsTheNumber(const int N)
//{
//    int num_of_N[10] = { 0 };
//    int num_N = 0;
//    int mark = 0;
//    int n = N;
//    int i = 0;
//    int count = 0;
//    if (n < 0 || n == 0)
//        return 0;
//
//    while (1)
//    {
//        num_N = n % 10;
//        for (i = 0; i < count; i++)
//        {
//            if (num_N == num_of_N[i])
//            {
//                goto next;
//            }
//        }
//        num_of_N[count] = num_N;
//        count++;
//        n /= 10;
//
//        if (mark == 1)
//            return 0;
//
//        if (n <= 9)
//            mark = 1;
//    }
//
//
// next:
//     ;
//
//    int num_s = 0;
//    num_s = (int)sqrt(N);
//    if (pow(num_s, 2) == N)
//        return 1;
//    else
//        return 0;
//}



//#include <stdio.h>
//
//int Factorial(const int N);
//
//int main()
//{
//    int N, NF;
//
//    scanf("%d", &N);
//    NF = Factorial(N);
//    if (NF)  printf("%d! = %d\n", N, NF);
//    else printf("Invalid input\n");
//
//    return 0;
//}
//
//
//int Factorial(const int N)
//{
//    int i = 0;
//    int ret = 1;
//    if (N < 0)
//        return 0;
//    if (N == 0)
//        return 1;
//    for (i = 1; i <= N; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}


//#include <stdio.h>
//
//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
//
//int Count_Digit(const int N, const int D)
//{
//    int n = N;
//    int m = D;
//    int count = 0;
//    int mark = 0;
//    if (n == 0 && D == 0)
//        return 1;
//    if (n < 0)
//        m = -m;
//    while (1)
//    {
//        if (n % 10 == m)
//            count++;
//        n /= 10;
//        
//        if (mark == 1)
//            break;
//
//        if (n >= -9 && n <= 9)
//            mark = 1;
//    }
//    return count;
//}




//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}


//void Print_Factorial(const int N)
//{
//    int i = 0;
//    unsigned long long sum = 1;
//    if (N == 0)
//    {
//        printf("%lld", sum);
//        goto end;
//    }
//    if (N < 0)
//    {
//        printf("Invalid input");
//        goto end;
//    }
//
//    for (i = 1; i <= N; i++)
//    {
//        sum *= i;
//    }
//    printf("%lld", sum);
//end:
//    ;
//}


//void Print_Factorial(const int N)
//{
//    char sum[200] = "1";
//    char sum_cop[200] = "1";
//    char sum_use[200] = "1";
//    int i = 0;
//    int num_L = 1;
//    for (i = 1; i <= N; i++)
//    {
//        int j = 0;
//        int Ten = 0;
//        for (j = 0; j < num_L; j++)
//        {
//            int k = sum[j] - 48;
//            int i_tem = i;
//            int digit = 0;
//            while (i_tem > 0)
//            {
//                int tem = k * (i_tem % 10);
//                i_tem /= 10;
//                int mark_Ten = 0;
//                if (((tem % 10) + Ten) < 10)
//                    sum[j + digit] = ((tem % 10) + Ten) + 48;
//                else
//                {
//                    sum[j + digit] = (((tem % 10) + Ten) % 10) + 48;
//                    mark_Ten = 1;
//                }
//                tem /= 10;
//                if (tem >= 0)
//                {
//                    Ten = tem;
//                    if (mark_Ten == 1)
//                        Ten++;
//                }
//                else
//                    Ten = 0;
//
//
//                if ((j + 1) == num_L && Ten > 0)
//                {
//                    sum[j + 1 + digit] = Ten + 48;
//                    num_L++;
//                    if (i_tem == 0)
//                        goto end;
//                }
//
//                digit++;
//            }
//        }
//    end:
//        ;
//    }
//    
//    for (i = (num_L - 1); i >= 0; i--)
//    {
//        printf("%c", sum[i]);
//    }
//}
//寄




//AI写的
//#include <stdio.h>
//
//void Print_Factorial(const int N) {
//    // 检查输入是否有效
//    if (N < 0) {
//        printf("Invalid input\n");
//        return;
//    }
//
//    // 处理特殊情况：0的阶乘为1
//    if (N == 0) {
//        printf("1\n");
//        return;
//    }
//
//    // 使用数组存储每位数字
//    int result[3000] = { 0 };
//    int len = 1; // 结果位数
//    result[0] = 1; // 初始值为1
//
//    // 逐位相乘
//    for (int i = 2; i <= N; ++i) 
//    {
//        int carry = 0; // 进位
//        for (int j = 0; j < len; ++j)
//        {
//            int temp = result[j] * i + carry;
//            result[j] = temp % 10;
//            carry = temp / 10;
//        }
//
//        // 处理进位
//        while (carry)
//        {
//            result[len] = carry % 10;
//            carry /= 10;
//            ++len;
//        }
//    }
//
//    // 逆序输出结果
//    for (int i = len - 1; i >= 0; --i)
//    {
//        printf("%d", result[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int N;
//    printf("Enter a non-negative integer: ");
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}


//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//
//
//void Print_Factorial(const int N)
//{
//    if (N == 0)
//    {
//        printf("1");
//        goto end;
//    }
//    if (N < 0)
//    {
//        printf("Invalid input");
//        goto end;
//    }
//
//    char sum[5000] = "1";
//    int i = 0;
//    int length = 1;
//    int Ten = 0;
//    for (i = 1; i <= N; i++)
//    {
//        int temp = 0;
//        int j = 0;
//        for (j = 0; j < length; j++)
//        {
//            temp = (sum[j] - 48) * i + Ten;
//            sum[j] = (temp % 10) + 48;
//            Ten = temp / 10;
//        }
//
//        while (Ten)
//        {
//            sum[length] = (Ten % 10) + 48;
//            length++;
//            Ten /= 10;
//        }
//    }
//    
//    for (i = (length - 1); i >= 0; i--)
//    {
//        printf("%c", sum[i]);
//    }
//
//end:
//    ;
//}



#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median(ElementType A[], int N)
{
    int i = 0;
    for (i = i; i < N; i++)
    {
        int j = 0;
        for (j = i; j < (N - 1); j++)
        {
            if (A[j] < A[j + 1])
            {
                ElementType temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    if (N % 2 == 1)
        return A[N / 2];
    else
        return A[(N + 1) / 2];
}