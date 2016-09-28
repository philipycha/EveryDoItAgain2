//
//  ToDo+CoreDataProperties.h
//  EveryDoItAgain2
//
//  Created by Philip Ha on 2016-09-28.
//  Copyright © 2016 Philip Ha. All rights reserved.
//

#import "ToDo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface ToDo (CoreDataProperties)

+ (NSFetchRequest<ToDo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSNumber *priority;
@property (nullable, nonatomic, copy) NSString *toDoDescription;

@end

NS_ASSUME_NONNULL_END
