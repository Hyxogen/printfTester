project "ft_printf"
	kind "StaticLib"
	language "C"
	cdialect "C89"

	flags {
-- 		"FatalCompileWarnings"
	}

	warnings "Extra"

	dependson {
		"Libft"
	}

	files {
		"src/**.c",
		"src/**.h"
	}

	includedirs {
		"include",
		"Dependencies/Libft"
	}