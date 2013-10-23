//
//  AZAppsSwitchWindow.h
//  FastSwitcher
//
//  Created by Alvin on 13-10-22.
//  Copyright (c) 2013年 Alvin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AZAppsSwitchWindow : NSWindow {
    NSUInteger selectedAppsCount;
}

@property (nonatomic) BOOL isFadingOut;
@property (nonatomic, strong) NSArray *apps;

- (void)fadeIn;
- (void)fadeOut;

@end
