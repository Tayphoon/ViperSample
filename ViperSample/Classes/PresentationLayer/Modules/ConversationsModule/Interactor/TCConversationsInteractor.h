//
//  TCConversationsInteractor.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCConversationsInteractorInput.h"

@protocol TCConversationsInteractorOutput;
@protocol TCMessagesService;

@interface TCConversationsInteractor : NSObject<TCConversationsInteractorInput>

@property (nonatomic, weak) id<TCConversationsInteractorOutput> output;
@property (strong, nonatomic) id <TCMessagesService> messagesService;

@end
