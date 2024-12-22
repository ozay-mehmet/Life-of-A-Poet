#ifndef _FEATURES_H
#define _FEATURES_H

    extern int MAX_FEATURE_VALUE_QUALITY;
    extern int MIN_FEATURE_VALUE_QUALITY;
    extern int MAX_FEATURE_VALUE_SKILLS;
    extern int MIN_FEATURE_VALUE_SKILLS;

    extern int SEVIYE;

    extern int UYKU;
    extern int PUAN;
    extern int CAN;
    extern int TOK;
    extern int HIJYEN;
    extern int MUTLULUK;
    extern int SAGLIK;
    extern int ALTIN;

    extern float SANS;
    extern int GUC;
    extern int KARIZMA;
    extern int CEVIKLIK;
    extern int DAYANIKLILIK;
    extern int AVCILIK;
    extern int BINICILIK;
    extern int TOPLAYICILIK;

    void setFeatureValueQuality(int *feature, int value);
    void setFeatureValueSkills(int *feature, int value);
    void showQualification();
    void showSkills();

#endif // _FEATURES_H

