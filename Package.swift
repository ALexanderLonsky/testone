// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GiphyUISDK",
    products: [
        .library(
            name: "GiphyUISDK",
            targets: ["GiphyUISDKWrapper"]),
    ],
    dependencies: [
        .package(name: "GiphyCoreSDK", url: "https://github.com/ALexanderLonsky/testonecor.git", from: "1.0.1"),
        .package(name: "PINCache", url: "https://github.com/ALexanderLonsky/PINCache", from: "4.0.0"),

    ],
    targets: [
        .binaryTarget(
            name: "GiphyUISDK",
            path: "GiphyUISDK.xcframework"),
        .target(
            name: "GiphyUISDKWrapper",
            dependencies: [
                "GiphyCoreSDK", .target(name: "GiphyUISDK")
            ],
            path: "./Sources"      
        ),    
    ]
)
