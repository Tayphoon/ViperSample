//
//  TCConversationModuleAssembly.m
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import "TCConversationModuleAssembly.h"
#import "TCConversationController.h"
#import "TCConversationRouter.h"
#import "TCConversationPresenter.h"
#import "TCConversationInteractor.h"
#import "TCLayerMessagesService.h"

@interface TCConversationModuleAssembly()

@property (nonatomic, strong) TCConversationPresenter * presenter;
@property (nonatomic, strong) TCConversationController * controller;

@end

@implementation TCConversationModuleAssembly

- (instancetype)init {
    self = [super init];
    if (self) {
        [self configureDependencies];
    }
    
    return self;
}

- (void)installRootViewControllerIntoWindow:(UIWindow *)window {
    UINavigationController * navigationController = [[UINavigationController alloc] initWithRootViewController:self.controller];
    window.rootViewController = navigationController;
}


- (void)configureDependencies {
    TCConversationRouter * router = [[TCConversationRouter alloc] init];
    TCConversationInteractor * interactor = [[TCConversationInteractor alloc] init];
    TCConversationController * controller = [[TCConversationController alloc] init];
    TCConversationPresenter * presenter = [[TCConversationPresenter alloc] init];
    TCLayerMessagesService * messagesService = [[TCLayerMessagesService alloc] init];
    
    interactor.output = presenter;
    interactor.messagesService = messagesService;
    
    presenter.view = controller;
    presenter.interactor = interactor;
    presenter.router = router;
    
    controller.output = presenter;
    
    self.presenter = presenter;
    self.controller = controller;
}

@end
