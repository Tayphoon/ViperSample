//
//  TCConversationController.m
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import "TCConversationController.h"
#import "TCConversationViewOutput.h"

@implementation TCConversationController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self.output setupView];
}

- (void)updateTitle:(NSString*)title {
    self.title = title;
}

@end
