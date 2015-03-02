//#include<stdio.h>
int array[2][2];
int answer[2][2];
int bin[60];
int matrix()
{
	int i,j;
	int reply[2][2];
	for(i=0;i<2;i=i+1){
		for(j=0;j<2;j=j+1)
		{
			reply[i][j]=((array[i][0]*array[0][j])%1007)+(array[i][1]*array[1][j]%1007);
			reply[i][j]%=1007;
		}	
	}	
	array[0][0]=reply[0][0];
	array[0][1]=reply[0][1];
	array[1][0]=reply[1][0];
	array[1][1]=reply[1][1];
	return 10;
}
int matrix_mult()
{
	int i,j;
	int reply[2][2];
	reply[0][0]=0;
	reply[0][1]=0;
	reply[1][0]=0;
	reply[1][1]=0;
	for(i=0;i<2;i=i+1){
		for(j=0;j<2;j=j+1)
		{
			reply[i][j]=answer[i][0]*array[0][j]%1007+answer[i][1]*array[1][j]%1007;
			reply[i][j]%=1007;
		}	
	}	
	answer[0][0]=reply[0][0];
	answer[0][1]=reply[0][1];
	answer[1][0]=reply[1][0];
	answer[1][1]=reply[1][1];
	return 20;
}
int fib(int n)
{
	int p,counter,i,j;
	counter=0;
	p=n;
	array[0][0]=1;
	array[0][1]=1;
	array[1][0]=1;
	array[1][1]=0;
	answer[0][0]=1;
	answer[0][1]=0;
	answer[1][1]=1;	
	answer[1][0]=0;	
	while(p!=0)
	{
		bin[counter]=p%2;
		p/=2;
		counter=counter+1;
	}	
	for(p=1;p<counter;p=p+1)
	{
		matrix();
		if(bin[p]==1){
			matrix_mult();
		}
	}
	if(counter!=0 && bin[0]==1){
		
		return answer[0][0];
	}
	else{
		return answer[0][1];
	}
	return 0;
}


int main()
{
	int test,i,n,m;
	int a,b;
	read(int,test);
	//scanf("%d",&test);
	for(i=0;i<test;i=i+1)
	{
		read(int,n);
		read(int,m);
		//scanf("%d %d",&n,&m);
		if(n==0){
			a=1;
		}
		else{
			//a=n+1;
			a=fib(n+1);
			//a=2;
		}
		if(m==0){
			b=1;
		}
		else{
			//b=m+2;
			b=fib(m+2);
		}
//		printf("%lld %lld\n",a,b);
		if(b-a>0){
			int dev;
			dev=b-a;
			print(int,dev);
			//printf("%lld\n",b-a);
		}
		else{
			int dev;
                        dev=b-a+1007;
                        print(int,dev);
		}
	}
	return 0;
}
