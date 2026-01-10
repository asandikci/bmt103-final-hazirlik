#include <stdio.h>

// ÖRNEK 14
// SADECE stdio.h KÜTÜPHANESİNİ KULLANARAK parametre olarak bir karakter dizisi alıp
// karakter dizisinin uzunluğunu döndüren "uzunluk" adlı fonksiyonu yazınız.


int uzunluk(char* str){
  int sayi=0;
  while(str[sayi]!='\0'){
    sayi++;
  }
  return sayi;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  char str[] = "Murat4erler";
  printf("%d", uzunluk(str));
}
