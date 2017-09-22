//
//  CDVObjectModel.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 08/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDVObjectModel : NSObject

- (instancetype)initWithDictionary:(NSDictionary *) jsonContent;
- (NSDictionary *) dictionary;

+ (void) setProperty: (NSString *) key  inDictionary: (NSMutableDictionary *) dictionary withVariable: (id) variable;
@end
