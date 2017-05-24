//
//  CDVError.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 12/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDVError : NSError

+(id) errorWithNative: (NSError *) nativeError;
+(id) errorWithMessage: (NSString *) message statusCode: (NSInteger) statusCode;

    
@end
