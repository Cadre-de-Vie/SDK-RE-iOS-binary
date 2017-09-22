//
//  CDVPOI.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 15/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVObjectModel.h"

@interface CDVPOI : CDVObjectModel


/**
 POI Id
 */
@property (nonatomic, retain, readonly) NSString *cdvId;


/**
 POI Name
 */
@property (nonatomic, retain) NSString *cdvName;


/**
 POI Description
 */
@property (nonatomic, retain) NSString *cdvDescription;


/**
 POI Latitude
 */
@property (nonatomic, retain) NSNumber *cdvLat;


/**
 POI Longitude
 */
@property (nonatomic, retain) NSString *cdvLng;


/**
 POI Link (walking, bicycling, driving, transit)
 */
@property (nonatomic, retain) NSString *cdvLink;


/**
 POI ChronoMap (time5, time10, ..., time30)
 */
@property (nonatomic, retain) NSArray<NSString *> *cdvChronoMaps;



@end
