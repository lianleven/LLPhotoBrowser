//
//  LYZoomingImageView.h
//  LYPhotoBrowser
//
//  Created by LianLeven on 15/10/13.
//  Copyright © 2015年 lichangwen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LYPhoto.h"

@interface LYZoomingImageView : UIScrollView

@property (nonatomic) BOOL isScroll;/**< 是否滑动显示 */
@property (nonatomic, strong) LYPhoto *photo;

@end
