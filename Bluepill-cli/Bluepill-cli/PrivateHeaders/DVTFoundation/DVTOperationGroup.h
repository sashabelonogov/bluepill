//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTOperation.h"

@class DVTDispatchLock, NSArray, NSError, NSMutableArray, NSOperationQueue;

@interface DVTOperationGroup : DVTOperation
{
    NSOperationQueue *_queue;
    DVTDispatchLock *_lock;
    NSMutableArray *_suboperations;
//    NSError *_error;
}

+ (id)operationGroupWithSuboperations:(id)arg1;
//- (void).cxx_destruct;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (id)description;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)error;
- (void)setError:(id)arg1;
- (void)cancel;
- (void)main;
- (void)start;
- (void)addSuboperation:(id)arg1;
- (void)addSuboperations:(id)arg1;
@property long long maxConcurrentOperationCount;
@property(readonly) NSArray *suboperations;
- (id)init;

@end

