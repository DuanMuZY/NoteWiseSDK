//
//  DMQViewController.m
//  NoteWiseSDK
//
//  Created by Lcccocoa on 06/25/2019.
//  Copyright (c) 2019 Lcccocoa. All rights reserved.
//

#import "DMQViewController.h"
#import <NoteWiseSDK/NoteWiseSDK.h>

@interface DMQViewController ()

@end

@implementation DMQViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tap:(id)sender {
    HYJLNoteViewController *controller = [HYJLNoteViewController new];
    controller.userId = @"78029003";
    controller.nickName = @"李玲熹";
    [self.navigationController pushViewController:controller animated:YES];
}

@end
