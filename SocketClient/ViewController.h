//
//  ViewController.h
//  SocketClient
//
//  Created by Dzianis Natochy on 2/18/16.
//  Copyright © 2016 Poynt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSStreamDelegate>
{
    CFReadStreamRef readStream;
    CFWriteStreamRef writeStream;
    
    NSInputStream   *inputStream;
    NSOutputStream  *outputStream;
    
    NSMutableArray  *messages;
}

@property (weak, nonatomic) IBOutlet UITextField *ipAddressText;
@property (weak, nonatomic) IBOutlet UITextField *portText;
@property (weak, nonatomic) IBOutlet UITextField *dataToSendText;
@property (weak, nonatomic) IBOutlet UILabel *connectedLabel;
@property (weak, nonatomic) IBOutlet UITextField *dataReceived;

@property (weak, nonatomic) IBOutlet UITextView *requestTextArea;

@property (weak, nonatomic) IBOutlet UIButton *sendMsgBtn;

@property (weak, nonatomic) IBOutlet UITextView *responseText;
@property (weak, nonatomic) IBOutlet UIButton *connectBtn;

@end

