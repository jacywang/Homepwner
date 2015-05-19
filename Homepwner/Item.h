//
//  Item.h
//  RandomItems
//
//  Created by JIAN WANG on 5/11/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject

@property (nonatomic, strong) NSString *itemName;
@property (nonatomic, strong) NSString *serialNumber;
@property (nonatomic, assign) int valueInDollars;
@property (nonatomic, strong, readonly) NSDate *dateCreated;

+(instancetype)randomItem;

// Designated initializer
-(instancetype)initWithItemName:(NSString *)itemName valueInDollars:(int)value serialNumber:(NSString *)serialNumber;

-(instancetype)initWithItemName:(NSString *)itemName;

@end
