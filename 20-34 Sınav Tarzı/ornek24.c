#include <stdio.h>

// ÖRNEK 24
// İçerisinde saat, dakika ve saniye tamsayı alanları olan bir Zaman yapısı (struct) tanımlayınız.
// Bu yapının adresini ve eklenecek saniye miktarını parametre olarak alan,
// toplam saniyeyi güncelleyip (60 saniye olunca dakikayı arttıracak şekilde)
// yapıyı güncelleyen fonksiyonu yazınız.

struct Zaman{
  int saat;
  int dakika;
  int saniye;
};


void zamaniGuncelle(struct Zaman* zaman, int saniye){
  zaman->saniye += saniye;
  if(zaman->saniye >=60){
    zaman->dakika += (zaman->saniye)/60;
    zaman->saniye = (zaman->saniye)%60;
  }

  if(zaman->dakika >=60){
    zaman->saat += (zaman->dakika)/60;
    zaman->dakika = (zaman->dakika)%60;
  }

}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  struct Zaman zaman;
  zaman.saat = 8;
  zaman.dakika = 58;
  zaman.saniye = 37;
  zamaniGuncelle(&zaman, 230);

  printf("Zaman: %d saat %d dakika %d saniye", zaman.saat, zaman.dakika, zaman.saniye);
}
