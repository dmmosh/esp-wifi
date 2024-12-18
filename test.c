#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("%s %s\n", getenv("WIFI_NAME"), getenv("WIFI_PASS"));
	return 0;
}
