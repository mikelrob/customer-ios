//
//  KUSUserSession.h
//  Kustomer
//
//  Created by Daniel Amitay on 8/13/17.
//  Copyright © 2017 Kustomer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KUSChatMessagesDataSource.h"
#import "KUSChatSessionsDataSource.h"
#import "KUSChatSettingsDataSource.h"
#import "KUSRequestManager.h"
#import "KUSTrackingTokenDataSource.h"
#import "KUSUserDataSource.h"

@interface KUSUserSession : NSObject

- (instancetype)initWithOrgName:(NSString *)orgName orgId:(NSString *)orgId;
- (instancetype)init NS_UNAVAILABLE;

- (void)resetTracking;

// Org methods
- (NSString *)orgId;
- (NSString *)orgName;
- (NSString *)organizationName; // User facing

// Datasource objects
- (KUSChatSessionsDataSource *)chatSessionsDataSource;
- (KUSChatSettingsDataSource *)chatSettingsDataSource;
- (KUSTrackingTokenDataSource *)trackingTokenDataSource;

- (KUSChatMessagesDataSource *)chatMessagesDataSourceForSession:(KUSChatSession *)session;
- (KUSUserDataSource *)userDataSourceForUserId:(NSString *)userId;

// Request manager
- (KUSRequestManager *)requestManager;

@end