#include <stdio.h>

// ÖRNEK 30
// Parametre olarak içinde '(' ve ')' karakterlerini içeren bir string (char dizisi) alan;
// eğer parantezlerin hepsi doğru açılmış ve kapatılmışsa toplam parantez çifti sayısını,
// eğer parantez dizisi geçerli değilse -1 dönen fonksiyonu ÖZYİNELEMELİ OLARAK yazınız
// ((()())()(())) -> 7
// ((()) -> -1

int parantezKontrol(char* str, int acik){
  if(*str=='\0'){
    if(acik==0){
      return 0;
    }
    return -1;
  }

  if(*str=='('){
    return parantezKontrol(str+1, acik+1);
  }
  else {
    if(acik==0){
      return -1;
    }
    int sonuc = parantezKontrol(str+1, acik-1);
    return sonuc==-1?-1:(sonuc+1);
  }

  return parantezKontrol(str+1, acik);
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", parantezKontrol("((()())()(()))", 0) );
  printf("%d\n", parantezKontrol("((())", 0) );
  printf("%d\n", parantezKontrol("())(())", 0) );
  printf("%d\n", parantezKontrol("())(())(", 0) );
}
