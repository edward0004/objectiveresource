//
//  ActiveResourceBase.h
//  medaxion
//
//  Created by Ryan Daigle on 7/24/08.
//  Copyright 2008 yFactorial, LLC. All rights reserved.
//

#import "ActiveResource.h"

@class Response;

@interface ActiveResource (Base) 

// Resource configuration
+ (NSString *)getSite;
+ (void)setSite:(NSString*)siteURL;
+ (NSString *)getUser;
+ (void)setUser:(NSString *)user;
+ (NSString *)getPassword;
+ (void)setPassword:(NSString *)password;


// Finders
+ (NSArray *)findAll;
+ (NSArray *)findAll:(Response **)response;
+ (id)find:(NSString *)elementId;
+ (id)find:(NSString *)elementId withResponse:(Response **)response;

// URL construction accessors
+ (NSString *)elementName;
+ (NSString *)collectionName;
+ (NSString *)protocolExtension;
+ (NSString *)elementPath:(NSString *)elementId;
+ (NSString *)collectionPath;
+ (NSString *)collectionPathWithParameters:(NSDictionary *)parameters;
+ (NSString *)populatePath:(NSString *)path withParameters:(NSDictionary *)parameters;

// Instance-specific methods
- (id)getId;
- (NSString *)classIdName;
- (BOOL)create;
- (BOOL)create:(Response **)response;
- (BOOL)createWithParameters:(NSDictionary *)parameters;
- (BOOL)createWithParameters:(NSDictionary *)parameters andResponse:(Response **)response;
- (BOOL)destroy;
- (BOOL)destroy:(Response **)response;
- (BOOL)update;
- (BOOL)update:(Response **)response;
- (BOOL)save;
- (BOOL)save:(Response **)response;

- (BOOL)createAtPath:(NSString *)path;
- (BOOL)createAtPath:(NSString *)path withResponse:(Response **)response;
- (BOOL)updateAtPath:(NSString *)path;
- (BOOL)updateAtPath:(NSString *)path withResponse:(Response **)response;
- (BOOL)destroyAtPath:(NSString *)path;
- (BOOL)destroyAtPath:(NSString *)path withResponse:(Response **)response;

// Instance helpers for getting at commonly used class-level values
- (NSString *)collectionPath;

@end
