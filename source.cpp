int USCLN(int a, int b)
{
	while(a!=b)
		if(a>b)
			a=a-b;//dung roi do 
		else
			b=b-a;
	return a;
}