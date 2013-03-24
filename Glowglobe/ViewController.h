//
//  ViewController.h
//  Glowglobe
//
//  Created by Matt Shapiro on 3/14/13.
//  Copyright (c) 2013 Matt Shapiro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RobotUIKit/RobotUIKit.h>

@interface ViewController : UIViewController {
    BOOL ledON;
    BOOL robotOnline;
    RUICalibrateGestureHandler *calibrateHandler;
}

-(void)setupRobotConnection;
-(void)handleRobotOnline;
-(void)toggleLED;

@end

