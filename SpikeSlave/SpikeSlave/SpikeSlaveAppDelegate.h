//
//  SpikeSlaveAppDelegate.h
//  SpikeSlave
//
//  Created by Mark Yoon on 9/16/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SpikeSlaveViewController;

@interface SpikeSlaveAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SpikeSlaveViewController *viewController;

@end
