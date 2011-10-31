//
//  WebAppDelegate.h
//  Web
//
//  Created by App on 2011/10/5.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WebViewController;

@interface WebAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet WebViewController *viewController;

@end
