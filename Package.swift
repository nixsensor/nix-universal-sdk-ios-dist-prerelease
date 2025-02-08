// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "nix-universal-sdk-ios-dist-prerelease",
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
            path: "NixUniversalSDK.xcframework")
    ]
)
