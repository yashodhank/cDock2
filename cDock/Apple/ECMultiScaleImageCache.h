//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ECMultiScaleImageCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)removeSharedImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedMultiScaleImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)removeImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)multiScaleImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)imageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)init;

@end

