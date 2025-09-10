workspaceName = 'Towers'

if (os.isdir('build_files') == false) then
    os.mkdir('build_files')
end

if (os.isdir('external') == false) then
    os.mkdir('external')
end

workspace (workspaceName)
    location "../"
    configurations { "Debug", "Release" }
    platforms { "x86", "x64" }

    defaultplatform "x64"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    filter { "platforms:x64" }
        architecture "x86_64"

    filter {}

    targetdir "bin/%{cfg.buildcfg}/"

startproject(workspaceName)

project(workspaceName)
    kind "ConsoleApp"
    location "build_files/"
    targetdir "../bin/%{cfg.buildcfg}"

    filter { "system:windows", "configurations:Release", "action:gmake*" }
        kind "WindowedApp"
        buildoptions { "-Wl,--subsystem,windows" }

    filter { "system:windows", "configurations:Release", "action:vs*" }
        kind "WindowedApp"
        entrypoint "mainCRTStartup"

    filter {}

    vpaths
    {
        ["Header Files/*"] = { "../include/**.h",  "../include/**.hpp", "../src/**.h", "../src/**.hpp" },
        ["Source Files/*"] = { "../src/**.c", "src/**.cpp" },
        ["Windows Resource Files/*"] = { "../src/**.rc", "src/**.ico" },
    }

    files { "../src/**.c", "../src/**.cpp", "../src/**.h", "../src/**.hpp", "../include/**.h", "../include/**.hpp" }

    filter { "system:windows", "action:vs*" }
        files { "../src/*.rc", "../src/*.ico" }

    files { "../assets/" }

    filter {}

    includedirs { "../src" }
    includedirs { "../include" }

    cppdialect "C++17"
    
    filter { "action:vs*" }
        defines{ "_WINSOCK_DEPRECATED_NO_WARNINGS", "_CRT_SECURE_NO_WARNINGS" }
        characterset ("Unicode")
        buildoptions { "/Zc:__cplusplus" }

    filter "system:windows"
        defines{ "_WIN32 "}
        links { "winmm", "gdi32", "opengl32" }
        libdirs {"../bin/%{cfg.buildcfg}"}

    filter{}

    postbuildcommands {
        "{COPYDIR} %[../assets] %[../bin/%{cfg.buildcfg}/assets]"
    }