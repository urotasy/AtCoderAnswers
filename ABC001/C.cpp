#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int deg, dis;
    cin >> deg >> dis;

    if      ( round((double)dis / 6) <= 2 ) cout << "C";
    else if ( 3488 <= deg || deg < 113 )    cout << "N";
    else if ( deg <  338 )                  cout << "NNE";
    else if ( deg <  563 )                  cout << "NE";
    else if ( deg <  788 )                  cout << "ENE";
    else if ( deg < 1013 )                  cout << "E";
    else if ( deg < 1238 )                  cout << "ESE";
    else if ( deg < 1463 )                  cout << "SE";
    else if ( deg < 1688 )                  cout << "SSE";
    else if ( deg < 1913 )                  cout << "S";
    else if ( deg < 2138 )                  cout << "SSW";
    else if ( deg < 2363 )                  cout << "SW";
    else if ( deg < 2588 )                  cout << "WSW";
    else if ( deg < 2813 )                  cout << "W";
    else if ( deg < 3038 )                  cout << "WNW";
    else if ( deg < 3263 )                  cout << "NW";
    else if ( deg < 3488 )                  cout << "NNW";

    cout << " ";

    if      ( round((double)dis / 6) <=   2 ) cout << "0";
    else if ( round((double)dis / 6) <=  15 ) cout << "1";
    else if ( round((double)dis / 6) <=  33 ) cout << "2";
    else if ( round((double)dis / 6) <=  54 ) cout << "3";
    else if ( round((double)dis / 6) <=  79 ) cout << "4";
    else if ( round((double)dis / 6) <= 107 ) cout << "5";
    else if ( round((double)dis / 6) <= 138 ) cout << "6";
    else if ( round((double)dis / 6) <= 171 ) cout << "7";
    else if ( round((double)dis / 6) <= 207 ) cout << "8";
    else if ( round((double)dis / 6) <= 244 ) cout << "9";
    else if ( round((double)dis / 6) <= 284 ) cout << "10";
    else if ( round((double)dis / 6) <= 326 ) cout << "11";
    else                                      cout << "12";

    cout << endl;

    return 0;
}

