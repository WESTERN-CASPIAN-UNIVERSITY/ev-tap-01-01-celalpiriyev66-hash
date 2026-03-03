/*Tapşırıq 1: Şəxsi məlumatlar
Aşağıdakı məlumatları ekrana çıxaran proqram yazın:

•	Adınız
•	Soyadınız
•	Yaşınız
•	Universitetiniz
•	İxtisasınız
Gözlənilən çıxış:
Ad: Əli
Soyad: Məmmədov
Yaş: 20
Universitet: Bakı Dövlət Universiteti
İxtisas: Kompüter Elmləri*/


#include<stdio.h>
int main (){
	char ad[10];
	char soyad[10];
	int yas;
	char universitetiniz[50];
	char ixtisasiniz[50];
	printf("adinizi soyadinizi yasinizi universitetinizi veixtisasinizi daxil edin:%s %s %d %s %s",ad, soyad, yas, universitetiniz, ixtisasiniz);
	scanf("%s %s %d %s %s", ad, soyad, &yas, universitetiniz, ixtisasiniz);
	printf("ad=%s soyad=%s yas=%d universitet=%s ixtisas=%s",ad, soyad, yas, universitetiniz, ixtisasiniz);
}

