#ifndef HAYDUT_H
#define HAYDUT_H

extern int HAYDUT_CAN;
extern int HAYDUT_GUC;
extern int HAYDUT_CEVIKLIK;
extern int HAYDUT_DAYANIKLILIK;

extern char haydut_bilgi_yazi[9][200];
extern char haydut_tehdit_yazi[8][200];

void initialize_easy_haydut_features();
void initialize_medium_haydut_features();
void initialize_hard_haydut_features();

void showEasyHaydutFeature();
void showMediumHaydutFeature();
void showHardHaydutFeature();

#endif
