#include <QCoreApplication>

#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/core.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cv::Mat image = cv::imread("/dev/shm/test.png", 1);
    // create image window named "My Image"
    cv::namedWindow("My Image");
    // show the image on window
    cv::imshow("My Image", image);

    return a.exec();
}
