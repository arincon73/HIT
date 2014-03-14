//
//  HITAppDelegate.h
//  HomeImprovementTracker
//
//  Created by Adriana Rincon on 3/14/14.
//  Copyright (c) 2014 Actions and Results consultinb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HITAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
