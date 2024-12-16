// swift-tools-version:5.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
let package = Package(
    name: "GeoTollFramework",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "GeoTollFramework",
            targets: ["GeoTollFramework"]
        ),
    ],
    dependencies: [
        // No dependencies here as they will be handled by CocoaPods
    ],
    targets: [
        .target(
            name: "GeoTollFramework",
            dependencies: [],
            path: "./Sources/GeoTollFramework.xcframework"
        ),
        .testTarget(
            name: "GeoTollFrameworkTests",
            dependencies: ["GeoTollFramework"],
            path: "Tests/GeoTollFrameworkTests"
        ),
    ]
)
