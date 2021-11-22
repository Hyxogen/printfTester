project "Libft"
	kind "StaticLib"
	language "C"
	cdialect "C89"

	flags {
-- 		"FatalCompileWarnings"
	}

	warnings "Extra"

	files {
		"**.c",
		"**.h"
	}

	includedirs {
		"include"
	}