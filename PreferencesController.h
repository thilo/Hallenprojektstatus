//
//  PreferencesController.h
//  HallenprojektStatus
//
//  Created by kafka on 21.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PreferencesController : NSObject {
	NSPanel *panel;
	NSSecureTextField *passwordTextField;
	NSTextField *usernameTextField;
	NSString * username;
	NSString * password;
}

@property(assign) IBOutlet NSPanel *panel;
@property(assign) IBOutlet NSSecureTextField *passwordTextField;
@property(assign) IBOutlet NSTextField *usernameTextField;
-(IBAction) saveCredentials: (id) sender;
-(IBAction) loadPreferences: (id) sender;
-(NSString *) getUsername;
-(NSString *) getPassword;

@end