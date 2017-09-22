//
//  CDVGeoDistance.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 08/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVObjectModel.h"

@interface CDVGeoDistance : CDVObjectModel


/**
 Latitude
 */
@property (nonatomic, retain) NSNumber *cdvLat;


/**
 Longitude
 */
@property (nonatomic, retain) NSNumber *cdvLng;


/**
 Distance in kilometers (could be a decimal)
 */
@property (nonatomic, retain) NSNumber *cdvDistance;


@end
