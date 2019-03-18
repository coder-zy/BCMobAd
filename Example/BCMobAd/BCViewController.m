//
//  BCViewController.m
//  BCMobAd
//
//  Created by coder-zy on 02/01/2019.
//  Copyright (c) 2019 coder-zy. All rights reserved.
//

#import "BCViewController.h"

@interface BCViewController ()

@end

@implementation BCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSURL *bundleURL = [[NSBundle mainBundle] URLForResource:@"BCResources" withExtension:@"bundle"];
    NSBundle *bundle = [NSBundle bundleWithURL:bundleURL];
    UIImage *leftImage = [UIImage imageNamed:@"bcad_back" inBundle:bundle compatibleWithTraitCollection:nil];
    
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
