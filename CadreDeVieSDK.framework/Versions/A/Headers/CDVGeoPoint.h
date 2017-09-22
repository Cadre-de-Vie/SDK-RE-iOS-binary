//
//  CDVGeoPoint.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 09/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVObjectModel.h"

@interface CDVGeoPoint : CDVObjectModel


/**
 Latitude
 */
@property (nonatomic, retain) NSNumber *cdvLat;


/**
 Longitude
 */
@property (nonatomic, retain) NSNumber *cdvLng;


@end
