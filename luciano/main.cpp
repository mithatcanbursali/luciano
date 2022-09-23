//
//  main.cpp
//  sorucevap
//
//  Created by Mithatcan Bursalı on 24.01.2022.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;


int sorugenerator(){
    int cevap = rand() % 20 + 1;
    return cevap;
}




int main(){
    srand(time(0));
    string isim;
    string soru;
    
    cout << "Merhaba, ben Luciano!\n";
    cout << "Sorularına elinden geldiğim kadar yanıt bulmaya çalışacağım!\n";
    cout << "Öncelikle ismini öğrenebilir miyim?\n";
    cin >> isim;
    cout << "Memnun oldum " << isim << "!\n";
    cout << "O zaman başlayalım, bana ne sormak istiyorsun?\n\n";
    transform(isim.begin(), isim.end(),isim.begin(), ::toupper);
    
    
    do{
    int chosen = sorugenerator();
    cout << isim << ":";
    
    getline(cin, soru);
    cin.clear();
    cin.ignore();

    switch (chosen){
        case 1:
            cout << "LUCIANO: Kesinlikle!\n";
            break;
        case 2:
            cout << "LUCIANO: Kesinlikle öyle.\n";
            break;
        case 3:
            cout << "LUCIANO: Kuşkusuz!\n";
            break;
        case 4:
            cout << "LUCIANO: Evet, kesinlikle.\n";
            break;
        case 5:
            cout << "LUCIANO: Bana güvenebilirsin.\n";
            break;
        case 6:
            cout << "LUCIANO: Gördüğüm kadarıyla evet.\n";
            break;
        case 7:
            cout << "LUCIANO: Çoğunlukla.\n";
            break;
        case 8:
            cout << "LUCIANO: Olumlu yönde gözüküyor.\n";
            break;
        case 9:
            cout << "LUCIANO: Evet.\n";
            break;
        case 10:
            cout << "LUCIANO: Belirtiler olduğu yönünde.\n";
            break;
        case 11:
            cout << "LUCIANO: Biraz belirsiz, tekrar dene.\n";
            break;
        case 12:
            cout << "LUCIANO: Sonra tekrar dene.\n";
            break;
        case 13:
            cout << "LUCIANO: Şimdi söylemesem daha iyi olur.\n";
            break;
        case 14:
            cout << "LUCIANO: Şimdi kehanette bulunamam, tekrar sor.\n";
            break;
        case 15:
            cout << "LUCIANO: Konsantreni topla, tekrar sor.\n";
            break;
        case 16:
            cout << "LUCIANO: Çok agresifsin, bence hayır.\n";
            break;
        case 17:
            cout << "LUCIANO: Yanıtım hayır.\n";
            break;
        case 18:
            cout << "LUCIANO: Kaynaklarım hayır diyor.\n";
            break;
        case 19:
            cout << "LUCIANO: Gidişat pek iyi değil.\n";
            break;
        case 20:
            cout << "LUCIANO: Çok şüpheli.\n";
            break;
        default:
            break;
    }



    }while (true);
}
