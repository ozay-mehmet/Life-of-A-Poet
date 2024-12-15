#ifndef FEATURES_H
#define FEATURES_H

#define MAX_FEATURE_VALUE 100

extern int CAN;       
extern int TOK;
extern int HIJYEN;
extern int MUTLULUK;
extern int SAGLIK;
extern int ASK;
extern int PARA;
extern int GUC;       
extern int KARIZMA;
extern int CEVIKLIK;
extern int HANIMCILIK;
extern int DAYANIKLILIK;
extern int BINICILIK;
extern int AVCILIK;
extern int TOPLAYICILIK;

void setFeatureValue(int *feature, int value);
void showQualification();

void showSkills();

#endif
