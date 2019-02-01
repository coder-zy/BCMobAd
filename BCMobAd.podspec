#
# Be sure to run `pod lib lint BCMobAd.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BCMobAd'
  s.version          = '0.1.0'
  s.summary          = 'A short description of BCMobAd.'

  s.description      = <<-DESC
    SDK介绍
                       DESC

  s.homepage         = 'https://github.com/coder-zy/BCMobAd'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'coder-zy' => 'zhangyang@baice100.com' }
  s.source           = { :git => 'https://github.com/coder-zy/BCMobAd.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'BCMobAd/Classes/**/*'
  
  # s.resource_bundles = {
  #   'BCMobAd' => ['BCMobAd/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.frameworks = 'CoreTelephony'
  s.vendored_libraries  = 'BCMobAd/Classes/*.{a}'

end
