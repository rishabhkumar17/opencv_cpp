#include <stdio.h>
#include <opencv2/opencv.hpp>
 
int main(int argc, char **argv)
{
    cv::Mat image;
    image = cv::imread("/home/sage/Downloads/parasyte.jpg", cv::IMREAD_GRAYSCALE);
    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", image);
    cv::waitKey(0);
    return 0;
}