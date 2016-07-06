#include <pcl/visualization/cloud_viewer.h>
#include <pcl/io/pcd_io.h>
//...
typedef pcl::PointXYZI PointT;

int
main()
{
  pcl::PointCloud<PointT>::Ptr cloud (new pcl::PointCloud<PointT>);
  //... populate cloud
  std::string inputfile = "../PCD_file/my_pcd.pcd";
  pcl::io::loadPCDFile(inputfile.c_str(), *cloud);

  pcl::visualization::CloudViewer viewer ("Simple Cloud Viewer");
  viewer.showCloud (cloud);
  while (!viewer.wasStopped ())
  {
  }
  return 0;
}
