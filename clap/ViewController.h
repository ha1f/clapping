//
//  ViewController.h
//  clap
//
//  Created by 山口 智生 on 2015/02/22.
//  Copyright (c) 2015年 Tomoki Yamaguchi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Clap.h"

@interface ViewController : UIViewController
<UIPickerViewDataSource, UIPickerViewDelegate>


{
    Clap *clapInstance;
    IBOutlet UIPickerView *clapPickerView;
    NSString *repeatNumbersForPicker[10];
    int repeatCount;
}
-(IBAction)play:(id)sender;



@end

