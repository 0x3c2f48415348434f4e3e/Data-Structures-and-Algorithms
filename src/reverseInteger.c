#include<common.h>

ULI reverseInteger(ULI val){
	ULI res = 0;
	ULI temp = val;
	while(temp !=0){
		res = (res*10) + (temp%10);
		temp/=10;
	}
	return res;
}
