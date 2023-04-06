
add_qtc_executable(Xarvis
  DEFINES 
  DEPENDS  Qt5::Core Qt5::Widgets
  SOURCES
    main.cpp form.cpp form.h form.ui
  PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
    OUTPUT_NAME "${IDE_APP_TARGET}"
  DESTINATION "${IDE_APP_PATH}"
)
