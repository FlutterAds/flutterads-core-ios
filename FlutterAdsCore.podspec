Pod::Spec.new do |s|
  s.name             = 'FlutterAdsCore'
  s.version          = '1.0.0'
  s.summary          = 'A Flutter Ads plugin core library for iOS.'
  s.description      = <<-DESC
A Flutter Ads plugin core library for iOS.
                       DESC
  s.homepage         = 'https://flutterads.top/'
  s.license          = { :type => 'Apache-2.0', :file => 'LICENSE' }
  s.author           = { 'FlutterAds' => 'https://flutterads.top/' }
 
  # 二进制框架方式配置进行测试
  s.frameworks = 'Foundation'
  s.source           = { 
    :git => 'https://github.com/yourcompany/flutterads-core-ios.git',
    :tag => "v#{s.version}"
  }
  
  s.ios.deployment_target = '11.0'
  s.requires_arc = true
  s.static_framework = true
  s.vendored_frameworks = 'FlutterAdsCore.xcframework'
  
  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386'
  }
  
end
