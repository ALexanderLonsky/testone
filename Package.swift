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
        .package(url: "https://github.com/onmyway133/DeepDiff.git", from: "2.3.1"),
        .package(url: "https://github.com/pinterest/PINCache.git", from: "3.0.0"),
        .package(url: "https://github.com/ALexanderLonsky/testonecor.git", from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(
            name: "GiphyUISDK",
            path: "GiphyUISDK.xcframework"),
        .target(
            name: "GiphyUISDKWrapper",
            dependencies: [
               .target(name: "GiphyUISDK"),
                "DeepDiff", "PINCache", "GiphyCoreSDK"
            ],
            path: "./Sources"      
        ),    
    ]
)
