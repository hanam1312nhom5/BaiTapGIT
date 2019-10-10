int USCLN(int a, int b)
{
	while(a!=b)
		if(a>b)
			a=a-b;//dung roi do 
		else
			b=b-a;
	return a;
}

void ten ()
{
	cout<<"\nHello Thang";

void huy()
{
	cout<<"chao huy dep trai ";

}
void Nam()
{
	cout<<"Hello eeverybodyhandsome";

}
void tAnh()
{
	cout<<"toi la nguoi xau nhat nhom Tuan Anh ";
}
int BSCLN(int a, int b)
{
	while (a!=b)
	{
		if(a<b)
			a-=b;
		else
			b-=a;
	}
	return a;
}