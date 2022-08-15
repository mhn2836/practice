#pragma once

#include<iostream>
#include<string>
#include<iomanip>

const int TOTAL=5000;
const int MAXLEN=10;
const int HASHLEN=41;

int count=0;

void interface();
void Show(int key);
void Select(int choice);
int Read(char *filename);
int Input();  
int isLetter(char ch);
int isKeyWords(char *word);
int FindHX(char *keyword);
int CreatHX(char *keyword);
int GetFreePos(int key);
void ResetHX();
int GetKey(char *keyword);

//char KeyWords[TOTAL][MAXLEN]; 

