#include <stdio.h>
#include <math.h>

// Aufg 5.2
void aufg2(){
    for(int i = 1; i < 20; i++){
        if(i % 2 == 0){
            printf("%d: gerade\n", i);
        }
        else{
            printf("%d: ungerade\n", i);
        }
    }
    printf("\n");
}

// Aufg 5.3 a
void aufg3a(){
    int maxPoints =3;

    for (int team1Points = 0; team1Points <= maxPoints; team1Points++) {
        for (int team2Points = 0; team2Points <= maxPoints; team2Points++) {
            for (int team1TwoPoint = 0; team1TwoPoint <= team1Points; team1TwoPoint++) {
                for (int team2TwoPoint = 0; team2TwoPoint <= team2Points; team2TwoPoint++) {
                    for (int team1ThreePoint = 0; team1ThreePoint <= team1Points; team1ThreePoint++) {
                        for (int team2ThreePoint = 0; team2ThreePoint <= team2Points; team2ThreePoint++) {
                            if ((team1TwoPoint * 2 + team1ThreePoint * 3 == team1Points) &&
                                (team2TwoPoint * 2 + team2ThreePoint * 3 == team2Points)) {
                                printf("Team 1: %d Punkte (%d x 2-Punkte, %d x 3-Punkte)\n", team1Points, team1TwoPoint, team1ThreePoint);
                                printf("Team 2: %d Punkte (%d x 2-Punkte, %d x 3-Punkte)\n", team2Points, team2TwoPoint, team2ThreePoint);
                                printf("------------------------------------------------\n");
                            }
                        }
                    }
                }
            }
        }
    }
}

// Aufg 5.3 b
void aufg3b(){
    char teams[] = {'A', 'B', 'C', 'D'};
    int anzahl_teams = sizeof teams - 1;
    for(int i = 0; i <= anzahl_teams; i++){
        for(int j = i + 1; j <= anzahl_teams; j++){
            printf("Team %c und Team %c\n", teams[i], teams[j]);
        }
    }
}

// Aufg 5.3 c
void aufg3c(int teams){
    for(int i = 0; i <= teams; i++){
        for(int j = i + 1; j <= teams; j++){
            printf("Team %d und Team %d\n", i, j);
        }
    }
}

// Aufg 5.3 d
void aufg3d(){
    for(int i = 9999; i >= 1111; i--){
        if(i % 10 == 0 || i / 10 % 10 == 0 || i / 100 % 10 == 0) {}
        else{
            printf("%d\n", i);
        }
    }
}

// Aufg 5.3 e
void aufg3e(){
    for(int i = 9999; i >= 1111; i--){
        if(i % 10 == 0 || i / 10 % 10 == 0 || i / 100 % 10 == 0){
            printf("%d\n", i);
        }
    }
}

// Aufg 5.4
void printQuadrat(int seitenlaenge){
    int s1 = seitenlaenge;
    int s2 = s1;
    int s3 = s1;
    if(seitenlaenge > 1){
        while(s1 != 0){
            printf("#");
            s1--;
        }
        printf("\n");
        while(s2 != 0) {
            if (seitenlaenge > 2) {
                printf("#");
                for(int n = seitenlaenge - 2; n > 0; n--) {
                    printf(" ");
                }
                printf("#\n");
            }
            s2--;
        }
        while(s3 != 0){
            printf("#");
            s3--;
        }
    }
    else{
        printf("Ungültig\n");
    }
    printf("\n");
}

// Aufg 5.5
double umfangRechteck(double a, double b){
    double u = 2 * a + 2 * b;
    printf("Umfang: %fcm\n", u);
    return(u);
}

double flaecheRechteck(double a, double b){
    double f = a * b;
    printf("Fläche: %fm²\n", f);
    return(f);
}

double umfangKreis(double radius){
    double u = 2 * radius * M_PI;
    printf("Umfang des Kreises: %.2f\n", u);
    return(u);
}

double flaecheKreis(double r){
    double f = M_PI * r*r;
    printf("Fläche des Kreises: %.2f\n", f);
    return(f);
}

// Aufg 5.6
void abstand(double x1, double y1, double x2, double y2) {
    double erg = sqrt(pow(x2 - x1 ,2) + pow(y2 - y1, 2));
    printf("%lf\n", erg);
}

// Aufg 5.Pro
long long pro(long long arr[], int size) {
    long long result = 0;

    for (int i = 0; i < size; i++) {
        result ^= arr[i];   // XOR-Operator, arbeitet auf Bit basis, schreibt eine 1, wenn es einen Unterschied zwischen Bits gibt
    }                       // int a = 5; Binary: 0101
    printf("%lld", result); // int b = 3; Binary: 0011
    return result;          // a ^= b;    Binary: 0110 -> a wird zu 6
}

int main() {

    long long input[] = { 8432789273489LL,
                          2138934798732LL,
                          8432789273489LL,
                          8432789273489LL,
                          2138934798732LL,
                          7832480324983LL,
                          8432789273489LL,
                          1243427807722LL,
                          3789024723489LL,
                          7832480324983LL,
                          3789024723489LL,
                          7432873047312LL,
                          7432873047312LL,
                          7832480324983LL,
                          7832480324983LL
    };

    //aufg2();
    //aufg3a();
    //aufg3b();
    //aufg3c(5);
    //aufg3d();
    //aufg3e();
    //printQuadrat(20); //mehr als 1, weniger als Konsole anzeigen kann, Höhe des Quadrats einschränken
    //umfangRechteck(2, 5);
    //flaecheRechteck(2, 5);
    //umfangKreis(5);
    //flaecheKreis(5);
    //abstand(-2, 3, -1, 1);
    //long long erg = pro(input, 15);
}