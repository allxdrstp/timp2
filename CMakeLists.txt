cmake_minimum_required(VERSION 3.10)
project(singleton_project)

# Добавление исходных файлов
set(SOURCES
    class.cpp
    main.cpp
    test.cpp
)

# Добавление заголовочных файлов
set(HEADERS
    class.h
)

# Включение папки с зависимостями, если они есть
# include_directories(dependencies)

# Добавление исполняемых файлов
add_executable(singleton_app ${SOURCES} ${HEADERS})

# Линковка с библиотеками, если они есть
# target_link_libraries(${PROJECT_NAME} PRIVATE library1 library2)
