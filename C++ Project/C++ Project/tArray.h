#pragma once

typedef struct tArr {
    int* pint;
    int iCount;
    int iMaxCount;
}MyArr;

void InitArr(tArr* pArr);

void PushBack(tArr* pArr, int iData);

void ReleaseArr(tArr* pArr);

void SortArr(tArr* pArr);