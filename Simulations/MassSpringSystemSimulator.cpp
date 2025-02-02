#include "MassSpringSystemSimulator.h"

MassSpringSystemSimulator::MassSpringSystemSimulator (){}

// UI Functions
const char * getTestCasesStr(){}
void initUI(DrawingUtilitiesClass * DUC){}
void reset(){}
void drawFrame(ID3D11DeviceContext* pd3dImmediateContext){}
void notifyCaseChanged(int testCase){}
void externalForcesCalculations(float timeElapsed){}
void simulateTimestep(float timeStep){}
void onClick(int x, int y){}
void onMouse(int x, int y){}

// Specific Functions
void setMass(float mass){}
void setStiffness(float stiffness){}
void setDampingFactor(float damping){}
int addMassPoint(Vec3 position, Vec3 Velocity, bool isFixed){}
void addSpring(int masspoint1, int masspoint2, float initialLength){}
int getNumberOfMassPoints(){}
int getNumberOfSprings(){}
Vec3 getPositionOfMassPoint(int index){}
Vec3 getVelocityOfMassPoint(int index){}
void applyExternalForce(Vec3 force){}