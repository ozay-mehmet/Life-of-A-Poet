#ifndef FEATURES_H
#define FEATURES_H

extern int MAX_FEATURE_VALUE_QUALITY;
extern int MAX_FEATURE_VALUE_SKILLS;

extern int UYKU;
extern float SANS;
extern int PUAN;
extern int CAN;
extern int TOK;
extern int HIJYEN;
extern int MUTLULUK;
extern int SAGLIK;
extern int ALTIN;
extern int GUC;
extern int KARIZMA;
extern int CEVIKLIK;
extern int DAYANIKLILIK;
extern int BINICILIK;
extern int AVCILIK;
extern int TOPLAYICILIK;

void setFeatureValueQuality(int *feature, int value);
void setFeatureValueSkills(int *feature, int value);
void showQualification();
void showSkills();

#endif
