1. Dependencies:

sudo apt update

# Basic dependency
sudo apt install libusb-dev

# Replace ROS 2 Humble packages with Jazzy versions
sudo apt install ros-jazzy-perception-pcl \
                 ros-jazzy-pcl-msgs \
                 ros-jazzy-vision-opencv \
                 ros-jazzy-xacro

# GTSAM (must be built using Eigen 4)
sudo rm -rf /usr/local/include/gtsam /usr/local/lib/libgtsam* /usr/local/cmake/gtsam
cd ~
git clone https://github.com/borglab/gtsam.git
cd gtsam
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DGTSAM_BUILD_WITH_EIGEN_MKL=OFF
make -j$(nproc)
sudo make install

# AEDE
Modifications:
1. Add imu
2. Add gz-ros2 bridge
3. Add pughin in world file

# LIO-SAM
Modifications:
1. (utility.hpp, line 36)
replace
#include <pcl_conversions/pcl_conversions/pcl_conversions.h>
with
#include <pcl_conversions/pcl_conversions.h>

2. Add following in CmakeList:find_package(pcl_conversions REQUIRED)
Add pcl_conversions to ament_target_dependencies(...)

3. Double check the transform matrices

4. Usage
source install/setup.bash
ros2 launch vehicle_simulator system_indoor.launch

export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
source install/setup.bash
ros2 launch lio_sam run.launch.py

source install/setup.bash
ros2 launch tare_planner explore_indoor.launch
