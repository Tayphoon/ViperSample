//
//  TCConversationViewOutput.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TCConversationViewOutput <NSObject>

/**
 
 Method is used to inform presenter that view needs to be configuered
 */
- (void)setupView;

@end
