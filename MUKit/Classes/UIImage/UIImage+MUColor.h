//
//  UIImage+MUColor.h
//  Pods
//
//  Created by Jekity on 2017/9/15.
//
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MUGradientType) {
    MUGradientTypeTopToBottom      = 0,//从上到小
    MUGradientTypeLeftToRight      = 1,//从左到右
    MUGradientTypeUpleftToLowright = 2,//左上到右下
    MUGradientTypeUprightToLowleft = 3,//右上到左下
};
@interface UIImage (MUColor)

/**
通过渐变色生成图片
 
 @param colors 渐变颜色数组
 @param gradientType 渐变类型
 @param imageSize 需要的图片尺寸
 
 */
+ (UIImage *)imageFromGradientColorMu:(NSArray*)colors gradientType:(MUGradientType)gradientType imageSize:(CGSize)imageSize;

/**
 通过单一颜色生成图片
 
 @param color 颜色
 
 */
+ (UIImage *)imageFromColorMu:(UIColor*)color;


/**
对比两张图片是否相同
 
 @param image 原图
 @param anotherImage 需要比较的图片
 
 */
+ (BOOL)imageEqualToImageMu:(UIImage*)image anotherImage:(UIImage *)anotherImage;


/**
根据字符串生成二维码
 
 @param string 需要生成二维码图片的字符串
 @param imageSize 图片尺寸
 
 */
+ (UIImage *)QRImageForStringMu:(NSString *)string imageSize:(CGSize)imageSize;


/**
 根据字符串生成二维码
 
 @param string 需要生成二维码图片的字符串
 @param logoImage 二维码图片中的logo
 @param imageSize 图片尺寸
 
 */
+ (UIImage *)QRImageForStringMu:(NSString *)string logoImage:(UIImage *)logoImage imageSize:(CGSize)imageSize;


/**
 根据字符串生成二维码
 
 @param string 需要生成二维码图片的字符串
 @param logoImage 二维码图片中的logo
 @param imageSize 图片尺寸
 @param color 二维码图片的颜色，默认为黑色
 
 */
+ (UIImage *)QRImageForStringMu:(NSString *)string imageSize:(CGSize)imageSize logoImage:(UIImage *)logoImage color:(UIColor *)color;

/**
 Compress a UIImage to the specified ratio
 
 @param image The image to compress
 @param ratio The compress ratio to compress to
 
 */
+ (UIImage *)compressImage:(UIImage *)image
             compressRatio:(CGFloat)ratio;
/**
 Compress a UIImage to the specified ratio with a max ratio compression
 
 @param image The image to compress
 @param ratio The compress ratio to compress to
 @param maxRatio The maximum compression ratio for the image
 
 */
+ (UIImage *)compressImage:(UIImage *)image
             compressRatio:(CGFloat)ratio
          maxCompressRatio:(CGFloat)maxRatio;

/**
 Compress a remote UIImage to the specified ratio with a max ratio compression
 
 @param url The remote image URL to compress
 @param ratio The compress ratio to compress to
 
 */
+ (UIImage *)compressRemoteImage:(NSString *)url
                   compressRatio:(CGFloat)ratio;

/**
 Compress a remote UIImage to the specified ratio with a max ratio compression
 
 @param url The remote image URL to compress
 @param ratio The compress ratio to compress to
 @param maxRatio The maximum compression ratio for the image
 
 */
+ (UIImage *)compressRemoteImage:(NSString *)url
                   compressRatio:(CGFloat)ratio
                maxCompressRatio:(CGFloat)maxRatio;

//图片透明度
+ (UIImage *)imageByApplyingAlpha:(CGFloat)alpha  image:(UIImage*)image;
@end
