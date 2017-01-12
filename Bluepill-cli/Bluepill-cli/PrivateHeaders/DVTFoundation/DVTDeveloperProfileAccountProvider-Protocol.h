//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSDictionary, NSString;

@protocol DVTDeveloperProfileAccountProvider <NSObject>
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(NSDictionary *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
@end

