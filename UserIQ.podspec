Pod::Spec.new do |s|
  s.name         = "UserIQ"
  s.version      = "2.0.3"
  s.summary      = "USER ONBOARDING & SELF HELP FOR MOBILE"
  s.description  = <<-DESC 
  					Codeless analytics, in-app messaging and customer health for iOS apps.
                   DESC
  s.homepage     = "https://github.com/useriq-com/ios-sdk"
  s.platform	 = :ios, "9.0"
  s.license      = { :type => "BSD",:file=>"LICENSE.md"}
  s.author       = { "Aravind G S" => "aravind.gs@useriq.com" }
  s.source       = { :git => "https://github.com/useriq-com/ios-sdk.git", :tag => s.version.to_s }
  s.vendored_frameworks = "SDK/UserIQ.framework"
  s.frameworks 	 = 'UIKit', 'Foundation', 'SystemConfiguration'
  s.requires_arc = true
end