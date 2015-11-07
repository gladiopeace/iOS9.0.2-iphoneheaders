/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct Vec3 {
	float x;
	float y;
	float z;
} Vec3;

typedef struct SphericalObstacle {
	/*function pointer*/void* _vptr$Obstacle;
	float radius;
	Vec3 center;
	int _seenFrom;
} SphericalObstacle;

typedef struct SimpleVehicle {
	/*function pointer*/void* _vptr$AbstractLocalSpace;
	Vec3 _side;
	Vec3 _up;
	Vec3 _forward;
	Vec3 _position;
	float WanderSide;
	float WanderUp;
	Vec3 hisPositionAtNearestApproach;
	Vec3 ourPositionAtNearestApproach;
	BOOL gaudyPursuitAnnotation;
	int serialNumber;
	float _mass;
	float _radius;
	float _speed;
	float _maxForce;
	float _maxSpeed;
	float _curvature;
	Vec3 _lastForward;
	Vec3 _lastPosition;
	Vec3 _smoothedPosition;
	float _smoothedCurvature;
	Vec3 _smoothedAcceleration;
} SimpleVehicle;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_GK4;

typedef struct PolylinePathway {
	/*function pointer*/void* _vptr$PolylinePathway;
	int pointCount;
	Vec3 points;
	float radius;
	BOOL cyclic;
	float segmentLength;
	float segmentProjection;
	Vec3 local;
	Vec3 chosen;
	Vec3 segmentNormal;
	float lengths;
	Vec3 normals;
	float totalPathLength;
} PolylinePathway;

typedef struct mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> {
	unsigned long long __x_[312];
	unsigned __i_;
} mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005>;

