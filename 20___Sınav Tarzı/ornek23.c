#include <stdio.h>

// ÖRNEK 23
// İçerisinde yil, ay ve gun alanları bulunan bir "Tarih" yapısı tanımlayınız
// Bu yapıyı parametre olarak alan ve tüm süreyi güne çevirip döndüren
// (1 yıl = 360 gün, 1 ay = 30 gün varsayarak) fonksiyonu yazınız.

struct Tarih{
  int yil;
  int ay;
  int gun;
};


int guneDonustur(struct Tarih tarih){
  return tarih.yil*360 + tarih.ay*30 + tarih.gun;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  struct Tarih tarih;
  tarih.yil = 2026;
  tarih.ay = 1;
  tarih.gun = 10;
  printf("%d", guneDonustur(tarih));
}
