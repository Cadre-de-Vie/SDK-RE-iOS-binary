//
//  CDVAlert.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 15/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVObjectModel.h"
#import "CDVPropertySearch.h"

@interface CDVAlert : CDVObjectModel



/**
 Alert Id
 */
@property (nonatomic, retain, readonly) NSString *cdvId;

/**
 Alert Name
 */
@property (nonatomic, retain) NSString *cdvName;

/**
 Alert Email
 */
@property (nonatomic, retain) NSString *cdvEmail;


/**
 Alert Search Type
 */
@property (nonatomic, retain) NSString *cdvSearchType;


/**
 Alert Query
 */
@property (nonatomic, retain) NSString *cdvQuery;

/**
 Alert Minimal Price
 */
@property (nonatomic, retain) NSNumber *cdvMinPrice;

/**
 Alert Maximal Price
 */
@property (nonatomic, retain) NSNumber *cdvMaxPrice;

/**
 Alert search Number of rooms (array of different values [2,3,4])
 */
@property (nonatomic) NSArray<NSNumber *> *cdvNbRooms;

/**
 Alert search Number of bedrooms (array of different values [2,3,4])
 */
@property (nonatomic) NSArray<NSNumber *> *cdvNbBedrooms;

/**
 Alert Minimal Area
 */
@property (nonatomic, retain) NSNumber *cdvMinArea;

/**
 Alert Maximal Area
 */
@property (nonatomic, retain) NSNumber *cdvMaxArea;

/**
 Property search Age (New, Old or Both)
 */
@property (nonatomic) CDVPropertyAge cdvAge;




@end
