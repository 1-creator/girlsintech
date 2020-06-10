// measurement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<math.h>
//function to find distance bewteen 2 points
void two_dis(float x1, float y1, float x2, float y2) {
    float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    printf("Distance between 2 points are : %f", dis);
    return;
}
int main() {
    float x1 = 4;
    float y1 = 5;
    float x2 = 4;
    float y2 = 7;
    two_dis(x1, y1, x2, y2);
    return 0;
}
