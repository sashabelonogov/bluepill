//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import CoreData;

@class DVTTeamRecord, NSString;

@interface DVTApplicationGroupRecord : NSManagedObject
{
}

+ (id)coreDataEntityName;

// Remaining properties
@property(retain, nonatomic) NSString *applicationGroup; // @dynamic applicationGroup;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

