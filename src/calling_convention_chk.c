#include <stdio.h>

float int_float(int a, float b){
float c =b;
int d = a;

return d+c;
}

double int_double(int a, double b){
double c = b;
int d = a;

return d+c;
}

float float_int(float a, int b){
float c = a;
int d = b;

return d+c;
}

double double_int(double a, int b){
double c=a;
int d = b;

return d+c;
}

char one_char(char c1){
	char ret = c1+1;
	return ret;
}

char two_chars(char c1, char c2){
	char ret = c1+1;
	ret += c2;
	ret += 1;
	return ret;
}

int four_chars_int(char c1, char c2,char c3, char c4, int a){
	int ret = c1 + c2 + c3 + c4;
	ret += a;
	return ret;
}

int four_chars_two_int(char c1, char c2,char c3, char c4, int a,int b){
	int ret = c1 + c2 + c3 + c4;
	ret += a;
	ret += b;
	return ret;
}

int int_four_chars(int a, char c1, char c2,char c3, char c4){
	int ret = c1 + c2 + c3;
	ret += a;
	return ret;
}

int two_int_four_chars(int a,int b, char c1, char c2,char c3, char c4){
	int ret = c1 + c2 + c3;
	ret += a;
	ret += b;
	return ret;
}

int eight_ints(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8){

return a1+a2+a3+a4+a5+a6+a7+a8;

}

int with_locals(int a, int b){
	int c = 5 * a + b ;
	int d = 7*b +a ;
	return d*c;

}

double double_double(double a, double b){
return a*b + 7;
}

void* return_a_ptr(int x){
	void* result = malloc(x);
	return result;
}

char* return_buffer(char* inp){
	char buf[500];
	strcpy(buf,inp);
	return buf;
}

int mul_by_7(int x){
	int result = x;
	result = result * 5;
	return result;
}

int main(int argc, char** argv){
	int i = 1;
	float f = 2.2;
	double d = 3.3;
	char c1='a', c2='b', c3='c', c4='d';
	int x = 100;

	int_float(i,f);
	int_double(i,d);
	float_int(f,i);
	double_int(d,i);
	one_char(c1);
	two_chars(c1,c2);
	four_chars_int(c1,c2,c3,c4,i);
	int_four_chars(i,c1,c2,c3,one_char(c4));
	return_a_ptr(x);
	return_buffer("hello");
	return 1;
}