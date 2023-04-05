

add_subdirectory(libs)
add_subdirectory(app)
add_subdirectory(app2)
#add_subdirectory(plugins)
#add_subdirectory(tools)
#add_subdirectory(share)


# file(WRITE ${CMAKE_BINARY_DIR}/cmake/QtCreatorConfig.cmake "
# include(CMakeFindDependencyMacro)
# find_dependency(Qt5
#   COMPONENTS Concurrent Core Network PrintSupport Qml Quick QuickWidgets Sql REQUIRED
# )

# if (NOT IDE_VERSION)
#   include(\${CMAKE_CURRENT_LIST_DIR}/JarvisIDEBranding.cmake)
# endif()

# if (NOT DEFINED add_qtc_plugin)
#   include(\${CMAKE_CURRENT_LIST_DIR}/JarvisAPI.cmake)
# endif()

# if (NOT DEFINED add_translation_targets)
#   include(\${CMAKE_CURRENT_LIST_DIR}/JarvisTranslations.cmake)
# endif()

# if (NOT TARGET QtCreator::Core)
#   include(\${CMAKE_CURRENT_LIST_DIR}/QtCreatorTargets.cmake)
# endif()
# ")


