//
//  Clap.h
//  clap
//
//  Created by 山口 智生 on 2015/02/28.
//  Copyright (c) 2015年 Tomoki Yamaguchi. All rights reserved.
//

#import <AudioToolbox/AudioToolbox.h>

#ifndef clap_Clap_h
#define clap_Clap_h

@interface Clap :NSObject

+(id)initClap;
-(id)init;
-(void)setSound;
-(void)play;
-(void)repeatClap:(int)count;
    





@end

CFURLRef soundURL;
SystemSoundID soundID;







#endif
