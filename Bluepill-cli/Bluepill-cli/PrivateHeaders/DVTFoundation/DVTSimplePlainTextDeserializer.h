//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSimpleDeserializer.h"

@class NSMutableArray;

@interface DVTSimplePlainTextDeserializer : DVTSimpleDeserializer
{
    NSMutableArray *_knownClasses;
}

//- (void).cxx_destruct;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (void)decodeHexBytes:(void *)arg1 length:(unsigned long long)arg2 magic:(BOOL)arg3;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

