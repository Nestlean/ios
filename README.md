# NestleanSDK

[![Version](https://img.shields.io/cocoapods/v/NestleanSDK.svg?style=flat)](http://cocoapods.org/pods/NestleanSDK)
[![License](https://img.shields.io/cocoapods/l/NestleanSDK.svg?style=flat)](http://cocoapods.org/pods/NestleanSDK)
[![Platform](https://img.shields.io/cocoapods/p/NestleanSDK.svg?style=flat)](http://cocoapods.org/pods/NestleanSDK)

## Installation

NestleanSDK is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "NestleanSDK"
```


## Usage
1. In your project's "Build Settings" add -ObjC flag in section "Other Linker Flags" and turn off "Enable Bitcode".

2. Add frameworks to your project:
	- CFNetwork.framework
	- CoreTelephony.framework
	- QuartzCore.framework
	- SystemConfiguration.framework
	- CoreFoundation.framework
	- AssetsLibrary.framework
	- Photos.framework
	- CoreVideo.framework
	- Security.framework
	- CoreMedia.framework
	- CoreMotion.framework
	- AVFoundation.framework
	- UIKit.framework

3. Import nestlean header file in every place where you are going to use it.
		#import "Nestlean.h"

4. Initialize Nestlean sdk in you AppDelegate's method application:didFinishLaunchingWithOptions
		[Nestlean initWithApplicationKey: @”sdk_token”];


#### Optional steps
- Custom Events track specific actions that users take within your app [example: making a purchase, playing a video, or sharing on Twitter]. In order to track custom events, you need to call the method:

		[Nestlean event: @”event_name”];

- The second level in the Custom Event structure is the Event parameter [example: user is registered or anonymous]. In order to track custom events, you need to call the method:

		[Nestlean event: @”event_name” data: @{"key":@"value"}];

- Feedback Screen is used to save and track user feedback. To integrate Feedback Screen you need to call the method:

		[Nestlean showFeedback]

- By default all the screens that our SDK can parse are being submitted automatically. In order to add the screen manually, you need to call the method:

		[Nestlean screen: @“screen_name”]

## Author

Alex Bulgakov, alex@nestlean.com
