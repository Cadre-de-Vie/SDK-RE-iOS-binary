//
//  CDVContact.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 11/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDVObjectModel.h"

@interface CDVContact : CDVObjectModel


/**
 Contact Ubiflow Id
 */
@property (nonatomic, retain, readonly) NSString *cdvFlowId;


/**
 Contact Name
 */
@property (nonatomic, retain, readonly) NSString *cdvName;


/**
 Contact Registered Name
 */
@property (nonatomic, retain, readonly) NSString *cdvRegName;


/**
 Contact Registered Siret
 */
@property (nonatomic, retain, readonly) NSString *cdvRegSiret;


/**
 Contact Email
 */
@property (nonatomic, retain, readonly) NSString *cdvEmail;


/**
 Contact Phone
 */
@property (nonatomic, retain, readonly) NSString *cdvPhone;

/**
 Contact Street
 */
@property (nonatomic, retain, readonly) NSString *cdvStreet;

/**
Contact Zip Code
*/
@property (nonatomic, retain, readonly) NSString *cdvZip;

/**
 Contact City
 */
@property (nonatomic, retain, readonly) NSString *cdvCity;

/**
 Contact Country
 */
@property (nonatomic, retain, readonly) NSString *cdvCountry;


@end
