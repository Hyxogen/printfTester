project "ft_printf"
	kind "StaticLib"
	language "C"
	cdialect "C89"

	flags {
-- 		"FatalCompileWarnings"
	}

	warnings "Extra"

	files {
		"src/**.c",
		"src/**.h"
	}

	includedirs {
		"include"
	}