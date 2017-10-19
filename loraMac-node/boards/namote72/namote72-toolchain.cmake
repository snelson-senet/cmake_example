
# Need this to otherwise CMake will fail toolchain tests
include(CMakeForceCompiler)

# Targeting an embedded system, no OS.
set(CMAKE_SYSTEM_NAME Generic)

set(CMAKE_SYSTEM_PROCESSOR M3)

set(GCC_ARM_PATH "/opt/gcc/gcc-arm-none-eabi-5_4-2016q3/bin")

CMAKE_FORCE_C_COMPILER(${GCC_ARM_PATH}/arm-none-eabi-gcc GNU)
CMAKE_FORCE_CXX_COMPILER(${GCC_ARM_PATH}/arm-none-eabi-g++ GNU)

message(STATUS "Cross-compiling with the gcc-arm-embedded toolchain")

# set(CMAKE_C_FLAGS
# "-mthumb -mcpu=cortex-m3 -fno-builtin --specs=nano.specs -std=c99 \
# -ffunction-sections -fdata-sections -fomit-frame-pointer \
#-Wl,--start-group -lgcc -lc -lm -lrdimon -Wl,--end-group")

# -Wl,-gc-sections -lc")

  set(CMAKE_C_FLAGS
  "-mthumb -mcpu=cortex-m3 -fno-builtin --specs=nosys.specs -std=c99 \
  -ffunction-sections -fdata-sections -fomit-frame-pointer \
 -Wl,--start-group -mabi=aapcs -lc -lm -lrdimon -Wl,--end-group")


# <Option name="UserEditLinker" value=" -mabi=aapcs; -lc; -lm; -lrdimon; ;"/>

add_definitions(-DSTM32L152xC)
