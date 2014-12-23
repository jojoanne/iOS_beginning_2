//
//  ViewController.h
//  temperatureconverter
//
//  Created by Joanne Koong on 12/22/14.
//  Copyright (c) 2014 jojoanne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *tempText;
@property (strong, nonatomic) IBOutlet UILabel *resultLabel;
- (IBAction)convertTemp:(id)sender; 

@end

