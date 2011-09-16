//
//  SpikeSplitAppDelegate.h
//  SpikeSplit
//
//  Created by Mark Yoon on 9/16/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SurveyViewController;

@class SectionViewController;

@interface SpikeSplitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UISplitViewController *splitViewController;

@property (nonatomic, retain) IBOutlet SurveyViewController *surveyViewController;

@property (nonatomic, retain) IBOutlet SectionViewController *sectionViewController;

@end
