set(
  SOURCES
  main.cc
)

set(
  HEADERS
  ""
)

add_executable(
  ${APPLICATION_NAME}
  ${SOURCES}
  ${HEADERS}
)

target_link_libraries(
  ${APPLICATION_NAME} PUBLIC
)

target_link_libraries(
  ${APPLICATION_NAME} PRIVATE
)
