#include <stdio.h>
#include <math.h>
#define EPSILON 0.1
typedef struct {
		double realPart;
		double imaginaryPart;
} COMPLEX;	/* 复数类型 */ 
COMPLEX makeComplex(double r, double i);	/* 构建复数 */ 
void printComplex(COMPLEX c);   /* 输出复数 */ 
void printResult(COMPLEX c);    /* 输出复数 */ 
COMPLEX addComplex(COMPLEX x, COMPLEX y);	/* 复数加法 */ 
COMPLEX subComplex(COMPLEX x, COMPLEX y);	/* 复数减法 */ 
COMPLEX mulComplex(COMPLEX x, COMPLEX y);	/* 复数乘法 */ 
COMPLEX divComplex(COMPLEX x, COMPLEX y);	/* 复数除法 */ 
int main(void) {
    double a1, b1, a2, b2;
    COMPLEX a, b, c;
    scanf("%lf%lf%lf%lf", &a1, &b1, &a2, &b2);
    a = makeComplex(a1, b1);
    b = makeComplex(a2, b2);
    /* 加法 */ 
    printComplex(a);
    printf(" + ");
    printComplex(b);
    printf(" = ");
    c = addComplex(a, b);
    printResult(c);
    /* 减法 */
    printComplex(a);
    printf(" - ");
    printComplex(b);
    printf(" = ");
    c = subComplex(a, b);
    printResult(c);
    /* 乘法 */
    printComplex(a);
    printf(" * ");
    printComplex(b);
    printf(" = ");
    c = mulComplex(a, b);
    printResult(c);
    /* 除法 */
    printComplex(a);
    printf(" / ");
    printComplex(b);
    printf(" = ");
    c = divComplex(a, b);
    printResult(c);
    return 0;
}
COMPLEX makeComplex(double r, double i) {
    COMPLEX temp;
    temp.realPart = r;
    temp.imaginaryPart = i;
    return temp;
}
void printComplex(COMPLEX c) {
    if(c.imaginaryPart >= 0)
        printf("(%.1f+%.1fi)", c.realPart, c.imaginaryPart);
    if(c.imaginaryPart < 0)
        printf("(%.1f%.1fi)", c.realPart, c.imaginaryPart);		    
}
void printResult(COMPLEX c) {	
    if(c.realPart == 0 && c.imaginaryPart == 0)
        printf("%.1f\n", c.realPart);
    if(c.realPart && c.imaginaryPart > 0)
        printf("%.1f+%.1fi\n", c.realPart, c.imaginaryPart);
    if(c.realPart && c.imaginaryPart < 0)
        printf("%.1f%.1fi\n", c.realPart, c.imaginaryPart);
    if(c.realPart && c.imaginaryPart == 0)
        printf("%.1f\n", c.realPart);
    if(c.realPart == 0 && c.imaginaryPart)
        printf("%.1fi\n", c.imaginaryPart);
}
COMPLEX addComplex(COMPLEX x, COMPLEX y) {
    COMPLEX temp;
    temp.realPart = x.realPart + y.realPart;
    if(fabs(temp.realPart) < EPSILON)
		temp.realPart = 0; 
    temp.imaginaryPart = x.imaginaryPart + y.imaginaryPart;
    if(fabs(temp.imaginaryPart) < EPSILON)
		temp.imaginaryPart = 0; 
    return temp;
}
COMPLEX subComplex(COMPLEX x, COMPLEX y) {
    COMPLEX temp;
    temp.realPart = x.realPart - y.realPart;
    if(fabs(temp.realPart) < EPSILON)
		temp.realPart = 0; 
    temp.imaginaryPart = x.imaginaryPart - y.imaginaryPart;
    if(fabs(temp.imaginaryPart) < EPSILON)
		temp.imaginaryPart = 0; 
    return temp;
}
COMPLEX mulComplex(COMPLEX x, COMPLEX y) {
    COMPLEX temp;
    temp.realPart = x.realPart * y.realPart - x.imaginaryPart * y.imaginaryPart;
    if(fabs(temp.realPart) < EPSILON)
		temp.realPart = 0; 
    temp.imaginaryPart = x.realPart * y.imaginaryPart + x.imaginaryPart * y.realPart;
    if(fabs(temp.imaginaryPart) < EPSILON)
		temp.imaginaryPart = 0; 
    return temp;
}
COMPLEX divComplex(COMPLEX x, COMPLEX y) {
    COMPLEX temp;
    double denominator = y.realPart * y.realPart + y.imaginaryPart * y.imaginaryPart;
    temp.realPart = (x.realPart * y.realPart +
                     x.imaginaryPart * y.imaginaryPart) / denominator;
    if(fabs(temp.realPart) < EPSILON)
		temp.realPart = 0; 
    temp.imaginaryPart = (x.imaginaryPart * y.realPart -
                          x.realPart * y.imaginaryPart) / denominator;
    if(fabs(temp.imaginaryPart) < EPSILON)
		temp.imaginaryPart = 0; 
    return temp;
}