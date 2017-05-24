//
//  CDVNotFoundError.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 12/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVError.h"

@interface CDVNotFoundError : CDVError


+(id) errorWithMessage: (NSString *) message;
@end
