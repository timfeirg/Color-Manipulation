#ifndef CLRMAN_H
#define CLRMAN_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <math.h>
#include <iostream>

#define CLRMAN_BLUE 0
#define CLRMAN_GREEN 1
#define CLRMAN_RED 2

// all color manipulation function goes here
// when subfunctions are getting large in number, pack them in namespace to avoid name pollution
namespace clrman {

void cvt2websafe(cv::Mat& src, cv::Mat& dst);

template<typename GRAY_TYPE, typename RGB_TYPE>
void pseudoColor(cv::Mat &src, cv::Mat &dst, double upperBound, double lowerBound, int channel );

void pseudoColor(cv::Mat &gray_src, cv::Mat &rgb_dst);

void histoEqualSep(cv::Mat &src, cv::Mat &dst);
void histoEqual(cv::Mat &src, cv::Mat &dst);
}
#endif // CLRMAN_H
