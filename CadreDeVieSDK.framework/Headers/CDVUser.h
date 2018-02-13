//
//  CDVUser.h
//  CDV-SDK-iOS
//
//  Created by Hubert FISSELIER on 12/05/2017.
//  Copyright © 2017 Ezeeworld Enterprise. All rights reserved.
//

#import "CDVObjectModel.h"

@interface CDVUser : CDVObjectModel


/**
 User Id
 */
@property (nonatomic, retain, readonly) NSString *cdvId;

/**
 User username (same as email)
 */
@property (nonatomic, retain, readonly) NSString *cdvUsername;

/**
 User email
 */
@property (nonatomic, retain, readonly) NSString *cdvEmail;

/**
 User password
 */
@property (nonatomic, retain, readonly) NSString *cdvPassword;

/**
 User civility (mr/mrs)
 */
@property (nonatomic, retain, readonly) NSString *cdvCivility;

/**
 User firstname
 */
@property (nonatomic, retain, readonly) NSString *cdvFirstName;

/**
 User lastname
 */
@property (nonatomic, retain, readonly) NSString *cdvLastName;

/**
 User mobile phone number
 */
@property (nonatomic, retain, readonly) NSString *cdvMobile;

/**
 User birth_date
 */
@property (nonatomic, retain, readonly) NSString *cdvBirthDate;

/**
 User locale (ex: fr)
 */
@property (nonatomic, retain, readonly) NSString *cdvLocale;

/**
 User First line of address
 */
@property (nonatomic, retain, readonly) NSString *cdvAddressLine1;

/**
 User Second line of address
 */
@property (nonatomic, retain, readonly) NSString *cdvAddressLine2;

/**
 User Zip code
 */
@property (nonatomic, retain, readonly) NSString *cdvZip;

/**
 User city
 */
@property (nonatomic, retain, readonly) NSString *cdvCity;

/**
 User temp token to authenticate on CDV (this token expire)
 */
@property (nonatomic, retain, readonly) NSString *cdvToken;

/**
 User temp tokenK to authenticate on CDV (this token expire)
 */
@property (nonatomic, retain, readonly) NSString *cdvTokenK;



@end


