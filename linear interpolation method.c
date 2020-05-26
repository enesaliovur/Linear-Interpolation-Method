#include<stdio.h>                             /* Gerekli k�t�phaneleri tan�mlad�m */
#include<math.h>          

#define   f(x)    pow(x,3)-2*pow(x,2)-5       /* Soruda benden istenilen fonksiyonu f(x) olarak tan�mlad�m */
#define e 0.01                                /* Soruda verilen 0.01 hata pay�n� e de�i�kenine atad�m. */



problem_cozum(){                               /* problem_cozum isminde bir fonksiyon olu�turdum*/             
	int i=0;                                         
	float an=2,bn=3,sonuc,x=2.6906;  
	k: 
	
	//xn hesaplama fonksiyonunun parca parca tan�mlanmasi
	float kesir_alt =  f(bn) ;
	float kesir_alt_1 =f(an);
	float kesir_son_alt = kesir_alt - kesir_alt_1;
	
	float kesir_ust = f(bn) ;
	float kesir_ust_1 = f(an) ;
	float kesir_son_ust = an*kesir_ust- bn*kesir_ust_1;
	
	
	float xn = kesir_son_ust / kesir_son_alt ; //xn degeri tanimlanmasi hesaplanma formulu
	
	//hata degeri tanimlanmasi
	float hata=fabs(x-xn);
	              
    printf("\nIterasyon\tan\t\bn\t\txn\t\tHata\n");
    

do{
	i++; 
	an=xn;
	if(i==4)	{
		goto m;
	}
	goto k;
	
	}while(hata<e); //hata kontrolu
	
		m:	
	 	
		sonuc=fabs(2-xn);
	 	printf("\nSonuc : %f", sonuc);  //kok ciktisi

	 }
    
    printf("%d\t\t%f\t%f\t%f\t%f\n",i,an,bn,xn,hata);       /*Sonu�lar� yazd�rd�m*/
	



                                 /*Durma ko�ulunu kontrol ettirdim*/             


int main(){
  problem_cozum();                          /*problem_cozum fonksiyonunu main fonksiyonunun i�inde �a��rd�m*/
}
