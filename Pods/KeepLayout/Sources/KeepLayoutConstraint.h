
//  KeepLayoutConstraint.h
//  Keep Layout
//
//  Created by Martin Kiss on 18.7.13.
//  Copyright (c) 2013 Martin Kiss. All rights reserved.
//

#import "KeepTypes.h"



@interface KeepLayoutConstraint : NSLayoutConstraint


#pragma mark Debugging
/// Debugging helper. Name of the constraint is a part of its `-description`
@property (nonatomic, readwrite, copy) NSString *name;
- (instancetype)name:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

- (NSString *)description;


@end



@interface NSLayoutConstraint (Activation)

@property (getter=isKeepActive) BOOL keepActive;
+ (void)keepConstraints:(NSArray *)constraints active:(BOOL)active;

@end


