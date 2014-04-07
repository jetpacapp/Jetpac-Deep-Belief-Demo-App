//
//  ViewController.h
//  Jetpac Deep Belief
//
//  Created by Dave Fearon on 4/4/14.
//  Copyright (c) 2014 Jetpac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@class CIDetector;

@interface ViewController : UIViewController <UIGestureRecognizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    BOOL detectFaces;
	CIDetector *faceDetector;
    UIImage *square;
	BOOL isUsingFrontFacingCamera;
	CGFloat beginGestureScale;
	CGFloat effectiveScale;
    
    IBOutlet UIView *previewView;
	IBOutlet UISegmentedControl *camerasControl;
	AVCaptureVideoPreviewLayer *previewLayer;
	AVCaptureVideoDataOutput *videoDataOutput;
    dispatch_queue_t videoDataOutputQueue;
	AVCaptureStillImageOutput *stillImageOutput;
	UIView *flashView;
    
    void* network;
    AVSpeechSynthesizer *synth;
    NSMutableDictionary* oldPredictionValues;
    NSMutableArray* labelLayers;
    AVCaptureSession* session;
}

@property (retain, nonatomic) CATextLayer *predictionTextLayer;

- (IBAction)takePicture:(id)sender;
- (IBAction)switchCameras:(id)sender;
- (IBAction)handlePinchGesture:(UIGestureRecognizer *)sender;
- (IBAction)toggleFaceDetection:(id)sender;

@end
