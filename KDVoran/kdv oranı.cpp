#include <iostream>
using namespace std;

main () {
	float fiyat, kdv_orani, toplam_fiyat, kdv;
	cout << " fiyatini giriniz";
	cin >> fiyat;
	cout << " kdv oranýný giriniz";
	cin >> kdv_orani;
	
	toplam_fiyat = fiyat + (fiyat * kdv_orani / 100);
	kdv= fiyat * kdv_orani / 100;
	
	cout << "toplam fiyat :" << toplam_fiyat << " kdv :" << kdv_orani ;
	
}
