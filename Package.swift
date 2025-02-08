//
//  Package.swift
//  NixUniversalSDK
//
//  Created by James Strack on 2025-02-07.
//

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
