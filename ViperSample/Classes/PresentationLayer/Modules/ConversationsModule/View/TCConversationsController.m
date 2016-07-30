//
//  TCConversationsController.m
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import "TCConversationsController.h"
#import "TCConversationsViewOutput.h"

@implementation TCConversationsController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self.output setupView];
}

- (void)updateTitle:(NSString*)title {
    self.title = title;
}

@end
