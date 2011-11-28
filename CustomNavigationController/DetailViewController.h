//
//  DetailViewController.h
//  CustomNavigationController
//
//  Created by Liji Jinaraj on 11/27/11.
//  Copyright (c) 2011 VUnite Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
