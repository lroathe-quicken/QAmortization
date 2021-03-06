/*
 MIT License

 Copyright (c) 2016 Quicken, Inc.

 Created by Lane Roathe on 11/7/16

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController <NSTextFieldDelegate>

@property (nonatomic, weak) IBOutlet NSTextField* openingBalanceField;
@property (nonatomic, weak) IBOutlet NSTextField* interestRateField;
@property (nonatomic, weak) IBOutlet NSTextField* lengthField;
@property (nonatomic, weak) IBOutlet NSPopUpButton* lengthTypePopup;
@property (nonatomic, weak) IBOutlet NSPopUpButton* compoundingPeriodPopup;
@property (nonatomic, weak) IBOutlet NSPopUpButton* paymentSchedulePopUp;
@property (nonatomic, weak) IBOutlet NSTextField* monthyPaymentField;

@property (nonatomic, weak) IBOutlet NSTextField* propertyTaxesField;
@property (nonatomic, weak) IBOutlet NSTextField* hazardInsuranceField;
@property (nonatomic, weak) IBOutlet NSTextField* mortgageInsuranceField;
@property (nonatomic, weak) IBOutlet NSTextField* additionalPrincipalField;

@property (nonatomic, weak) IBOutlet NSTextField* totalPaymentField;

@property (nonatomic, weak) IBOutlet NSView* invalidDataView;

@property (nonatomic, assign) IBOutlet NSWindow *window;
@property (nonatomic, weak) IBOutlet NSArrayController *arrayController;

@end
