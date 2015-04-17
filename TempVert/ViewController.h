//
//  ViewController.h
//  TempVert
//
//  Created by Hemant V. Torsekar on 2015-04-17.
//  Copyright (c) 2015 Hemant V. Torsekar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)temperatureSegmentedControl:(id)sender;

@property (strong, nonatomic) IBOutlet UIView *temperatureTextField;
@property (strong, nonatomic) IBOutlet UIView *temperatureResultLabel;

@end

