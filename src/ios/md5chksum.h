#import <Cordova/CDV.h>


@interface md5chksum : CDVPlugin
	
@property (nonatomic, strong) NSString* storedCallbackId;
- (void)file:(CDVInvokedUrlCommand*)command;

@end

