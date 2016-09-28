//
//  AppDelegate.h
//  EveryDoItAgain2
//
//  Created by Philip Ha on 2016-09-28.
//  Copyright © 2016 Philip Ha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

