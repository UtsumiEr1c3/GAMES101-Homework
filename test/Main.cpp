#include <iostream>  
#include <Eigen/Dense>  
#include <opencv2/opencv.hpp>  

int main()  
{  
	Eigen::Matrix<float, 3, 3> matrixA;  
	matrixA.setZero();  
	std::cout << matrixA << std::endl;  

	Eigen::Matrix<float, 3, 3> matrixB;  
	matrixB.setZero();  
	std::cout << '\n' << matrixB << std::endl;  

	// Corrected file path using double backslashes to escape the backslash character  
	cv::Mat imageA = cv::imread("C:/Users/12091/Pictures/Saved Pictures/ZeYinMelody.png");  
	cv::imshow("Main", imageA);  
	cv::waitKey(0);  

	return 0;  
}