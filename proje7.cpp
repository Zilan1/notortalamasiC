#include <iostream>
	
using namespace std;
int main()
{
	float notlar [5][3];
	
	for(int ogrenciNo = 0; ogrenciNo<1; ogrenciNo++)
	{
	    cout <<"Ogrenci no: " << ogrenciNo << endl;
	    cout << "Vize 1 notunuzu giriniz: ";
		cin >> notlar[ogrenciNo] [0];
		
		cout << "Vize 2 notunuzu giriniz: ";
		cin >> notlar[ogrenciNo] [1];
		
	    cout << "Final notunuzu giriniz: ";
		cin >> notlar[ogrenciNo] [2];
	    
		cout <<	endl;
	}	
}
