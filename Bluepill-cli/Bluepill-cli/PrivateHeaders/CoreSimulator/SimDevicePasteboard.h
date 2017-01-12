//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

#import "SimPasteboard-Protocol.h"

@class NSArray, NSObject, SimDevice, SimDeviceNotificationManager, SimDevicePasteboardConnection, SimMachPortServer;

@interface SimDevicePasteboard : NSObject <SimPasteboard>
{
    NSObject *_itemsQueue;
    unsigned long long _changeCount;
    NSArray *_items;
    SimDevice *_device;
    SimDevicePasteboardConnection *_pasteboardConnection;
    SimMachPortServer *_notificationServer;
    SimDeviceNotificationManager *_notificationManager;
    unsigned long long _registeredID;
    SimMachPortServer *_promisedDataServer;
    NSArray *_stagedItems;
}

@property(retain) NSArray *stagedItems; // @synthesize stagedItems=_stagedItems;
@property(retain, nonatomic) SimMachPortServer *promisedDataServer; // @synthesize promisedDataServer=_promisedDataServer;
@property(nonatomic) unsigned long long registeredID; // @synthesize registeredID=_registeredID;
@property(retain, nonatomic) SimDeviceNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) SimMachPortServer *notificationServer; // @synthesize notificationServer=_notificationServer;
@property(retain, nonatomic) SimDevicePasteboardConnection *pasteboardConnection; // @synthesize pasteboardConnection=_pasteboardConnection;
@property(nonatomic) __weak SimDevice *device; // @synthesize device=_device;
@property(retain) NSArray *items; // @synthesize items=_items;
@property unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NSObject *itemsQueue; // @synthesize itemsQueue=_itemsQueue;
//- (void).cxx_destruct;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (void)syncBarrier;
- (unsigned long long)setPasteboardWithItems:(id)arg1 error:(id *)arg2;
- (void)setPasteboardAsyncWithItems:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)itemsFromPasteboardWithTypes:(id)arg1 error:(id *)arg2;
- (void)itemsFromPasteboardAsyncWithTypes:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateSimPasteboardItemsWithTypes:(id)arg1 changeCount:(unsigned long long)arg2;
- (void)setItems:(id)arg1 changeCount:(unsigned long long)arg2;
- (void)pasteboardHasChanged:(unsigned long long)arg1 itemsTypes:(id)arg2;
- (void)unsubscribe;
- (void)subscribe;
- (id)description;
- (void)registerSimDeviceNotificationListener;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

