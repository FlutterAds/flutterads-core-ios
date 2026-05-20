Pod::Spec.new do |s|
  s.name             = 'FlutterAdsCore'
  s.version          = '2.0.0'
  s.summary          = 'A Flutter Ads plugin core library for iOS.'
  s.description      = <<-DESC
A Flutter Ads plugin core library for iOS.
                       DESC
  s.homepage         = 'https://flutterads.top/'
  s.license          = { :type => 'Apache-2.0', :file => 'LICENSE' }
  s.author           = { 'FlutterAds' => 'https://flutterads.top/' }
 
  # 二进制框架方式配置进行测试
  s.source           = { 
    :git => 'https://github.com/FlutterAds/flutterads-core-ios.git',
    :tag => "v#{s.version}"
  }
  
  s.ios.deployment_target = '11.0'
  s.requires_arc = true
  s.static_framework = true
  s.vendored_frameworks = 'FlutterAdsCore.xcframework'

  # GroMore 聚合 SDK
  s.dependency 'Ads-CN/BUAdSDK', '7.6.0.4'
  s.dependency 'Ads-CN/CSJMediation-Only', '7.6.0.4'
  # GroMore 测试 SDK（仅在 Debug 模式下有效）
  s.dependency 'Ads-CN/BUAdTestMeasurement', '7.6.0.4', :configurations => ['Debug']
  # 基础依赖
  s.frameworks = 'Foundation'
  
  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386',
    'VALID_ARCHS' => 'arm64 arm64e x86_64',
    'OTHER_LDFLAGS' => '-ObjC',
    'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/Public/FlutterAdsCore"',
    'PUBLIC_HEADERS_FOLDER_PATH' => '${PRODUCT_NAME}.framework/Headers'
  }
  
end
