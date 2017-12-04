//
//  MXViewController.m
//  SafeKeyPath
//
//  Created by iOSleep on 12/04/2017.
//  Copyright (c) 2017 iOSleep. All rights reserved.
//

#import "MXViewController.h"
#import <SafeKeyPath.h>

@interface MXViewController ()

@end

@implementation MXViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIButton *btn = [UIButton new];
    NSLog(@"simple obj  : %@", KeyPath(btn, state));
    NSLog(@"simple class: %@", ClassKeyPath(UIButton, state));
    
    NSLog(@"multi obj   : %@", KeyPath(btn, titleLabel, text));
    NSLog(@"multi class : %@", ClassKeyPath(UIButton, titleLabel, text));
    
    // to use in kvo
    //    [btn addObserver:self forKeyPath:KeyPath(btn, titleLabel, text) options:NSKeyValueObservingOptionNew context:NULL];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
