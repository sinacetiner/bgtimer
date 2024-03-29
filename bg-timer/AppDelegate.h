//
//  AppDelegate.h
//  bg-timer
//
//  Created by Mahmood1 on 12/16/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (readwrite, nonatomic) UIBackgroundTaskIdentifier bgTask;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
- (void) schedulePeriodicJob:(UIApplication *)application;

@end
