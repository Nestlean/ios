#
#  Be sure to run `pod spec lint CalcLib.podspec" to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name                    = "Nestlean"
  s.version                 = "1.1.0"
  s.summary                 = "Nestlean is a web based platform that covers the mobile app development lifecycle from Sandbox to Production"
  s.description             = <<-DESC
                  This SDK has been created to help iOS engineers to develop, distribute and test their apps.
                   DESC
  s.homepage                = "https://nestlean.com"
  s.license                 = { :type => "Commercial", :file => "LICENSE" }
  s.author                  = { "Alex Bulgakov" => "alex@nestlean.com" }
  s.platform                = :ios, "7.0"
  s.ios.deployment_target   = "7.0"
  s.source                  = { :git => "https://github.com/Nestlean/ios.git", :tag => "1.1.0"}
  s.source_files            = "*.h"
  s.public_header_files     = "*.h"
  s.preserve_paths          = "libNestlean.a"
  s.ios.vendored_library    = "libNestlean.a"
  s.libraries               = "Nestlean"
  s.frameworks              = "UIKit", "CoreFoundation", "CoreTelephony", "CoreVideo", "Security", "CoreMedia", "SystemConfiguration", "CoreMotion", "AVFoundation", "CFNetwork", "QuartzCore"
  s.requires_arc            = true
  s.xcconfig                = {'OTHER_LDFLAGS' => '-ObjC'}
end
