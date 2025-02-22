

#include <gtest/gtest.h>

/*
동작순서
ImageProcessorTest* ts = new ImageProcessorTest;
ts->SetUp();
ts->ResizeImage();
ts->TearDown();
delete ts;

ImageProcessorTest* ts = new ImageProcessorTest;
ts->SetUp();
ts->BlurImage();
ts->TearDown();
delete ts;


신선한 픽스처 전략
: 각 테스트 케이스가 독립적으로 수행될 수 있도록 도움을 준다.
 - 대부분의 xUnit Test Framework이 사용하는 정책이다


*/



class ImageProcessorTest : public testing::Test {
    protected:
        ImageProcessorTest(){
            std::cout << "ImageProcessorTest()" << std::endl;
        }
        ~ImageProcessorTest(){
            std::cout << "~ImageProcessorTest()" << std::endl;
        }



        void SetUp() override{
            std::cout << "SetUp" << std::endl;
        }
        void TearDown() override{
            std::cout <<"tearDown" << std::endl;
        }


};

TEST_F(ImageProcessorTest, ResizeImage){
     std::cout <<"Resize Image" << std::endl;
}

TEST_F(ImageProcessorTest, BlurImage){
     std::cout <<"Blur Image" << std::endl;
}
