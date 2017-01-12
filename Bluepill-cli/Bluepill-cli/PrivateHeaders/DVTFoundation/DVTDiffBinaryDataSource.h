//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDiffDataSource.h"

@class DVTFilePath;

@interface DVTDiffBinaryDataSource : DVTDiffDataSource
{
    struct _DVTDiffToken _tokenStorage[5];
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setTokenStorage:(struct _DVTDiffToken [5])arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(struct _DVTDiffToken *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
@property(readonly) DVTFilePath *contentFilePath;
- (void)_setupHash;
- (id)initWithContentFilePath:(id)arg1;

@end

