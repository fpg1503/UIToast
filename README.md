# UIToast
An Objective-C class that adds Android-style toast notifications to iOS.
[![CI Status](http://img.shields.io/travis/fpg1503/UIToast.svg?style=flat)](https://travis-ci.org/fpg1503/UIToast)
[![Version](https://img.shields.io/cocoapods/v/UIToast.svg?style=flat)](http://cocoapods.org/pods/UIToast)
[![License](https://img.shields.io/cocoapods/l/UIToast.svg?style=flat)](http://cocoapods.org/pods/UIToast)
[![Platform](https://img.shields.io/cocoapods/p/UIToast.svg?style=flat)](http://cocoapods.org/pods/UIToast)

## Inspiration
`UIToast` is shamefully inspired on [Android toasts](http://developer.android.com/guide/topics/ui/notifiers/toasts.html). If you can I would recommend on **not using toasts on iOS**. If you don't have a choice (like me when I wrote this pod) this might just be the perfect lib for you.

## Usage
Usage is extremely simple and if you use it with Swift you'll think you're reading Android code (except for the lack of `context`s and semicolons :P).

```objective-c
NSString *text = @"Hello, UIToast!";
NSTimeInterval duration = 3.0;
[[UIToast makeText:text duration:duration] show];
```

or simply

```objective-c
[[UIToast makeText:@"Woah, that was easy!"] show];
```

## Contributing and future improvements
Feel free to open feature requests, issues and PRs. For now there is a small road map:
- [ ] Add Travis CI
- [ ] Create delegate for `UIToast`s
- [ ] Improve support for multiple toasts on screen
- [ ] Make it possible to customize position, color and font
- [ ] Support custom views as toasts
- [ ] Use autolayout
