//
//  TCConversationInteractor.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCConversationInteractorInput.h"

@protocol TCConversationInteractorOutput;

@interface TCConversationInteractor : NSObject<TCConversationInteractorInput>

@property (nonatomic, weak) id<TCConversationInteractorOutput> output;

@end
