#include <iostream>
using namespace std;


float rechnen(float aNetto, float aBrutto, float grundpreisNetto , float grundpreisBrutto,float jvs ){

    float  gesamtpreisNetto= jvs * aNetto + grundpreisNetto ;
    float  gesamtpreisBrutto= jvs * aBrutto + grundpreisBrutto;

    // Tarif Daten ******************************************************
    cout<< "" << endl;
    cout<< "***************************" << endl;
    cout<< "Tarif Daten" << endl;
    cout<< "***************************" << endl;
    cout<< "" << endl;
    cout<< "Grundpreis/ Jahr in netto  : " << grundpreisNetto <<" Euro"<< endl;
    cout<< "Grundpreis/ Jahr in Brutto  : " <<grundpreisBrutto<<" Euro" <<endl;
    cout<< "Arbeitspreis/kwh in Netto  : " <<aNetto*100<<" Cent"<< endl;
    cout<< "Arbeitspreis/kwh in Brutto  : " <<aBrutto*100<<" Cent"<< endl;
    // Jährlichen kosten ******************************************************
    cout<< "" << endl;
    cout<< "***************************" << endl;
    cout<< "Ihre jährlichen kosten " << endl;
    cout<< "*************************** " << endl;
    cout<< "" << endl;
    cout<< "Ihr Jahresverbrauch : " <<jvs<<" kwh"<< endl;
    cout<< "Gesamtpreis (Netto): "<< gesamtpreisNetto<< " Euro"<<endl;
    cout<< "Gesamtpreis (zzgl. 19% MwSt.) : " <<gesamtpreisBrutto<< " Euro"<<endl;
    return gesamtpreisNetto, gesamtpreisBrutto;

}

int main() {

    float aNetto;
    float aBrutto;
    float  gesamtpreisNetto;
    float  gesamtpreisBrutto;
    float grundpreisNetto;
    float grundpreisBrutto;
    float jvs;
    cout<< "" << endl;
    cout<< "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout<< "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout<< "" << endl;
    cout << "Stormtarifrechner" << endl;
    cout<< "" << endl;
    cout << "Dein Jagessstormverbrauch (in kWh): " << endl;
    cout<< "" << endl;
    cin>> jvs;
    cout<< "" << endl;
// Storm Tarif ++++++++++++++++++++++
    cout<< "Ihr passender Stormtarif lauter:" << endl;
    cout<< "" << endl;
    //Radio-lightning******************************
    if (jvs < 1500 ){

        cout<< "----------------------------------" << endl;
        cout<< "Radio-lightning" << endl;
        cout<< "----------------------------------" << endl;

        rechnen( 0.2412 , 0.2870 , 142.68 , 169.79 , jvs);

    }
// Easy-green ********************************
    else if( 1500<= jvs && jvs <= 3500 )
    {
        cout<< "----------------------------------" << endl;


        cout<< "easy-green" << endl;
        cout<< "----------------------------------" << endl;
        rechnen(0.2292 , 0.272748 ,69.48 , 82.6812 , jvs);

    }

        // electrical-short ***************************
    else if( 3501 <= jvs )
    {

        cout<< "----------------------------------" << endl;
        cout<< "electrical-short" << endl;
        cout<< "----------------------------------" << endl;
        rechnen( 0.2235 , 0.2660 , 80.40 , 95.68 , jvs);



    }

    main();
}
