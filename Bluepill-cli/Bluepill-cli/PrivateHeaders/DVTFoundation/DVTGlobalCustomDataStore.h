//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

#import "DVTCustomDataStoring-Protocol.h"

@class DVTDirectoryBasedCustomDataStore, NSString;

@interface DVTGlobalCustomDataStore : NSObject <DVTCustomDataStoring>
{
    DVTDirectoryBasedCustomDataStore *_dataArchiver;
}

+ (id)defaultStore;
@property(readonly) DVTDirectoryBasedCustomDataStore *dataArchiver; // @synthesize dataArchiver=_dataArchiver;
//- (void).cxx_destruct;
@property(readonly) NSString *displayName;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

