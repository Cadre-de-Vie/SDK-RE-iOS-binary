//
//  CDVPropertySearch.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 08/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDVObjectModel.h"
#import "CDVProperty.h"
#import "CDVGeoDistance.h"
#import "CDVGeoPolygon.h"
#import "CDVGeoBoundingBox.h"

typedef NS_ENUM(NSInteger, CDVPropertySort) { // 'none', 'new', 'ascending_price', 'descending_price', 'ascending_price_per_meter', 'descending_price_per_meter', 'ascending_surface', 'descending_surface', 'ascending_distance', 'descending_distance'
    CDVPropertySortNone,
    CDVPropertySortNew,
    CDVPropertySortPriceAsc,
    CDVPropertySortPriceDesc,
    CDVPropertySortPricePerMeterAsc,
    CDVPropertySortPricePerMeterDesc,
    CDVPropertySortSurfaceAsc,
    CDVPropertySortSurfaceDesc,
    CDVPropertySortDistanceAsc,
    CDVPropertySortDistanceDesc,
};

@interface CDVPropertySearch : CDVObjectModel

/**
 Property search Sort
 */
@property (nonatomic) CDVPropertySort cdvSort;

/**
 Property search Page Size (Number of items in results)
 */
@property (nonatomic) int cdvPageSize;

/**
 Property search Page (Page Index in results)
 */
@property (nonatomic) int cdvPage;

/**
 Property search Service (Buy or Rent)
 */
@property (nonatomic) CDVPropertyService cdvService;

/**
 Property search parent types (Array of values)
 */
@property (nonatomic) NSArray<NSString *> *cdvParentTypes;

/**
 Property search label types (Array of values)
 */
@property (nonatomic) NSArray<NSString *> *cdvLabelTypes;

/**
 Property search style types (Array of values)
 */
@property (nonatomic) NSArray<NSString *> *cdvStyleTypes;


/**
 Property search Age (New, Old or Both)
 */
@property (nonatomic) CDVPropertyAge cdvAge;

/**
 Property search Min price
 */
@property (nonatomic) NSNumber *cdvMinPrice;

/**
 Property search Max price
 */
@property (nonatomic) NSNumber *cdvMaxPrice;

/**
 Property search Number of rooms (array of different values [2,3,4]
 */
@property (nonatomic) NSArray<NSNumber *> *cdvNbRooms;

/**
 Property search Number of bedrooms (array of different values [2,3,4]
 */
@property (nonatomic) NSArray<NSNumber *> *cdvNbBedrooms;

/**
 Property search Min area
 */
@property (nonatomic) NSNumber *cdvMinArea;

/**
 Property search Max area
 */
@property (nonatomic) NSNumber *cdvMaxArea;

/**
 Property search Return only favorites?
 */
@property (nonatomic) BOOL cdvOnlyFavorites;

/**
 Property search Return only invisibles?
 */
@property (nonatomic) BOOL cdvOnlyInvisibles;


/**
 Property search Return exclude invisibles?
 */
@property (nonatomic) BOOL cdvExcludeInvisibles;


/**
 Property search Array of geo distances
 */
@property (nonatomic, retain) NSArray<CDVGeoDistance *> *cdvGeoDistances;


/**
 Property search Array of geo polygons
 */
@property (nonatomic, retain) NSArray<CDVGeoPolygon *> *cdvGeoPolygons;

/**
 Property search geo bounding box
 */
@property (nonatomic, retain) CDVGeoBoundingBox *cdvGeoBoundingBox;

/**
 Property search free query
 */
@property (nonatomic, retain) NSString *cdvQuery;

@end
