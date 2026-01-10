#include <stdio.h>

// ÖRNEK 15
// Parametre olarak bir karakter dizisi alan ve
// dizi içindeki tüm küçük harfleri ASCII değerlerini kullanarak büyük harfe çeviren
// (yerinde değişiklik yapan) "buyult" fonksiyonunu yazınız.

// ASCII TABLOSU
// a -> 97 .... z -> 122
// A -> 65 .... Z -> 90

void Buyult(char* str){
  int i=0;
  while(str[i]!='\0'){
    if(str[i]>=97 && str[i] <=122){
      str[i]=str[i]-32;
    }
    i++;
  }
}

// İPUCU: sınırları unutursan 97 ve 122 yerine direkt 'a' ve 'z' yazabilirsin
// ama Büyük harflerin küçük harflerden 32 daha az değerde olduğunu bil

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  char str[] = "Murat4erler";
  Buyult(str);
  printf("%s", str);
}
