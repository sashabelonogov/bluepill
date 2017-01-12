//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import CoreData;

@class DVTSigningCertificate, DVTTeamRecord, NSData, NSDate, NSSet, NSString;

@interface DVTCertificateRecord : NSManagedObject
{
    NSString *_kind;
    NSString *_name;
}

//- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type;
- (id)kind;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DVTSigningCertificate *signingCertificate;

// Remaining properties
@property(retain, nonatomic) NSData *certContent; // @dynamic certContent;
@property(retain, nonatomic) NSString *certificateId; // @dynamic certificateId;
@property(retain, nonatomic) NSString *certificatePlatform; // @dynamic certificatePlatform;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @dynamic provisioningProfiles;
@property(retain, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

