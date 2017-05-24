/**
    CDVManager.h
 
    This class is a Singleton which centralize API Calls
 */

#import <Foundation/Foundation.h>
#import <CDV-SDK-iOS/CDV_SDK_iOS.h>

@interface CDVManager : NSObject



+ (CDVManager *) sharedInstance;

@property (nonatomic, retain) CDVUser *connectedUser;

    
    /** Get Properties matching with search criteria (CDVPropertySearch) */
    - (void) getPropertiesWithSearch: (CDVPropertySearch *)search completion: (void (^)(NSError* error, NSArray<CDVProperty *>* properties, int totalProperties))completion;

    /** Get properties matching with search criteria (CDVPropertySearch) aggregated in clusters for map purpose */
    - (void) mapPropertiesWithSearch: (CDVPropertySearch *)search completion: (void (^)(NSError* error, NSArray<CDVCluster *>* properties, int totalClusters))completion;

    /** Get how many Properties match with search criteria (CDVPropertySearch) */
    - (void) countPropertiesWithSearch: (CDVPropertySearch *)search completion: (void (^)(NSError* error, int totalProperties))completion;
    
    /** Get properties details by list of ids */
    - (void) getPropertiesWithIds: (NSArray<NSNumber *>*) propertyIds completion: (void (^)(NSError* error, NSArray<CDVProperty *>* properties))completion;


    
    /** Connect user by email and password */
    - (void) loginWithEmail: (NSString *)email password: (NSString *) password completion: (void (^)(NSError* error, CDVUser* user))completion;
    
    /** Get connected user profile datas */
    - (void) meWithCompletion: (void (^)(NSError* error, CDVUser *user))completion;
    
    /** Create user from CDVUser entity */
    - (void) createUser: (CDVUser *)newUser completion: (void (^)(NSError* error, CDVUser* user))completion;
    
    /** Update user from CDVUser entity */
    - (void) updateUser: (CDVUser *)updatedUser completion: (void (^)(NSError* error))completion;

    
    
    
    /** Get connected user alerts datas */
    - (void) getAlertsWithCompletion: (void (^)(NSError* error, NSArray<CDVAlert *>* alerts))completion;
    
    /** Create an alert for connected user from CDVAlert entity */
    - (void) createAlert: (CDVAlert *)newAlert completion: (void (^)(NSError* error, CDVAlert* alert))completion;
    
    /** Update an alert of connected user from CDVAlert entity */
    - (void) updateAlert: (CDVAlert *)alert completion: (void (^)(NSError* error))completion;
    
    /** Delete alert of connected user */
    - (void) deleteAlert: (CDVAlert *)alert completion: (void (^)(NSError* error))completion;

    
    /** Get connected user favorites datas */
    - (void) getFavoritesWithCompletion: (void (^)(NSError* error, NSArray<CDVProperty *>* properties))completion;
    
    /** Create a favorite for connected user from CDVFavorite entity */
    - (void) createFavorite: (CDVProperty *)property completion: (void (^)(NSError* error))completion;
    
    /** Delete favorite for connected user */
    - (void) deleteFavorite: (CDVProperty *)property completion: (void (^)(NSError* error))completion;

    
    /** Get connected user invisibles datas */
    - (void) getInvisiblesWithCompletion: (void (^)(NSError* error, NSArray<CDVProperty *>* properties))completion;
    
    /** Create a invisible for connected user from CDVFavorite entity */
    - (void) createInvisible: (CDVProperty *)property completion: (void (^)(NSError* error))completion;
    
    /** Delete invisible for connected user */
    - (void) deleteInvisible: (CDVProperty *)property completion: (void (^)(NSError* error))completion;

    
    
    /** Get connected user POIs */
    - (void) getPOIsWithCompletion: (void (^)(NSError* error, NSArray<CDVPOI *>* alerts))completion;
    
    /** Create a POI for connected user POIs from CDVPOI entity */
    - (void) createPOI: (CDVPOI *)newPOI completion: (void (^)(NSError* error, CDVPOI* poi))completion;
    
    /** Update a POI for connected user POIs from CDVPOI entity */
    - (void) updatePOI: (CDVPOI *)poi completion: (void (^)(NSError* error))completion;
    
    /** Delete a POI for connected user POIs */
    - (void) deletePOI: (CDVPOI *)poi completion: (void (^)(NSError* error))completion;

@end
