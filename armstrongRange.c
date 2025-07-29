int takeDigitCount(int);
int getPower(int,int);
void main(){
	int k,end=200;
	for(k=1;k<=end;k++){
		int num=k;
		int temp=num,pow;
		int count,rem,i,sum=0;
		count=takeDigitCount(temp);//function call to get count of digit in number
		temp=num;
		while(temp){
			rem=temp%10;
			pow=getPower(rem,count);//function call to get power
			sum=sum+pow;
			temp=temp/10;
		}
		if(sum==num)
			printf("%d",sum);
	}
	
}
//function to get count of digits in number
int takeDigitCount(int num){
	int count=0;
	while(num){
		num=num/10;
		count++;
	}
	return count;
}
//function to get power
int getPower(int base,int expo){
	int pow=1,i;
	for(i=1;i<=expo;i++){
		pow=pow*base;
	}
	return pow;
}
