//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSString;

@interface DVTBuildVersion : NSObject
{
    NSString *_buildVersion;
    unsigned long long _buildVersionMajorNumber;
    NSString *_buildVersionMajorLetter;
    unsigned long long _buildVersionMinorNumber;
    NSString *_buildVersionMinorLetter;
}

+ (id)buildVersionWithString:(id)arg1;
+ (id)currentSystemVersion;
//- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
@property(readonly) NSString *buildVersionMinorLetter;
@property(readonly) unsigned long long buildVersionMinorNumber;
@property(readonly) NSString *buildVersionMajorLetter;
@property(readonly) unsigned long long buildVersionMajorNumber;
- (void)_parseBuildVersionIfNecessary;
- (id)name;
- (id)initWithString:(id)arg1;

@end

