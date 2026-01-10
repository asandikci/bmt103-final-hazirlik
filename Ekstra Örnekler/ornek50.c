// EKSTRA ORNEK 50
// Kullanıcıdan bir metin ve bir tam sayı (anahtar) alan,
// bu metni Sezar Şifreleme (Caesar Cipher) yöntemiyle yerinde (in-place) şifreleyen bir C programı yazınız.

// =============================== //
// =============================== //
// =============================== //


#include <stdio.h>
#include <ctype.h> // isupper, islower, isalpha fonksiyonları için

// Fonksiyon: Metni alır ve yerinde şifreler
void sezar_sifrele(char *ptr, int anahtar) {

    // String bitene kadar pointer'ı yürütüyoruz ('\0' görene kadar)
    while (*ptr != '\0') {

        char karakter = *ptr; // Şu anki karakteri al

        // Sadece harfleri şifrele, noktalama işaretlerine dokunma
        if (isalpha(karakter)) {

            // BÜYÜK HARF KONTROLÜ
            if (isupper(karakter)) {
                // Formül: (Karakter - 'A' + anahtar) % 26 + 'A'
                *ptr = ((karakter - 'A' + anahtar) % 26) + 'A';
            }
            // KÜÇÜK HARF KONTROLÜ
            else if (islower(karakter)) {
                // Formül: (Karakter - 'a' + anahtar) % 26 + 'a'
                *ptr = ((karakter - 'a' + anahtar) % 26) + 'a';
            }
        }

        // Pointer'ı bir sonraki karaktere kaydır
        ptr++;
    }
}

int main() {
    // Değiştirilebilir string (Pointer veya Dizi olarak tanımlanmalı)
    char metin[100];
    int kaydirma;

    printf("Metni girin: ");
    // scanf boşluktan sonrasını almaz, o yüzden fgets daha güvenli
    fgets(metin, 100, stdin);

    printf("Kaydirma miktari (Anahtar): ");
    scanf("%d", &kaydirma);

    printf("Orijinal: %s", metin);

    // Adresi gönderiyoruz (Dizi ismi zaten adrestir)
    sezar_sifrele(metin, kaydirma);

    printf("Sifreli : %s", metin);

    return 0;
}
