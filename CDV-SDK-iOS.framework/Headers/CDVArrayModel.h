//
//  CDVArrayModel.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 09/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDVArrayModel : NSObject

- (instancetype)initWithArray:(NSArray *) jsonArray;
- (NSArray *) array;

@end
