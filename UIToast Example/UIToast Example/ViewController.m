//
//  ViewController.m
//  UIToast Example
//
//  Created by Francesco Perrotti-Garcia on 2/3/15.
//  Copyright (c) 2015 Francesco Perrotti-Garcia. All rights reserved.
//

#import "ViewController.h"
#import "UIToast.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showToast:(UIButton *)sender {
    [[UIToast makeText:@"I'm a toast xD"] show];
}
@end
