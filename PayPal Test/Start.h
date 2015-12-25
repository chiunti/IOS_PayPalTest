//
//  ViewController.h
//  PayPal Test
//
//  Created by admin on 24/12/15.
//  Copyright © 2015 chiuntisoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>
- (IBAction)btnPayPressed:(id)sender;


@end

