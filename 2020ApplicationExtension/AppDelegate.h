//
//  AppDelegate.h
//  2020ApplicationExtension
//
//  Created by ASSASSIN on 2021/1/25.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

