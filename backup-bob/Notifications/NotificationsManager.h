//
// Created by Casper Storm Larsen on 09/05/14.
// SHAPE A/S
//


#import <Foundation/Foundation.h>


@interface NotificationsManager : NSObject
@property (nonatomic, assign) BOOL notificationsEnabled;
+ (NotificationsManager *)sharedInstance;
@end