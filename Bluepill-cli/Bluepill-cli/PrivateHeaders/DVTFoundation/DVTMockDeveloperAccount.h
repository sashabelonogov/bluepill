//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDeveloperAccount.h"

@class NSString;

@interface DVTMockDeveloperAccount : DVTDeveloperAccount
{
    NSString *_mockUsername;
    NSString *_mockPassword;
}

@property(copy) NSString *mockPassword; // @synthesize mockPassword=_mockPassword;
@property(copy) NSString *mockUsername; // @synthesize mockUsername=_mockUsername;
//- (void).cxx_destruct;
- (id)password;
- (id)username;

@end

