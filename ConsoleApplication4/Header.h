#pragma once
#include <iostream> ///����� ������
#include <string>
using namespace std;

extern "C" __declspec(dllexport) int Group();

extern "C" __declspec(dllexport) char Name(char* str);