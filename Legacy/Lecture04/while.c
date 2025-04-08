int squid_puts(){
	int count = 0;
	while (count < 3){
		puts("오징어");
		count += 1;
	}
	puts("*맛있다");
	return 0;
}

int main(){
	int count = 0;
	while(count < 3){
		squid_puts();
		count += 1;
	}
	return 0;
}
