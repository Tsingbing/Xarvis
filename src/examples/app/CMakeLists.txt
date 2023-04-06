
add_qtc_executable(Xarvis
  DEFINES 
  DEPENDS  Qt5::Core Qt5::Widgets
  SOURCES
    main.cpp form.cpp form.h form.ui
  DESTINATION "${IDE_APP_PATH}"
)
