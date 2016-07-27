//
//  TCConversationController.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCConversationViewInput.h"

@protocol TCConversationViewOutput;

@interface TCConversationController : UIViewController<TCConversationViewInput>

@property (nonatomic, strong) id<TCConversationViewOutput> output;

@end
