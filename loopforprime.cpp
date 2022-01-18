if(n>=1)
{
	printf("the first %d prime numbers are \n");
	printf("2\n");
}

for(count=2;couny<=n;)
{
	for(c=2;c<=i-1;c++)
	{
		if(i%c==0)
			break;
	}
	if(c==i)
	{
	printf("%d\n",i);
	count++;
	}
	i++;
}
