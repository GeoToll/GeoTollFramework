// swift-tools-version:5.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
let package = Package(
    name: "GeoTollFramework",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        // The library product makes the framework available to other packages or apps.
        .library(
            name: "GeoTollFramework",
            targets: ["GeoTollFramework"]
        ),
    ],
    dependencies: [
        // Add the SPM dependencies here without specifying branch or version
        .package(url: "https://github.com/Alamofire/Alamofire.git"),
        .package(url: "https://github.com/yourkarma/JWT.git"),
        .package(url: "https://github.com/instacart/TrueTime.swift.git"),
        .package(url: "https://github.com/rwbutler/Connectivity.git"),
    ],
    targets: [
        // Define the target for your framework.
        .target(
            name: "GeoTollFramework",
            dependencies: [
                "Alamofire",
                "JWT",
                "TrueTime",
                "Connectivity",
            ],
            path: "./iOS/Sources/GeoTollFramework.xcframework"
        ),
        // Define a test target for your framework.
        .testTarget(
            name: "GeoTollFrameworkTests",
            dependencies: ["GeoTollFramework"],
            path: ".iOS/Tests/GeoTollFrameworkTests"
        ),
    ]
)

