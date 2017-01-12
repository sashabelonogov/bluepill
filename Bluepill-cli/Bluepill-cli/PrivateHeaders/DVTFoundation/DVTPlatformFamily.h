//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSArray, NSMutableSet, NSSet, NSString;

@interface DVTPlatformFamily : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSMutableSet *_platforms;
    NSArray *_osVersions;
}

+ (id)registerPlatformFamilyWithIdentifier:(id)arg1 name:(id)arg2;
+ (id)platformFamilyWithName:(id)arg1;
+ (id)platformFamilyWithIdentifier:(id)arg1;
+ (id)platformFamiliesSortedByName;
+ (id)allPlatformFamilies;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
//- (void).cxx_destruct;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSSet *platforms; // @synthesize platforms=_platforms;
- (void)addPlatform:(id)arg1;
@property(readonly) NSArray *osVersions; // @synthesize osVersions=_osVersions;
- (id)description;

@end

