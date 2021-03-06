#pragma once

struct Particle
{
	Matrix3f Fe;
	Matrix3f Fp;
	Vector3f velocity;
	//float density;
	//boost::array<float,64> weight;
	//boost::array<Vector3f,64> F_weight;
	Vector3f position;
	float volume;
	float pmass;
	int pid;
	bool isValid;

	Vector3f getGridIdx(Vector3f& grid_min,Vector3f& grid_size)
	{
		return (position-grid_min).cwiseQuotient(grid_size);
	}
	Vector3i getGridIdx_int(Vector3f& grid_min,Vector3f& grid_size)
	{
		return (position-grid_min).cwiseQuotient(grid_size).cast<int>();
	}


	Particle(int pid, Vector3f& position, Vector3f& velocity, float pmass);
	Particle(){}
};