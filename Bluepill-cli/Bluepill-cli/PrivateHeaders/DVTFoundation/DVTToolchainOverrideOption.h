//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class DVTToolchain, DVTToolchainRegistry, NSDate, NSError, NSString;

@interface DVTToolchainOverrideOption : NSObject
{
    NSString *_origin;
    BOOL _isValid;
    BOOL _isBuiltIn;
    BOOL _isActive;
    DVTToolchain *_toolchainForDisplay;
    DVTToolchain *_toolchainForToolchainRegistryDefaultOverride;
    DVTToolchain *_toolchainForXcodebuildCommandLine;
    NSString *_displayName;
    NSString *_shortDisplayName;
    NSDate *_createdDate;
    NSString *_localizedCreatedDate;
    NSError *_validationError;
    DVTToolchainRegistry *_registry;
}

@property(readonly) DVTToolchainRegistry *registry; // @synthesize registry=_registry;
@property(readonly) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly) BOOL isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(readonly) NSError *validationError; // @synthesize validationError=_validationError;
@property(readonly) BOOL isValid; // @synthesize isValid=_isValid;
@property(readonly) NSString *localizedCreatedDate; // @synthesize localizedCreatedDate=_localizedCreatedDate;
@property(readonly) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) DVTToolchain *toolchainForXcodebuildCommandLine; // @synthesize toolchainForXcodebuildCommandLine=_toolchainForXcodebuildCommandLine;
@property(readonly) DVTToolchain *toolchainForToolchainRegistryDefaultOverride; // @synthesize toolchainForToolchainRegistryDefaultOverride=_toolchainForToolchainRegistryDefaultOverride;
@property(readonly) DVTToolchain *toolchainForDisplay; // @synthesize toolchainForDisplay=_toolchainForDisplay;
//- (void).cxx_destruct;
- (id)description;
- (BOOL)activateWithError:(id *)arg1;
@property(readonly) NSString *origin;
@property(readonly) NSString *localizedFileSize;
@property(readonly) unsigned long long fileSize;
- (id)initWithRegistry:(id)arg1 toolchainForDisplay:(id)arg2 toolchainForToolchainRegistryDefaultOverride:(id)arg3 toolchainForXcodebuildCommandLine:(id)arg4 displayNameOverride:(id)arg5 shortDisplayNameOverride:(id)arg6;

@end

