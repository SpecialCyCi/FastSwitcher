//
//  AZHotKeyManager.h
//  AppShortCut
//
//  Created by Alvin on 13-10-19.
//  Copyright (c) 2013年 Alvin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AZHotKeyManager : NSObject

+ (id)sharedInstance;

- (void)registerHotKey;
- (void)registerHotKey:(NSArray *)apps;
- (void)unregisterHotKey;

@end
