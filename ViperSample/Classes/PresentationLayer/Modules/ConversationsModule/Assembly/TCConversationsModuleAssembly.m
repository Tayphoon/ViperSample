//
//  TCConversationsModuleAssembly.m
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import "TCConversationsModuleAssembly.h"
#import "TCConversationsController.h"
#import "TCConversationsRouter.h"
#import "TCConversationsPresenter.h"
#import "TCConversationsInteractor.h"
#import "TCLayerMessagesService.h"

@interface TCConversationsModuleAssembly()

@property (nonatomic, strong) TCConversationsPresenter * presenter;
@property (nonatomic, strong) TCConversationsController * controller;

@end

@implementation TCConversationsModuleAssembly

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
    TCConversationsRouter * router = [[TCConversationsRouter alloc] init];
    TCConversationsInteractor * interactor = [[TCConversationsInteractor alloc] init];
    TCConversationsController * controller = [[TCConversationsController alloc] init];
    TCConversationsPresenter * presenter = [[TCConversationsPresenter alloc] init];
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
