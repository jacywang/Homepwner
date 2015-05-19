//
//  ItemStore.h
//  Homepwner
//
//  Created by JIAN WANG on 5/18/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Item;

@interface ItemStore : NSObject

@property (nonatomic, readonly, copy) NSArray *allItems;

+(instancetype)sharedStore;
-(Item *)createItem;

@end
