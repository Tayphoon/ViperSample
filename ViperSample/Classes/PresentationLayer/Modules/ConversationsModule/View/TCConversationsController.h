//
//  TCConversationsController.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <TCCollections/TCTableViewController.h>
#import <UIKit/UIKit.h>
#import "TCConversationsViewInput.h"

@protocol TCConversationsViewOutput;

@interface TCConversationsController : TCTableViewController<TCConversationsViewInput>

@property (nonatomic, strong) id<TCConversationsViewOutput> output;

@end
