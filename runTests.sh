PREMAKE="./Vendor/premake/bin/release/premake5"
PREMAKE_DIR="./Vendor/premake"
FTPRINTF_DIR=".."
LIBFTPRINTF_DIR="$FTPRINTF_DIR/Dependencies/Libft"
FTPRINTF_PREMAKEFILE="ft_printf_premake5.lua"
LIBFT_PREMAKEFILE="libft_premake5.lua"

#git submodule update --init
cp "$FTPRINTF_PREMAKEFILE" "$FTPRINTF_DIR/premake5.lua"
cp "$LIBFT_PREMAKEFILE" "$LIBFTPRINTF_DIR/premake5.lua"

if [[ -f "$PREMAKE" ]]
then
	echo "Premake already exists!"
else
	if [ "$1" == "osx" ]
	then
		make -C "$PREMAKE_DIR" -f Bootstrap.mak osx
	fi
	if [ "$1" == "linux" ]
	then
		make -C "$PREMAKE_DIR" -f Bootstrap.mak linux
	fi
	if [ "$1" == "win" ]
	then
		nmake -C "$PREMAKE_DIR" -f Bootstrap.mak windows
	fi
fi

if [ "$1" == "osx" ]
	then
	  "$PREMAKE" gmake2
	fi
	if [ "$1" == "linux" ]
	then
		"$PREMAKE" gmake2
	fi
	if [ "$1" == "win" ]
	then
		"$PREMAKE" vs2022
	fi
