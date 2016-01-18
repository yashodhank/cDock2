//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECSBItem.h"

@class NSMutableArray;

@interface ECSBContainerItem : ECSBItem
{
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemForClientItem:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfItems; // @dynamic numberOfItems;
- (id)init;

@end

