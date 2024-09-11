#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, char **argv)
{
    cv::Mat image;
    image = cv::imread("/home/sage/Downloads/parasyte.jpg");

    cv::Mat bilateralImg;

    cv::bilateralFilter(image, bilateralImg, 15, 95, 45);

    cv::imshow("Bilateral", bilateralImg);
    cv::imshow("Input", image);
    cv::waitKey(0);

    return 0;
}