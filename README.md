
[![CI Status](http://img.shields.io/travis/iOSleep/SafeKeyPath.svg?style=flat)](https://travis-ci.org/iOSleep/SafeKeyPath)
[![Version](https://img.shields.io/cocoapods/v/SafeKeyPath.svg?style=flat)](http://cocoapods.org/pods/SafeKeyPath)
[![License](https://img.shields.io/cocoapods/l/SafeKeyPath.svg?style=flat)](http://cocoapods.org/pods/SafeKeyPath)
[![Platform](https://img.shields.io/cocoapods/p/SafeKeyPath.svg?style=flat)](http://cocoapods.org/pods/SafeKeyPath)

inspiration by https://github.com/jspahrsummers/libextobjc

## Installation

SafeKeyPath is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'SafeKeyPath'
```

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

For object you can use like this


```objective-c
UIButtn *btn;
// simple
NSString *keyPath1 = KeyPath(btn, state);
// mulit
NSString *keyPath2 = KeyPath(btn, titleLabel, text);
```

you can also use Class to get keyPath

```objective-c
// simple
NSString *keyPath1 = KeyPath(btn, state);
// mulit
NSString *keyPath2 = KeyPath(btn, titleLabel, text);
```


## Author

iOSleep, mx.yolande@gmail.com

## License

SafeKeyPath is available under the MIT license. See the LICENSE file for more info.
