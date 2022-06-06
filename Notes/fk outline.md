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
class Joint: Joint("Base.ACU"); 
class Matrix: Matrix(string name, int NumOfCols, int NumOfRows);

```
## Joint
- Needs to be able to read acuator type file 
  - configure as needed
- keeps track of angle of joint
- knows if horizantal or virtical
- keeps track of 3d point of center point of carrier exterior face relative to base frame
- able to rotate joint 
  
## Arm 
- holds an array of joints determined by __NumOfJoints + 1__
- can chose a joint then rotate it
  - calculate each point relative to base frame
- returns each joint position and angle


## How to Automate the Initialization of the Positions of Each Joint In an Arm
 
 what do you need to know:
 -   Number of Joints
 -   the orientation of each joint
 -   the order of each joint 
 -   the distance between each joint
 -   Hight and width of each acuator

what can be wrapped in Joint class
- Acuator type 
  - would take care of
    - height
    - width
    - weight
    - name
    - orientation
    - contains a link
- pointer to link if present

what can be wraped in Arm class
 - order of each Joint
  - number of Joints

what can be wrapped in link class
- distance between 
- base and end joints


--- 
```
 1
R   means rotation of frame one relative to frame zero
 0

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

 2    1 2
R  = R R
 0    0 1
```