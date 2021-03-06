//
//  SMSocketConnectionTest.h
//  SMUtilities
//
//  Created by Suleyman Melikoglu on 11/28/11.
//  Copyright (c) 2011 suleymanmelikoglu@gmail.com. All rights reserved.
//

//  Logic unit tests contain unit test code that is designed to be linked into an independent test executable.
//  See Also: http://developer.apple.com/iphone/library/documentation/Xcode/Conceptual/iphone_development/135-Unit_Testing_Applications/unit_testing_applications.html

#import <SenTestingKit/SenTestingKit.h>
#import "SMSocketConnector.h"

@interface SMSocketConnectionTest : SenTestCase <SMSocketConnectorDelegate>
{
    BOOL isLoading;
    SMSocketConnector* conn;
}

@end
