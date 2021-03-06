//
//  Item+CoreDataProperties.h
//  CoreData
//
//  Created by Danyow.Ed on 2017/2/8.
//  Copyright © 2017年 Danyow.Ed. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Item+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Item (CoreDataProperties)

+ (NSFetchRequest<Item *> *)fetchRequest;

@property (nonatomic) BOOL collected;
@property (nonatomic) BOOL listed;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *photoData;
@property (nonatomic) float quantity;
@property (nullable, nonatomic, retain) Unit *unit;
@property (nullable, nonatomic, retain) LocationAtHome *locationAtHome;
@property (nullable, nonatomic, retain) LocationAtShop *locationAtShop;

@end

NS_ASSUME_NONNULL_END
