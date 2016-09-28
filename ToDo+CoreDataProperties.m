//
//  ToDo+CoreDataProperties.m
//  EveryDoItAgain2
//
//  Created by Philip Ha on 2016-09-28.
//  Copyright © 2016 Philip Ha. All rights reserved.
//

#import "ToDo+CoreDataProperties.h"

@implementation ToDo (CoreDataProperties)

+ (NSFetchRequest<ToDo *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"ToDo"];
}

@dynamic name;
@dynamic priority;
@dynamic toDoDescription;

@end
