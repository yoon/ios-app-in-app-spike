//
//  RootViewController.h
//  SpikeMaster
//
//  Created by Mark Yoon on 9/16/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface RootViewController : UITableViewController {

}

		
@property (nonatomic, retain) IBOutlet UIViewController *detailViewController;

- (void) loadSpikeIntoRoot;
@end
