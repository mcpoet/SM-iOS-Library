=======
SMTools
=======

Set of useful objects for iOS applications. This is a static library that is designed to use as a dependent project.

Features
--------

Features
--------

* Asynchronous image view
* Convenient C functions for displaying iOS alerts
* NSConnection wrapper (with caching support)
* UIActivityIndicator wrapper, for creating "Loading" messages easily.
* Keychain wrapper for storing sensitive data in the keychain
* Persistency Manager: convenient messages for using Core Data
* PullToRefresh table view controller (Created by Leah Culver)
* RestClient for managing RESTFul API connections
* Socket Connector, for easiuly open a socket connection

Installation
------------

# Drag the SMTools.xcodeproj file to your project's navigator. 
# Go to the "Build Phases" of your target. Expand "Target Dependencies". Add "SMTools" target as a dependency by clicking on the + button.
# Go to the "Link Bunary With Libraries" section and expand it. Add "libSMTools.a" by clicking on the + button
# Go to the "Build Settings" of your target. Seach for "User Header Seach Paths". Double click on it and add a relative link to the "src/SMTools/SMTools". Click on the checkbox for making it recursive. 
# Now you can include files and compile your project  