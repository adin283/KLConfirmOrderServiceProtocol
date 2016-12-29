//
//  KLConfirmOrderServiceProtocol.h
//  KLConfirmOrderServiceProtocol
//
//  Created by Kevin on 2016/12/29.
//  Copyright © 2016年 KevinLab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol KLConfirmOrderServiceProtocol <NSObject>

- (UIViewController *)confirmOrderViewControllerWithGoodsId:(NSString *)goodsId sureComplete:(dispatch_block_t)sureComplete;

@end
