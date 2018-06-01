//
//  ConfirmOrderServiceProtocol.h
//  ConfirmOrderServiceProtocol
//
//  Created by zsf on 2018/6/1.
//  Copyright © 2018年 zsf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol ConfirmOrderServiceProtocol <NSObject>

- (UIViewController *)confirmOrderViewControllerWithGoodsId:(NSString *)goodsId sureComplete:(dispatch_block_t)sureComplete;
@end
