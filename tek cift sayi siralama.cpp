
//girilecek sayi adedini ve sayilari kullanicidan alarak tek ve çift diye ayirip tek sayilari artan sirada,çift sayilari azalan sirada yazan c programi.
//fonksiyonlar kullanarak
#include<stdio.h>

void tek_siralama(int dizi2[],int boyut1);
void cift_siralama(int dizi3[],int boyut2);

void tekcift(int dizi1[],int a)
{
	int i,m=0,n=0,tek[20],cift[20];
	for(i=0;i<a;i++)
	{
		if(dizi1[i]%2==0)
		{
		   cift[m]=dizi1[i];
		   m++;
		}
		else
		{
	       tek[n]=dizi1[i];
	       n++;
		}
    }
	printf("\nCift sayilar:\n");
	for(i=0;i<m;i++)
	printf("%d ",cift[i]);
	
	printf("\nTek sayilar:\n");
	for(i=0;i<n;i++)
	printf("%d ",tek[i]);
	
	printf("\n\nCift sayilar azalarak siralandi:\n");
	cift_siralama(cift,m);	
	printf("\nTek sayilar artarak siralandi:\n");
	tek_siralama(tek,n);		
}

void tek_siralama(int dizi2[],int boyut1)
{
	int i,j,kalan,min;
	for(i=0;i<boyut1-1;i++)
	{
		min=i;
		for(j=i+1;j<boyut1;j++)
		{
			if(dizi2[j]<dizi2[min])
			min=j;
		}
	kalan=dizi2[i];
	dizi2[i]=dizi2[min];
	dizi2[min]=kalan;
	}

	for(i=0;i<boyut1;i++)
	printf("%d ",dizi2[i]);
}

void cift_siralama(int dizi3[],int boyut2)
{
	int i,j,kalan,max;
	for(i=0;i<boyut2-1;i++)
	{
		max=i;
		for(j=i+1;j<boyut2;j++)
		{
			if(dizi3[j]>dizi3[max])
			max=j;
		}
	kalan=dizi3[i];
	dizi3[i]=dizi3[max];
	dizi3[max]=kalan;
	}
for(i=0;i<boyut2;i++)
	printf("%d ",dizi3[i]);
}

int main()
{
	int i,eleman,dizi[50];
	printf("Islem yapmak istediginiz eleman sayisini giriniz:");
	scanf("%d",&eleman);
	printf("Elemanlari giriniz:\n");
	for(i=0;i<eleman;i++)
	scanf("%d",&dizi[i]);
    tekcift(dizi,eleman);
    return 0;
}





