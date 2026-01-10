#include <stdio.h>

// ÖRNEK 30
// Parametre olarak içinde '(' ve ')' karakterlerini içeren bir string (char dizisi) alan;
// eğer parantezlerin hepsi doğru açılmış ve kapatılmışsa toplam parantez çifti sayısını,
// eğer parantez dizisi geçerli değilse -1 dönen fonksiyonu yazınız
// ((()())()(())) -> 7
// ((()) -> -1

int parantezKontrol(char* str){
  int i=0;
  int acik=0;
  int toplam=0;
  while(str[i]!='\0'){
    if(str[i]=='('){
      acik++;
    }
    else{
      if(acik==0){
        return -1;
      }
      acik--;
      toplam++;
    }
    i++;
  }

  if(acik==0){
    return toplam;
  }
  return -1;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", parantezKontrol("((()())()(()))") );
  printf("%d\n", parantezKontrol("((())") );
  printf("%d\n", parantezKontrol("())(())") );
  printf("%d\n", parantezKontrol("())(())(") );
}
