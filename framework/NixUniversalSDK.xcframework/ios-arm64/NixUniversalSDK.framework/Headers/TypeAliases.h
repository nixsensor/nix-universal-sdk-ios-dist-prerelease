//
//  TypeAliases.h
//  NixUniversalSDK
//
//  Type aliases for convenience when using Objective-C
//  Created by James Strack on 2025-02-10.
//

#ifndef TypeAliases_h
#define TypeAliases_h

#import <Foundation/Foundation.h>
#import <NixUniversalSDK/NixUniversalSDK-Swift.h>

#pragma mark IDeviceScanner aliases
/// Nullable instance of an ``IDeviceScanner`` object
typedef id<IDeviceScanner> _Nullable DeviceScannerNullable;

/// Non-null instance of an ``IDeviceScanner`` object
typedef id<IDeviceScanner> _Nonnull DeviceScannerNonnull;

#pragma mark IDeviceCompat aliases
/// Nullable instance of an ``IDeviceCompat`` object
typedef id<IDeviceCompat> _Nullable DeviceCompatNullable;

/// Non-null instance of an ``IDeviceCompat`` object
typedef id<IDeviceCompat> _Nonnull DeviceCompatNonnull;

/// Completion block providing a nullable ``IDeviceCompat`` object
typedef void (^ DeviceCompatBlock)(DeviceCompatNullable);

#pragma mark IMeasurementData aliases
/// Nullable instance of an ``IMeasurementData`` object
typedef id<IMeasurementData> _Nullable MeasurementDataNullable;

/// Non-null instance of an ``IMeasurementData`` object
typedef id<IMeasurementData> _Nonnull MeasurementDataNonnull;

/// Dictionary providing ``IMeasurementData`` mapped to measurement modes
typedef NSDictionary<NSNumber *,id<IMeasurementData>> * _Nullable MeasurementDictionary;

#pragma mark ISpectralData aliases
/// Nullable instance of an ``ISpectralData`` object
typedef id<ISpectralData> _Nullable SpectralDataNullable;

/// Non-null instance of an ``ISpectralData`` object
typedef id<ISpectralData> _Nonnull SpectralDataNonnull;

#pragma mark IDensityData aliases
/// Nullable instance of an ``IDensityData`` object
typedef id<IDensityData> _Nullable DensityDataNullable;

/// Non-null instance of an ``IDensityData`` object
typedef id<IDensityData> _Nonnull DensityDataNonnull;

#pragma mark IColorData aliases
/// Nullable instance of an ``IColorData`` object
typedef id<IColorData> _Nullable ColorDataNullable;

/// Non-null instance of an ``IColorData`` object
typedef id<IColorData> _Nonnull ColorDataNonnull;

#endif /* TypeAliases_h */
