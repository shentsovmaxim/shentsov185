#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
#include <iostream> 
#include <stdio.h>  
#include <stdlib.h> 

using namespace cv;
using namespace std;
int main()
{
	int height = 520; //������
	int width = 840; // ������
	Mat img(height, width, CV_8UC3); //mat-������� �������, cv 8 ��������� ������� � 3 ��������
	Point textOrg(300, img.rows / 2); // point ���������� x,y , ��� 300 ������������
	int fontFace = FONT_HERSHEY_SIMPLEX; // ��������� ������
	double fontScale = 1; // double ���������� ������ �����, fontscale ����������� ��������������� ������
	Scalar color(0, 0, 20); // ��������� ��� ������ ������������ ��� �������� �������� ��������, color ���� 
	putText(img, "Step By Step", textOrg, fontFace, fontScale, color); // ������������ ��� ��������� ��������� ������ �� ����� �����������
	namedWindow("Hello World", 0); // �������� ����
	imshow("Hello World", img); // ���������� ����������� � ��������� ������ �� �������
	waitKey(0); //  ���������� int
	return (0); // ����������� �������

}