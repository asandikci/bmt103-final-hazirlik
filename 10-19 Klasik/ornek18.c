#include <stdio.h>

// ÖRNEK 18
// "Kitap" isminde bir yapı (struct) tanımlayınız (içinde ad, yazar ve sayfa_sayisi olsun)
// Parametre olarak bu yapıdan bir değişken alan ve
// kitabın bilgilerini düzgün bir formatta ekrana basan fonksiyonu yazınız.

struct Kitap{
  char *ad;
  char *yazar;
  int sayfa_sayisi;
};

void KitapBastir(struct Kitap kitap){
  printf("Kitabin Adi:\t\t %s\n", kitap.ad);
  printf("Kitabin Yazari:\t\t %s\n", kitap.yazar);
  printf("Kitabin Sayfa Sayisi:\t %d\n", kitap.sayfa_sayisi);
}



// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  struct Kitap kitap = {"BMT 103 Finalden Nasil Gecilir", "Aliberk Sandikci", 250};
  KitapBastir(kitap);
}
