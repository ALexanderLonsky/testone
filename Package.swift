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
    .package(name: "PINCache", url: "https://github.com/pinterest/PINCache", from: "3.0.1"),
    ],
    targets: [
        .binaryTarget(
            name: "GiphyUISDK",
            path: "GiphyUISDK.xcframework"),
        .target(
            name: "GiphyUISDKWrapper",
            dependencies: [
               .target(name: "GiphyUISDK"), "PINCache", "GiphyCoreSDK"
            ],
            path: "./Sources"
        ),
    ]
)
