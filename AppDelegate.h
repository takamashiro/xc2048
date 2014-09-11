//
//  AppDelegate.h
//  xc2048
//
//  Created by 肖驰 on 14-9-11.
//  Copyright (c) 2014年 taka. All rights reserved.
//
#import "WeiboSDK.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,WeiboSDKDelegate>
{
    NSString* _wbtoken;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) NSString *wbtoken;
@end

