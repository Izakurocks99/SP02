#ifndef Camera4_H
#define Camera4_H

#include "Camera.h"
#include "Vector3.h"
#include "Mtx44.h"

class Camera4 : public Camera
{
public:
	Vector3 defaultPosition;
	Vector3 defaultTarget;
	Vector3 defaultUp;
	float turnDir;

	Camera4();
	~Camera4();
	virtual void Init(const Vector3& pos, const Vector3& target, const Vector3& up);
	virtual void Update(double dt);
	virtual void Reset();
	virtual void BoundsCheck(const Vector3& view);
};

#endif