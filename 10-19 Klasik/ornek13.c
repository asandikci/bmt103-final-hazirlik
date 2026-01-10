#include <stdio.h>
#include <string.h>

// ÖRNEK 13
// Parametre olarak bir karakter dizisi alıp
// karakter dizisinin uzunluğunu döndüren "uzunluk" adlı fonksiyonu yazınız.


int uzunluk(char* str){
  return strlen(str);
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  char str[] = "Murat4erler";
  printf("%d", uzunluk(str));
}
