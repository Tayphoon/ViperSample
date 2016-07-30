//
//  TCConversationsPresenter.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCConversationsPresenterInput.h"
#import "TCConversationsViewOutput.h"
#import "TCConversationsInteractorOutput.h"

@protocol TCConversationsViewInput;
@protocol TCConversationsInteractorInput;
@protocol TCConversationsRouterInput;

@interface TCConversationsPresenter : NSObject<TCConversationsPresenterInput, TCConversationsViewOutput, TCConversationsInteractorOutput>

@property (nonatomic, weak) id<TCConversationsViewInput> view;
@property (nonatomic, strong) id<TCConversationsInteractorInput> interactor;
@property (nonatomic, strong) id<TCConversationsRouterInput> router;

@end
