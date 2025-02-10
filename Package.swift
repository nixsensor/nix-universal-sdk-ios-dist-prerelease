// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "NixUniversalSDK",
    platforms: [
        .iOS(.v12),
        .macOS(.v10_13),
    ],
    products: [
        .library(
            name: "NixUniversalSDK",
            targets: ["NixUniversalSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "NixUniversalSDK",
            path: "framework/NixUniversalSDK.xcframework")
    ]
)
