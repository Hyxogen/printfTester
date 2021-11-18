project "printfTester"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "On"

	files {
		"src/**.cpp",
		"src/**.hpp"
	}

	includedirs {
    	"%{prj.location}/Dependencies/Air-Tester/Air-Tester/include",
    	"%{wks.location}/../include"
    }

	dependson {
		"Air-Tester",
		"ft_printf"
	}

	links {
		"Air-Tester",
		"ft_printf"
	}

    targetdir ("%{wks.location}/bin/" .. outputdir .. "%{prj.name}")
    objdir ("%{wks.location}/bin/" .. outputdir .. "%{prj.name}/int")

    filter "configurations:Debug"
    	defines {"PRINTF_TESTER_DEBUG"}
    	optimize "Debug"
    	symbols "On"

    filter "configurations:Release"
    	defines {"PRINTF_TESTER_RELEASE"}
    	optimize "On"
    	symbols "On"

    filter "configurations:Distribution"
    	defines {"PRINTF_TESTER_DISTRIBUTION"}
    	symbols "Off"
    	optimize "Full"