//
//  ANRPCCall.h
//  RTorrentControl
//
//  Created by Alex Nichol on 10/28/12.
//  Copyright (c) 2012 Alex Nichol. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KBDecodeObjC.h"
#import "KBEncodeObjC.h"
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>

@interface ANRPCConnection : NSObject {
    NSString * host;
    UInt16 port;
    NSString * username;
    NSString * password;
    
    int fd;
}

- (id)initWithHost:(NSString *)aHost port:(UInt16)aPort username:(NSString *)aUsername password:(NSString *)aPassword;

- (BOOL)connect:(NSError **)error;
- (NSData *)sendSynchronousRequest:(NSData *)request error:(NSError **)error;
- (void)disconnect;

@end
