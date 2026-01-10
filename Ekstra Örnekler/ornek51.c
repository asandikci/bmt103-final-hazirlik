// EKSTRA ORNEK 51
// 1 Ocak 1970 tarihini başlangıç (Epoch) kabul ederek, kullanıcıdan alınan iki farklı tarih arasındaki farkı saniye cinsinden hesaplayan bir C programı yazınız.
// - Tarih bilgilerini tutmak için struct kullanınız.
// - Artık yıl (leap year) durumunu göz önünde bulundurunuz (Şubat ayının 29 çekmesi ve yılın 366 gün olması).
// - Fonksiyonlara parametre aktarırken 'Call by Reference' (pointer) yöntemini kullanınız.
// - Program, her iki tarihi de önce 1970'ten itibaren geçen toplam saniyeye dönüştürmeli, ardından farkı ekrana basmalıdır."

// =============================== //
// =============================== //
// =============================== //

#include <stdio.h>

// Struct yapımız
struct Zaman {
    int yil;
    int ay;
    int gun;
    int saat;
    int dakika;
    int saniye;
};

// YARDIMCI 1: Artık Yıl Kontrolü
// Bir yıl 4'e tam bölünüyorsa (ve 100'e bölünmüyorsa veya 400'e bölünüyorsa) artık yıldır.
// Sınavda basitçe "y % 4 == 0" yazsan da çoğu hoca kabul eder ama doğrusu budur.
int artik_yil_mi(int yil) {
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0))
        return 1; // Evet, artık yıl (366 gün)
    else
        return 0; // Hayır (365 gün)
}

// ANA HESAPLAMA: 1970'ten itibaren geçen toplam saniyeyi bulur
long long saniyeye_cevir(struct Zaman *z) {
    long long toplam_gun = 0;
    int i;

    // 1. ADIM: 1970'ten önceki tam yılları topla
    for (i = 1970; i < z->yil; i++) {
        if (artik_yil_mi(i)) {
            toplam_gun += 366;
        } else {
            toplam_gun += 365;
        }
    }

    // 2. ADIM: İçinde bulunduğumuz yılın aylarını topla
    // Ayların gün sayıları (0. indeks boş, 1=Ocak, 2=Şubat...)
    int aylar[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Eğer bu yıl artık yılsa Şubat 29 çeker
    if (artik_yil_mi(z->yil)) {
        aylar[2] = 29;
    }

    // Hedef aya kadar olan günleri ekle
    for (i = 1; i < z->ay; i++) {
        toplam_gun += aylar[i];
    }

    // 3. ADIM: Ayın gününü ekle (Bugünü tam bitirmedik, o yüzden -1)
    toplam_gun += (z->gun - 1);

    // 4. ADIM: Hepsini saniyeye çevir
    // 1 Gün = 86400 saniye (24 * 60 * 60)
    long long toplam_saniye = toplam_gun * 86400;

    toplam_saniye += z->saat * 3600;
    toplam_saniye += z->dakika * 60;
    toplam_saniye += z->saniye;

    return toplam_saniye;
}

int main() {
    struct Zaman t1, t2;
    long long sn1, sn2, fark;

    // Tarih 1: 1 Ocak 1971 (Tam 1 yıl sonrası)
    t1.yil = 1971; t1.ay = 1; t1.gun = 1;
    t1.saat = 0; t1.dakika = 0; t1.saniye = 0;

    // Tarih 2: 1 Ocak 1972 (Tam 2 yıl sonrası)
    t2.yil = 1972; t2.ay = 1; t2.gun = 1;
    t2.saat = 0; t2.dakika = 0; t2.saniye = 0;

    // Adreslerini gönderiyoruz
    sn1 = saniyeye_cevir(&t1);
    sn2 = saniyeye_cevir(&t2);

    fark = sn2 - sn1;

    printf("Tarih 1 (1970'ten beri): %lld saniye\n", sn1);
    printf("Tarih 2 (1970'ten beri): %lld saniye\n", sn2);
    printf("Aradaki Fark: %lld saniye\n", fark);

    return 0;
}
