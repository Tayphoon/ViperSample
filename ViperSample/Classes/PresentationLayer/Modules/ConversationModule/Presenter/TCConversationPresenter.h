//
//  TCConversationPresenter.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCConversationPresenterInput.h"
#import "TCConversationViewOutput.h"
#import "TCConversationInteractorOutput.h"

@protocol TCConversationViewInput;
@protocol TCConversationInteractorInput;
@protocol TCConversationRouterInput;

@interface TCConversationPresenter : NSObject<TCConversationPresenterInput, TCConversationViewOutput, TCConversationInteractorOutput>

@property (nonatomic, weak) id<TCConversationViewInput> view;
@property (nonatomic, strong) id<TCConversationInteractorInput> interactor;
@property (nonatomic, strong) id<TCConversationRouterInput> router;

@end
