//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDiffDataSource.h"

@class NSArray, NSString;

@interface _DVTDiffLineDataSourceConsistentCopy : DVTDiffDataSource
{
    NSArray *_tokenStorage;
    NSString *_arrangedContent;
}

//- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)arrangedContent;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(struct _DVTDiffToken *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)initWithContent:(id)arg1 arrangedContent:(id)arg2 tokenStorage:(id)arg3;

@end

