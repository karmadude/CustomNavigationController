//
//  MasterViewController.h
//  CustomNavigationController
//
//  Created by Liji Jinaraj on 11/27/11.
//  Copyright (c) 2011 VUnite Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
