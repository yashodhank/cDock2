//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DPColorSpace : NSObject
{
    struct CGColorSpace *_colorSpace;
    NSString *_md5;
}

@property(readonly, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDisplay:(unsigned int)arg1;

@end

