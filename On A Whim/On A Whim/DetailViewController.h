//
//  DetailViewController.h
//  On A Whim
//
//  Created by Corey on 12/7/14.
//  Copyright (c) 2014 SoLR. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

