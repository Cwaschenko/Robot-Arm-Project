# Forward Kinematics 

        Given all Joint Angles Determine the End Position of Manipulatr

## Modular Characteristics
- number of joints
- different orientations
- different actuator sizes (hight and width)
- link lengths between Joints

## Sturcture of Program
```cpp
class ForwawrdKinematics: ForwardKinematics(Arm* 3DOF_Manipulator());
class Arm: Arm(int NumOfJoints,int NumOfLinks);
class Joint: Joint(string Name, bool Orientation);
class Matrix: Matrix(string name, int NumOfCols, int NumOfRows);
```
## Joint
- keeps track of angle of joint
- knows if horizantal or virtical
- keeps track of 3d point of center point of carrier exterior face relative to base frame
- able to rotate joint 
  
## Arm 
- holds an array of joints determined by __NumOfJoints__
- can chose a joint then rotate it
  - calculate each point relative to base frame
- returns each joint position and angle
---


```
 0
R   means rotation of frame one relative to frame zero
 1

	multiple rotations need dot product to compute full rotation	

	matrix tells the projection of a frame relative to another frame


Rotation about z axis

            Z Rotation Matrix
     x1           y1            z1
    ______________________________
x0 | Cos(theata)  -Sin(theata)  0
y0 | Sin(theata)  Cos(theata)   0
z0 | 0            0             1

            Y Rotation Matrix
     x1           y1            z1
    _______________________________________
x0 | Cos(theata)  0             Sin(theata)
y0 | 0            1             0
z0 | -Sin(theata) 0             Cos(theata)

            X Rotation Matrix
     x1           y1            z1
    ______________________________
x0 | 1            0             0
y0 | 0            Cos(theata)   -Sin(theata)
z0 | 0            Sin(theata)   Cos(theata)

            Idenity Rotation Matrix (does not rotate)
     x1           y1            z1
    ______________________________
x0 | 1            0             0
y0 | 0            1             0
z0 | 0            0             1

 0    0 1
R  = R R
 2    1 2


```