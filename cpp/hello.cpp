/*
 * hello.cpp
 
 */


#include <iostream>

using namespace std;

int parzyste(int n){
    for (i=0; <=n; i+=2)
        cout << i << " " << ;
    return i/2;
}      
      /*  cout << "Wpisz liczbę maksymalną " << endl;
        cin >> n ;
        if (n % 2 != 0)
            m= m + 1 ;
        }
    while ( n != 0);
    cout << "Z podanych liczb " << m << " jest parzystych" << endl;
	return 0; 
    */
int main(int argc, char **argv)
{   
    string a;
    const int wp = 1983;
    int b, n;
    /*int c = 2017;
	cout << "Podaj imię ";
    cin >> a ;
    cout << "Witaj " << a <<  "." <<endl;
    cout << "Ile masz lat ? ";
    cin >> b;
    cout << "Urodziłeś/aś się w " << c-b << " roku." << endl;
    if(wp > b){
        cout << "Jestem starszy od Ciebie";}
    if (wp == b){
        cout << "Jestem w tym samym wieku";}
    if(wp < b ){
        cout << "Jestem młodszy od Ciebie";}
    */
    
    cout << "podaj liczbę " << endl;
    cin >> n;
    cout << "parzystych " << parzyste(n);
    
    
    
    return 0;
}

