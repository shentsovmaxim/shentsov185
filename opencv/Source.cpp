#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
#include <iostream> 
#include <stdio.h>  
#include <stdlib.h> 

using namespace cv;
using namespace std;
int main()
{
	int height = 520; //высота
	int width = 840; // ширина
	Mat img(height, width, CV_8UC3); //mat-создает матрицу, cv 8 разр€дна€ матрица с 3 каналами
	Point textOrg(300, img.rows / 2); // point координаты x,y , где 300 расположение
	int fontFace = FONT_HERSHEY_SIMPLEX; // настройка шрифта
	double fontScale = 1; // double переменна€ целого числа, fontscale коэффициент масштабирование текста
	Scalar color(0, 0, 20); // скал€рный тип данных используетс€ дл€ передачи значени€ пиксилей, color цвет 
	putText(img, "Step By Step", textOrg, fontFace, fontScale, color); // используетс€ дл€ рисовани€ текстовой строки на любом изображении
	namedWindow("Hello World", 0); // название окна
	imshow("Hello World", img); // отображает изображение в градаци€х серого на рисунке
	waitKey(0); //  возвращает int
	return (0); // возвращение функции

}