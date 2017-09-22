//
//  CDVProperty.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 08/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDVObjectModel.h"
#import "CDVGeoPoint.h"
#import "CDVContact.h"

typedef NS_ENUM(NSInteger, CDVPropertyService) {
    CDVPropertyServiceBuy,
    CDVPropertyServiceRent
};

typedef NS_ENUM(NSInteger, CDVPropertyAge) {
    CDVPropertyAgeNew,
    CDVPropertyAgeOld,
    CDVPropertyAgeBoth
};



@interface CDVProperty : CDVObjectModel

/**
 Property id
 */
@property (nonatomic, retain, readonly) NSNumber *cdvId;


/**
 Property description
 */
@property (nonatomic, retain, readonly) NSString *cdvDescription;

/**
 Property title
 */
@property (nonatomic, retain, readonly) NSString *cdvTitle;

/**
 Property enabled
 */
@property (nonatomic, readonly) BOOL cdvEnabled;

/**
 Property reference
 */
@property (nonatomic, retain, readonly) NSString *cdvReference;

/**
 Property lot
 */
@property (nonatomic, readonly) BOOL cdvLot;

/**
 Property cover
 */
@property (nonatomic, retain, readonly) NSString *cdvCover;

/**
 Property price
 */
@property (nonatomic, retain, readonly) NSNumber *cdvPrice;

/**
 Property Number of rooms
 */
@property (nonatomic, readonly) int cdvNbRooms;

/**
 Property Number of bedrooms
 */
@property (nonatomic, readonly) int cdvNbBedrooms;

/**
 Property Type label
 */
@property (nonatomic, retain, readonly) NSString *cdvTypeLabel;

/**
 Property Type parent
 */
@property (nonatomic, retain, readonly) NSString *cdvTypeParent;

/**
 Property area
 */
@property (nonatomic, retain, readonly) NSNumber *cdvArea;

/**
 Property Zip Code
 */
@property (nonatomic, retain, readonly) NSString *cdvZip;

/**
 Property city
 */
@property (nonatomic, retain, readonly) NSString *cdvCity;

/**
 Property Service
 */
@property (nonatomic, retain, readonly) NSString *cdvService;

/**
 Property Price per meter
 */
@property (nonatomic, retain, readonly) NSNumber *cdvPricePerMeter;

/**
 Property Location
 */
@property (nonatomic, retain, readonly) CDVGeoPoint *cdvLocation;

/**
 Property Ubiflow Id
 */
@property (nonatomic, retain, readonly) NSString *cdvFlowId;

/**
 Property Age (new,old)
 */
@property (nonatomic, retain, readonly) NSString *cdvAge;

/**
 Property Images links
 */
@property (nonatomic, retain, readonly) NSArray<NSString *> *cdvImages;

/**
 Property Contact
 */
@property (nonatomic, retain, readonly) CDVContact *cdvContact;

/**
 Property otherDatas
 */
@property (nonatomic, retain, readonly) NSDictionary *cdvOtherDatas;





+ (NSString *) serviceFromValue:(CDVPropertyService) value;
+ (NSString *) ageFromValue:(CDVPropertyAge) value;
+ (CDVPropertyAge) ageFromString:(NSString *) value;

@end


