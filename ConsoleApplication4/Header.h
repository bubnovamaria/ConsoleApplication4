#pragma once
#include <iostream> ///Вывод данных
#include <string>
using namespace std;

extern "C" __declspec(dllexport) int Group();

extern "C" __declspec(dllexport) char Name(char* str);