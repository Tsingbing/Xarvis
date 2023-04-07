
include(QtDir)

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
