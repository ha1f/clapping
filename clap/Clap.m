//
//  Clap.m
//  clap
//
//  Created by 山口 智生 on 2015/02/28.
//  Copyright (c) 2015年 Tomoki Yamaguchi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "Clap.h"

@interface Clap ()

@end

@implementation Clap


-(void)setSound {
    CFBundleRef mainBundle = CFBundleGetMainBundle();
    soundURL = CFBundleCopyResourceURL(mainBundle, CFSTR("clap"), CFSTR("wav"), nil);
    AudioServicesCreateSystemSoundID(soundURL, &soundID);
}

-(void) play{
    AudioServicesPlaySystemSound(soundID);
}

-(void) repeatClap :(int)count{
    int i=0;
    while(i < count){
        [self play];
        i++;
        usleep(500000);
    }
}

+(id) initClap{
    return [[self alloc] init];
}

-(id)init{
    self = [super init];
    [self setSound];
    return self;
}

@end


