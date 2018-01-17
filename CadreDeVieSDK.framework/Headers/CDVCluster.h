/**
    CDVCluster.h
    
    This class is the model of a cluster : aggregation of GeoPoints
*/

#import "CDVObjectModel.h"

@interface CDVCluster : CDVObjectModel


/**
 Cluster Properties count in cluster
 */
@property (nonatomic, retain, readonly) NSNumber *cdvCount;

/**
 Cluster Latitude
 */
@property (nonatomic, retain, readonly) NSNumber *cdvLat;

/**
 Cluster Longitude
 */
@property (nonatomic, retain, readonly) NSNumber *cdvLng;


/**
 Cluster Minimal Latitude in cluster
 */
@property (nonatomic, retain, readonly) NSNumber *cdvMinLat;

/**
 Cluster Minimal Longitude in cluster
 */
@property (nonatomic, retain, readonly) NSNumber *cdvMinLng;


/**
 Cluster Maximal Latitude in cluster
 */
@property (nonatomic, retain, readonly) NSNumber *cdvMaxLat;

/**
 Cluster Maximal Longitude in cluster
 */
@property (nonatomic, retain, readonly) NSNumber *cdvMaxLng;

/**
 Cluster List of properties Ids in cluster
 */
@property (nonatomic, retain, readonly) NSArray<NSNumber *> *cdvPropertiesIds;

/**
 Cluster is single point
 */
@property (nonatomic, readonly) Boolean cdvSinglePoint;


@end
