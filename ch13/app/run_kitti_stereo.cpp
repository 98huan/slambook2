//
// Created by gaoxiang on 19-5-4.
//

#include <gflags/gflags.h>
#include "/home/zh/slambook2/ch13/include/myslam/visual_odometry.h"

DEFINE_string(config_file, "../config/default.yaml", "config file path");

int main(int argc, char **argv) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);

    myslam::VisualOdometry::Ptr vo(
        new myslam::VisualOdometry(FLAGS_config_file));
    assert(vo->Init() == true);
    vo->Run();

    return 0;
}
