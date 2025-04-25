Pod::Spec.new do |spec|
  spec.name          = 'NixUniversalSDK'
  spec.version       = '4.2.1'
  spec.summary       = 'Library for Nix device integration'
  spec.description   = 'A library to allow integration of Nix devices into third party macOS and iOS applications'
  spec.homepage      = 'https://www.nixsensor.com'
  spec.author        = { 'Nix Sensor Ltd.' => 'sdk@nixsensor.com' }
  spec.license       = { :type => 'Custom', :file => 'EULA.md' }
  spec.source        = { :git => 'https://github.com/nixsensor/nix-universal-sdk-ios-dist-prerelease.git', :tag => spec.version.to_s }
  spec.swift_version = '5.3'
  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = [
    "framework/NixUniversalSDK.xcframework"
  ]
  spec.osx.deployment_target = '10.13'
  spec.osx.vendored_frameworks = [
    "framework/NixUniversalSDK.xcframework"
  ]

end