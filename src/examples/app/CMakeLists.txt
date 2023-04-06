
set(CMAKE_OSX_ARCHITECTURES x86_64)
if (APPLE)
    set(QT5_DIR ~/Qt/5.15.2/clang_64)
elseif (WIN32)
    set(QT5_DIR c:/Qt/6.4.0/mingw_64)
endif()

set(CMAKE_PREFIX_PATH ${QT5_DIR})

# Set up Qt stuff:
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5
  COMPONENTS Core Gui Widgets 
  REQUIRED
)
add_qtc_executable(Xarvis
  DEFINES 
  DEPENDS  Qt5::Core Qt5::Widgets
  SOURCES
    main.cpp form.cpp form.h form.ui
  DESTINATION "${IDE_APP_PATH}"
)
