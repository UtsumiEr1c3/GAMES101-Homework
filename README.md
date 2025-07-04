# GAMES101-计算机图形学入门作业

## Visual Studio 配置方法
- 解决方案 -> 属性 -> C/C++ -> 常规 -> 附加包含目录 -> 选择 eigen 文件夹
- win+s 搜索"编辑系统环境变量" -> 环境变量 -> 系统变量 -> path -> opencv/build/x64/vc16/bin
- 解决方案 -> 属性 -> VC++ 目录 -> 包含目录 -> opencv/build/include
- 解决方案 -> 属性 -> VC++ 目录 -> 库目录 -> opencv/build/x64/vc16/lib
- 解决方案 -> 属性 -> 链接器 -> 输入 -> 附加依赖项 -> opencv/build/x64/vc16/lib/opencv_world4110d.lib
- 应用, 确定

