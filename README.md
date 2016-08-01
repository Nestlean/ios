# Nestlean SDK v1.1.1  
_CocoaPods / Objective C Native / Swift Integrations_

---
---

[![Version](https://img.shields.io/cocoapods/v/Nestlean.svg?style=flat)](http://cocoapods.org/pods/Nestlean)
[![License](https://img.shields.io/cocoapods/l/Nestlean.svg?style=flat)](http://cocoapods.org/pods/Nestlean)
[![Platform](https://img.shields.io/cocoapods/p/Nestlean.svg?style=flat)](http://cocoapods.org/pods/Nestlean)

### CocoaPods Integration

Nestlean is available through [CocoaPods](http://cocoapods.org/pods/Nestlean). To install
it, simply add the following line to your Podfile:

```ruby
pod "Nestlean"
```

1. Add these keys in your info.plist file. (Related to the App Transport Security as of ios 9.0) They specify the exceptions needed for each domain so your app can successfully load the images for rewards

	```
	<key>NSAppTransportSecurity</key>
	<dict> 
  		<key>NSAllowsArbitraryLoads</key> <true/>
	</dict>
	```

2. Import Nestlean header file in every place where you are going to use it. 
 
	` #import “Nestlean.h” `

3. Initialize Nestlean sdk in you AppDelegate's method **application:didFinishLaunchingWithOptions:**

 	` [Nestlean initWithApplicationKey: @”sdk_token”] 

### Methods

1. Custom Events track specific actions that users take within your app *[example: making a purchase, playing a video, or taking any possible app action]*. In order to track custom events, you need to call the method: 

	`[Nestlean event: @”event_name”];`

2. The second level in the Custom Event structure is the Event parameter *[example: user is registered or anonymous]*, see below an example:    

	`[Nestlean event: @”event_name” data: @{“key”:@"value"}];`

3. Feedback Screen is used to save and track user feedback. To integrate Feedback Screen you need to call the method: 

	`[Nestlean showFeedbackView];`

4. By default all the screens that our SDK can parse are being submitted automatically. If you have a custom screen that we cannot track automatiicaly, you can easily add the screen manually, just follow the method below: 

	`[Nestlean screen: @“screen_name”];`
	
---
---

### Objective C - Native Integration

1. Clone or download all the files

2. Add all the files to your project

3. Find "Build Settings" in your project and add -ObjC flag in section "Other Linker Flags" 
 
4. Add frameworks to your project:
	- CFNetwork.framework 
	- AVFoundation.framework 
	- CoreFoundation.framework 
	- CoreMotion.framework 
	- CoreVideo.framework 
	- CoreMedia.framework 
	- CoreTelephony.framework 
	- QuartzCore.framework 
	- SystemConfiguration.framework

5. Add these keys in your info.plist file. (Related to the App Transport Security as of ios 9.0) They specify the exceptions needed for each domain so your app can successfully load the images for rewards

	```
	<key>NSAppTransportSecurity</key>
	<dict> 
  		<key>NSAllowsArbitraryLoads</key> <true/>
	</dict>
	```

6. Import Nestlean header file in every place where you are going to use it. 
 
	` #import “Nestlean.h” `

7. Initialize Nestlean sdk in you AppDelegate's method **application:didFinishLaunchingWithOptions:**

 	` [Nestlean initWithApplicationKey: @”sdk_token”] `

### Methods

1. Custom Events track specific actions that users take within your app *[example: making a purchase, playing a video, or taking any possible app action]*. In order to track custom events, you need to call the method: 

	`[Nestlean event: @”event_name”];`

2. The second level in the Custom Event structure is the Event parameter *[example: user is registered or anonymous]*, see below an example:    

	`[Nestlean event: @”event_name” data: @{“key”:@"value"}];`

3. Feedback Screen is used to save and track user feedback. To integrate Feedback Screen you need to call the method: 

	`[Nestlean showFeedbackView];`

4. By default all the screens that our SDK can parse are being submitted automatically. If you have a custom screen that we cannot track automatiicaly, you can easily add the screen manually, just follow the method below: 

	`[Nestlean screen: @“screen_name”];`

---
---

### Swift Integration

1. Clone or download all the files

2. Add all the files to your project

3. Open Build Settings of your project and add the next flag: 
	
	```
	“Others Linker Flags” = “-ObjC” 
	“Objective-C Bridging Header” = “$(SRCROOT)/<path_to_Nestlean_folder>/Nestlean-Bridging-Header.h”
	```
	
4. Add frameworks to you project: 
	- CFNetwork.framework 
	- AVFoundation.framework 
	- CoreFoundation.framework 
	- CoreMotion.framework 
	- CoreVideo.framework 
	- CoreMedia.framework 
	- CoreTelephony.framework 
	- QuartzCore.framework 
	- SystemConfiguration.framework 

5. Add these keys in your info.plist file. (Related to the App Transport Security as of ios 9.0) They specify the exceptions needed for each domain so your app can successfully load the images for rewards

	```
	<key>NSAppTransportSecurity</key>
	<dict> 
  		<key>NSAllowsArbitraryLoads</key> <true/>
	</dict>
	```

6. Open you AppDelegate.swift file, take the code below and add it to **didFinishLaunchingWithOptions** method:  
	
	` Nestlean.initWithApplicationKey(“<sdk_token>”); `

### Methods

1. Custom Events track specific actions that users take within your app *[example: making a purchase, playing a video, or taking any possible app action]*. In order to track custom events, you need to call the method:  

	`Nestlean.event(“<event name>”);`

2. The second level in the Custom Event structure is the Event parameter *[example: user is registered or anonymous]*, see below an example:   

	` Nestlean.event("<event name>", data: ["value":true,"string":"some string”,"number": 123.234]);`

3. Feedback Screen is used to save and track user feedback. To integrate Feedback Screen you need to call the method: 

	` Nestlean.showFeedbackView();`

4. By default all the screens that our SDK can parse are being submitted automatically. If you have a custom screen that we cannot track automatiicaly, you can easily add the screen manually, just follow the method below:   
 
	`Nestlean.screen(“<Screen name>");`

---
---

### Author

Alex Bulgakov, alex@nestlean.com
