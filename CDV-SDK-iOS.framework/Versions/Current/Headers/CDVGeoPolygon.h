//
//  CDVGeoPolygon.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 09/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVArrayModel.h"
#import "CDVGeoPoint.h"

@interface CDVGeoPolygon : CDVArrayModel


/**
 Array of 2 points
 */
@property (nonatomic, retain) NSArray<CDVGeoPoint *> *cdvPoints;




@end
