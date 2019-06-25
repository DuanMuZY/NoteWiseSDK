#
# Be sure to run `pod lib lint NoteWiseSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'NoteWiseSDK'
  s.version          = '0.1.1'
  s.summary          = 'A short description of NoteWiseSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Lcccocoa/NoteWiseSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Lcccocoa' => '695818648@qq.com' }
  s.source           = { :git => 'https://github.com/Lcccocoa/NoteWiseSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'NoteWiseSDK/Classes/**/*'
  
  # s.resource_bundles = {
  #   'NoteWiseSDK' => ['NoteWiseSDK/Assets/*.png']
  # }
  
  s.resource = 'NoteWiseSDK/Assets/NoteBundleSDK.bundle'
  s.ios.vendored_frameworks = 'NoteWiseSDK/Classes/NoteWiseSDK.framework'
  s.frameworks = 'UIKit', 'MapKit'#, 'Security', 'AdSupport', 'Photos', 'libxml2.2', 'libsqlite3', 'CoreGraphics', 'libsqlite3.0', 'OpenGLES', 'QuartzCore', 'libz', 'libiconv.2.4.0', 'GLKit', 'SystemConfiguration', 'CoreTelephony', 'CoreLocation', 'CFNetwork', 'AVFoundation', 'AudioToolbox', 'libz.1.2.5', 'libc++'

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'JTCalendar'
  s.dependency 'CTMediator'
  s.dependency 'SDWebImage', '~> 3.8.0'
  s.dependency 'Masonry'
  s.dependency 'JPImageresizerView'
  s.dependency 'FFDropDownMenu'
  s.dependency 'MJExtension'
  s.dependency 'WebViewJavascriptBridge'
  s.dependency 'IFMMenu'
  s.dependency 'MJRefresh'
  s.dependency 'TZImagePickerController'
  s.dependency 'SVProgressHUD'
  s.dependency 'SGPagingView'
  # s.dependency 'UMShareSDK'
  # s.dependency 'XLPhotoBrowser'
  s.dependency 'AFNetworking'
  s.dependency 'FMDB'
  s.dependency 'SPAlertController'
  s.dependency 'MBProgressHUD'
  s.dependency 'iflyMSC'
end
